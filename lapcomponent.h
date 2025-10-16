#ifndef LAPCOMPONENT_H
#define LAPCOMPONENT_H

#include <QObject>

class LapComponent : public QObject
{
    Q_OBJECT
    Q_PROPERTY(
        int number
            READ getNumber
                WRITE setNumber
                    NOTIFY numberChanged
                        FINAL)

    Q_PROPERTY(
        QString captureTime
            READ getCaptureTime
                WRITE setCaptureTime
                    NOTIFY captureTimeChanged
                        FINAL)
public:
    explicit LapComponent(QObject *parent = nullptr);

    void setNumber(const int &);
    int getNumber() const;

    QString getCaptureTime() const;
    void setCaptureTime(const QString &);

signals:
    void numberChanged(const int &);
    void captureTimeChanged(const QString &);

private:
    int _number;
    QString _captureTime;
};

#endif // LAPCOMPONENT_H
