#include "playermanager.h"
#include <QFile>
#include <QJsonDocument>
#include <QColor>
#include <QDebug>

PlayerManager::PlayerManager(QObject *parent) : QObject(parent),
    m_filePath("../Guess_color_game/players_score/players_score.json")
{

}

bool PlayerManager::addPlayer(const QString &name) {
    QFile file(m_filePath);
    if (!file.open(QIODevice::ReadWrite | QIODevice::Text)) {
        qDebug() << "Failed to open players.json";
        return false;
    }

    QByteArray data = file.readAll();
    QJsonDocument doc(QJsonDocument::fromJson(data));
    QJsonObject root = doc.object();

    if (!root.contains("players") || !root["players"].isArray()) {
        root["players"] = QJsonArray();
    }

    QJsonArray playersArray = root["players"].toArray();
    for (const QJsonValue &playerValue : playersArray) {
        QJsonObject playerObject = playerValue.toObject();
        if (playerObject["name"].toString() == name) {
            qDebug() << "Player already exists";
            return false;
        }
    }


    QJsonObject newPlayer;
    newPlayer["name"] = name;

    playersArray.append(newPlayer);

    root["players"] = playersArray;
    doc.setObject(root);

    file.resize(0);
    file.write(doc.toJson());
    file.close();

    return true;
}


void PlayerManager::updatePlayerScore(const QString &playerName, const QColor &referenceColor, const QColor &userColor, const QString &referenceColorName, const QString &userColorName, const QString &resultMessage) {
    qDebug() << "Player name to update:" << playerName;

    QFile file(m_filePath);
    if (!file.open(QIODevice::ReadWrite | QIODevice::Text)) {
        qDebug() << "Failed to open players.json";
        return;
    }

    QByteArray data = file.readAll();
    QJsonDocument doc(QJsonDocument::fromJson(data));
    QJsonObject root = doc.object();

    if (!root.contains("players") || !root["players"].isArray()) {
        qDebug() << "Invalid players.json format";
        return;
    }

    QJsonArray playersArray = root["players"].toArray();
    bool playerFound = false;

    for (QJsonValueRef playerValue : playersArray) {
        QJsonObject playerObject = playerValue.toObject();
        QString playerNameInJson = playerObject["name"].toString().trimmed();

        qDebug() << "Comparing player names:" << playerNameInJson << playerName;

        if (playerNameInJson.compare(playerName, Qt::CaseInsensitive) == 0) {
            playerFound = true;

            playerObject["score"] = resultMessage;

            QJsonArray userColorArray;
            userColorArray.append(userColor.red());
            userColorArray.append(userColor.green());
            userColorArray.append(userColor.blue());
            playerObject["user_color"] = userColorArray;

            QJsonArray referenceColorArray;
            referenceColorArray.append(referenceColor.red());
            referenceColorArray.append(referenceColor.green());
            referenceColorArray.append(referenceColor.blue());
            playerObject["reference_color"] = referenceColorArray;
            playerObject["user_color_name"] = userColorName;
            playerObject["reference_color_name"] = referenceColorName;
            playerValue = playerObject;

            break;
        }
    }

    if (!playerFound) {
        qDebug() << "Player not found";
        return;
    }

    root["players"] = playersArray;
    doc.setObject(root);
    file.resize(0);
    file.write(doc.toJson());
    file.close();
}


QVector<QString> PlayerManager::getPlayerScores() {
    QVector<QString> playerScores;

    QFile file(m_filePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Failed to open players_score.json";
        return playerScores;
    }

    QByteArray jsonData = file.readAll();
    qDebug() << "JSON Data:" << jsonData;
    file.close();

    QJsonDocument jsonDoc = QJsonDocument::fromJson(jsonData);
    if (jsonDoc.isNull() || !jsonDoc.isObject()) {
        qDebug() << "Invalid or empty JSON format in players_score.json";
        return playerScores;
    }

    QJsonObject root = jsonDoc.object();

    if (!root.contains("players") || !root["players"].isArray()) {
        qDebug() << "No players array found in JSON data";
        return playerScores;
    }

    QJsonArray playersArray = root["players"].toArray();

    for (const QJsonValue &playerValue : playersArray) {
        QJsonObject playerObject = playerValue.toObject();
        QString playerName = playerObject["name"].toString();
        QString referenceColor = getColorString(playerObject["reference_color"].toArray());
        QString referenceColorName = playerObject["reference_color_name"].toString();
        QString userColor = getColorString(playerObject["user_color"].toArray());
        QString userColorName = playerObject["user_color_name"].toString();
        QString score = playerObject["score"].toString();

        QString playerInfo = QString("%1, %2, %3, %4, %5, %6, %7").arg(playerName, referenceColor, referenceColorName, userColor, userColorName, score);
        playerScores.append(playerInfo);
    }

    return playerScores;
}

QString PlayerManager::getColorString(const QJsonArray &colorArray) {
    if (colorArray.size() != 3)
        return QString();

    int red = colorArray[0].toInt();
    int green = colorArray[1].toInt();
    int blue = colorArray[2].toInt();

    return QString("%1 %2 %3").arg(red).arg(green).arg(blue);
}
