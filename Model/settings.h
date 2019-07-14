#pragma once
#include <QObject>

class QString;
class QStringListModel;
class QJsonParseError;
class QJsonObject;
class QFile;
class QDir;

namespace Ps {
    class Settings : public QObject
    {
        Q_OBJECT
    public:
        explicit Settings(QObject *parent, QString filename);

    signals:
        void NotifyStatusMessage(QString message);

    private:
        QString m_filename;
        QString ReadJsonFile();
        QString ReadJsonFromInternalResource();
        explicit Settings(const Settings& rhs) = delete;
        Settings& operator= (const Settings& rhs) = delete;
        void SendErrorMessage(const QString &msg);
    };
}
