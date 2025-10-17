#ifndef SOURCEPROVIDER_H
#define SOURCEPROVIDER_H

#include <QObject>

class SourceProvider : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString start READ start CONSTANT)
    Q_PROPERTY(QString stop READ stop CONSTANT)
    Q_PROPERTY(QString lap READ lap CONSTANT)
    Q_PROPERTY(QString reset READ reset CONSTANT)
public:
    explicit SourceProvider(QObject *parent = nullptr);
    QString start() const;
    QString stop() const;
    QString lap() const;
    QString reset() const;
signals:
};

#endif // SOURCEPROVIDER_H
