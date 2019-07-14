#include "settings.h"
#include <QString>
#include <QDir>
#include <QFile>

namespace Ps
{
    static auto RESOURCE_PREFIX = QStringLiteral(":/json");

    Settings::Settings(QObject *parent, QString filename) :
        QObject(parent),
        m_filename(filename)
    {
        ReadJsonFile();
    }

    QString Settings::ReadJsonFile()
    {
        auto default_settings = ReadJsonFromInternalResource();
        return default_settings;
    }

    QString Settings::ReadJsonFromInternalResource()
    {
        QDir res_dir (RESOURCE_PREFIX);

        if (!res_dir.exists())
        {
            SendErrorMessage("Internal resource path missing " +
                res_dir.canonicalPath());
            return "";
        }

        auto path = res_dir.filePath(m_filename);
        QFile res_file(path);

        if (!res_file.open(QFile::ReadOnly | QFile::Text))
        {
            SendErrorMessage("Could not open internal resource " +
                path);
            return "";
        }

        QString settings = res_file.readAll();
        return settings;
    }

    void Settings::SendErrorMessage(const QString& msg)
    {
        emit NotifyStatusMessage(msg);
    }

}
