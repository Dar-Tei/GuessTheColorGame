// playermanager.cpp

#include "playermanager.h"
#include <QFile>
#include <QJsonDocument>
#include <QColor>
#include <QDebug>

PlayerManager::PlayerManager(QObject *parent) : QObject(parent),
    m_filePath("../Guess_color_game/players_score/players_score.json")
{

}

bool PlayerManager::addPlayer(const QString &name) { // Update the return type to bool
    QFile file(m_filePath);
    if (!file.open(QIODevice::ReadWrite | QIODevice::Text)) {
        qDebug() << "Failed to open players.json";
        return false;
    }

    QByteArray data = file.readAll();
    QJsonDocument doc(QJsonDocument::fromJson(data));
    QJsonObject root = doc.object();

    if (!root.contains("players") || !root["players"].isArray()) {
        // If the "players" array does not exist, create it
        root["players"] = QJsonArray();
    }

    QJsonArray playersArray = root["players"].toArray();

    // Check if the player with the given name already exists
    for (const QJsonValue &playerValue : playersArray) {
        QJsonObject playerObject = playerValue.toObject();
        if (playerObject["name"].toString() == name) {
            qDebug() << "Player already exists";
            return false;
        }
    }

    // Create a new player object
    QJsonObject newPlayer;
    newPlayer["name"] = name;
    newPlayer["score"] = ""; // Initialize score with an empty string

    // Add the new player object to the players array
    playersArray.append(newPlayer);

    // Update the root object with the modified players array
    root["players"] = playersArray;
    doc.setObject(root);

    // Write the updated JSON data back to players.json
    file.resize(0); // Clear file content
    file.write(doc.toJson());
    file.close();

    return true; // Return true if the player is successfully added
}


void PlayerManager::updatePlayerScore(const QString &playerName, const QString &resultMessage, const QColor &referenceColor, const QColor &userColor, const QString &colorName) {
    qDebug() << "Player name to update:" << playerName; // Debug output for playerName

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

    // Iterate through the players array to find the player with the given name
    for (QJsonValueRef playerValue : playersArray) {
        QJsonObject playerObject = playerValue.toObject();
        QString playerNameInJson = playerObject["name"].toString().trimmed(); // Trim whitespace

        qDebug() << "Comparing player names:" << playerNameInJson << playerName;

        if (playerNameInJson.compare(playerName, Qt::CaseInsensitive) == 0) { // Case-insensitive comparison
            playerFound = true;

            // Update the player's score
            playerObject["score"] = resultMessage;

            // Add reference color and user color to the player's score entry as arrays of integers
            QJsonArray referenceColorArray;
            referenceColorArray.append(referenceColor.red());
            referenceColorArray.append(referenceColor.green());
            referenceColorArray.append(referenceColor.blue());
            playerObject["reference_color"] = referenceColorArray;

            QJsonArray userColorArray;
            userColorArray.append(userColor.red());
            userColorArray.append(userColor.green());
            userColorArray.append(userColor.blue());
            playerObject["user_color"] = userColorArray;

            // Add color name to the player's score entry
            playerObject["color_name"] = colorName;

            // Update the player object in the array
            playerValue = playerObject;
            break;
        }
    }

    if (!playerFound) {
        qDebug() << "Player not found";
        return;
    }

    // Update the root object with the modified players array
    root["players"] = playersArray;
    doc.setObject(root);

    // Write the updated JSON data back to players.json
    file.resize(0); // Clear file content
    file.write(doc.toJson());
    file.close();
}


QVector<QString> PlayerManager::getPlayerScores() {
    QVector<QString> playerScores;

    // Open the players_score.json file
    QFile file(m_filePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Failed to open players_score.json";
        return playerScores; // Return empty vector on failure
    }

    // Read the JSON data from the file
    QByteArray jsonData = file.readAll();
    qDebug() << "JSON Data:" << jsonData; // Print JSON data for debugging
    file.close();

    // Parse the JSON data
    QJsonDocument jsonDoc = QJsonDocument::fromJson(jsonData);
    if (jsonDoc.isNull() || !jsonDoc.isObject()) {
        qDebug() << "Invalid or empty JSON format in players_score.json";
        return playerScores; // Return empty vector if JSON format is invalid
    }

    // Get the root object
    QJsonObject root = jsonDoc.object();

    // Check if the "players" array exists
    if (!root.contains("players") || !root["players"].isArray()) {
        qDebug() << "No players array found in JSON data";
        return playerScores; // Return empty vector if "players" array is missing
    }

    // Convert the "players" array to a QJsonArray
    QJsonArray playersArray = root["players"].toArray();

    // Iterate through the players array and extract player names and scores
    for (const QJsonValue &playerValue : playersArray) {
        QJsonObject playerObject = playerValue.toObject();
        QString playerName = playerObject["name"].toString();
        QString playerScore = playerObject["score"].toString();
        QString playerInfo = QString("%1: %2").arg(playerName, playerScore);
        playerScores.append(playerInfo);
    }

    return playerScores;
}






