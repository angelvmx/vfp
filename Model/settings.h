#pragma once
#include <QObject>

class QString;
class QStringListModel;
class QJsonParseError;
class QJsonObject;
class QJsonError;
class QFile;
class QDir;

namespace Ps
{
    typedef std::pair<QJsonObject, QJsonParseError> JsonObjErrPair;

    class Settings : public QObject
    {
        Q_OBJECT
    public:
        explicit Settings(QObject *parent, QString filename);

        void ParseJsonData();


        QString getApplicationName() const;
        QString getAppShortName() const;
        QString getHostName() const;
        quint16 getPortNumber() const;
        int getShortWaitMs() const;
        int getLongWaitMs() const;
        QStringListModel &getCommandsAsModel() const;

    signals:
        void NotifyStatusMessage(QString message);

    private:
        QString m_filename;
        QString m_applicationName;
        QString m_appShortName;
        QString m_hostName;
        quint16 m_portNumber;
        int m_shortWaitMs;
        int m_longWaitMs;
        QStringListModel& m_modelCommands;

        QString ReadJsonFile();
        QString ReadJsonFromInternalResource();
        void SendErrorMessage(const QString &msg);
        JsonObjErrPair GetJsonObject(const QString &rawJson);
        void SetupCommands(QJsonObject json_obj);
        void ShowJsonParseError(QJsonParseError jsonError);
        QDir OpenConfigurationDirectory();
        void WriteDefaultToStdConfigFile(QFile &stdConfigFile, const QString &settings);

        explicit Settings(const Settings& rhs) = delete;
        Settings& operator= (const Settings& rhs) = delete;
    };
}
