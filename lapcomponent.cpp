#include "lapcomponent.h"

LapComponent::LapComponent(QObject *parent)
    : QObject{parent}
{}

void LapComponent::setNumber(const int &new_number)
{
    if(_number == new_number)
        return;
    _number = new_number;

    emit numberChanged(new_number);
}

int LapComponent::getNumber() const { return _number; }

QString LapComponent::getCaptureTime() const { return _captureTime; }

void LapComponent::setCaptureTime(const QString &new_captureTime)
{
    if(_captureTime == new_captureTime)
        return;
    _captureTime = new_captureTime;

    emit captureTimeChanged(new_captureTime);
}
