#include "sourceprovider.h"

SourceProvider::SourceProvider(QObject *parent)
    : QObject{parent}
{}

QString SourceProvider::start() const
{
    return QString("qrc:/icons/start.svg");
}

QString SourceProvider::stop() const
{
    return QString("qrc:/icons/stop.svg");
}

QString SourceProvider::lap() const
{
    return QString("qrc:/icons/lap.svg");
}

QString SourceProvider::reset() const
{
    return QString("qrc:/icons/reset.svg");
}
