#ifndef SOURCEPROVIDER_H
#define SOURCEPROVIDER_H

#include <QObject>

class SourceProvider : public QObject
{
    Q_OBJECT
public:
    explicit SourceProvider(QObject *parent = nullptr);

signals:
};

#endif // SOURCEPROVIDER_H
