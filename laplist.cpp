#include "laplist.h"

LapList::LapList(QObject *parent)
    : QObject{parent}
{}

void LapList::append(LapComponent *component)
{
    _laps.append(component);
}

int LapList::getCount() const { return _laps.count(); }

LapComponent *LapList::componentAt(const int &index) const
{
    return _laps.at(index);
}

void LapList::clear() { return _laps.clear(); }

QQmlListProperty<LapComponent> LapList::getLaps()
{
    return QQmlListProperty<LapComponent>(
        this, this,
        &LapList::appendComponent,
        &LapList::componentCount,
        &LapList::component,
        &LapList::clearComponents
        );
}

void LapList::appendComponent(
    QQmlListProperty<LapComponent> *list,
    LapComponent *component
    ) {
    reinterpret_cast<LapList *>(list->data)->append(component);
}

int LapList::componentCount(
    QQmlListProperty<LapComponent> *list
    ) {
    return reinterpret_cast<LapList *>(list->data)->getCount();
}

LapComponent *LapList::component(
    QQmlListProperty<LapComponent> *list,
    int index
    ) {
    return reinterpret_cast<LapList *>(list->data)->componentAt(index);
}

void LapList::clearComponents(QQmlListProperty<LapComponent> *list)
{
    reinterpret_cast<LapList *>(list->data)->clear();
}
