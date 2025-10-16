#ifndef WATCHTIMER_H
#define WATCHTIMER_H

#include <QObject>
#include <QTimer>
#include <memory>

class WatchTimer : public QObject
{
    Q_OBJECT
    Q_PROPERTY(
        QString time
            READ getTime
                WRITE setTime
                    NOTIFY timeChanged
                        FINAL)

    Q_PROPERTY(
        bool running
            READ getRunning
                WRITE setRunning
                    NOTIFY runningChanged
                        FINAL)

    Q_PROPERTY(
        int interval
            READ getInterval
                WRITE setInterval
                    NOTIFY intervalChanged
                        FINAL)
public:
    explicit WatchTimer(QObject *parent = nullptr);

    QString getTime() const;
    bool getRunning() const;

    void setInterval(const int &);
    int getInterval() const;
signals:
    void runningChanged(const bool &);
    void intervalChanged(const int &);
    void timeChanged(const QString &);

    void start();
    void stop();
    void reset();

public slots:

private:
    std::unique_ptr<QTimer> timer;
    unsigned int _minute;
    unsigned int _second;
    unsigned int _milisecond;
    QString _time;

private:
    void setRunning(const bool &);
    void setTime(const QString &);
    static QString formatStrTime(
        const int &,
        const int &,
        const int &
    );
};

#endif // WATCHTIMER_H
