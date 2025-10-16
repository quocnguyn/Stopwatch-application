#include "watchtimer.h"
#include <QDebug>

QString WatchTimer::formatStrTime(
    const int &minute,
    const int &second,
    const int &milisecond
    ){
    return QString::fromStdString(
        std::to_string(minute).insert(0, minute < 10, '0') + ":" +
        std::to_string(second).insert(0, second < 10, '0') + ":" +
        std::to_string(milisecond).insert(0, milisecond < 10, '0')
    );
}

WatchTimer::WatchTimer(QObject *parent)
    : QObject{parent}, timer(std::make_unique<QTimer>()),
    _minute(0), _second(0), _milisecond(0)
{
    this->timer->setSingleShot(false);
    connect(timer.get(), &QTimer::timeout, [this](){
        constexpr int maxMilis = 100;
        constexpr int maxSeconds = 60;

        if(++_milisecond >= maxMilis){
            _milisecond = 0;
            _second++;
        }

        if(_second >= maxSeconds){
            _second = 0;
            _minute++;
        }

        this->setTime(formatStrTime(
            _minute, _second, _milisecond
        ));
    });

    connect(this, &WatchTimer::reset, [this](){
        this->timer->stop();
        this->setTime(formatStrTime(0, 0, 0));
        this->_milisecond = this->_second = this->_minute = 0;
    });

    connect(this, &WatchTimer::start, [this](){
        this->timer->start();
    });

    connect(this, &WatchTimer::stop, [this](){
        this->timer->stop();
    });

    this->setRunning(true);
}

void WatchTimer::setTime(const QString &new_time) {
    if(new_time == _time)
        return;
    _time = new_time;
    emit timeChanged(new_time);
}

QString WatchTimer::getTime() const { return _time; }

void WatchTimer::setRunning(const bool &new_running) {
    if(new_running == timer->isActive())
        return;

    new_running ? this->timer->start() : this->timer->stop();
    emit runningChanged(new_running);
}

bool WatchTimer::getRunning() const { return timer->isActive(); }

void WatchTimer::setInterval(const int &new_interval) {
    if(new_interval == timer->interval())
        return;
    timer->setInterval(new_interval);
    emit intervalChanged(new_interval);
}
int WatchTimer::getInterval() const { return timer->interval(); }
