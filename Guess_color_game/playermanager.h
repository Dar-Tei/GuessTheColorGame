// playermanager.h

#ifndef PLAYERMANAGER_H
#define PLAYERMANAGER_H

#include <QObject>
#include <QJsonArray>
#include <QJsonObject>
#include <QString>
#include <QVector>

class PlayerManager : public QObject
{
    Q_OBJECT
public:
    explicit PlayerManager(QObject *parent = nullptr);

    bool addPlayer(const QString &name);
    bool updatePlayer(const QString &name, const QJsonObject &data);
    void updatePlayerScore(const QString &playerName, const QColor &referenceColor, const QColor &userColor, const QString &referenceColorName, const QString &userColorName, const QString &resultMessage);
    QVector<QString> getPlayerScores();

private:
    QString m_filePath;

    QJsonArray readPlayersJson() const;
    bool writePlayersJson(const QJsonArray &array) const;
    QString getColorString(const QJsonArray &colorArray);
};

#endif // PLAYERMANAGER_H
