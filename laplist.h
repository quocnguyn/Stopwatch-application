#ifndef LAPLIST_H
#define LAPLIST_H

#include <QObject>
#include <QQmlListProperty>
#include <QVector>
#include <lapcomponent.h>

class LapList : public QObject
{
    Q_OBJECT
    Q_PROPERTY(
        int count
            READ getCount
                NOTIFY countChanged
                    FINAL)
    Q_PROPERTY(
        QQmlListProperty<LapComponent> laps
            READ getLaps
                NOTIFY lapsChanged
                    FINAL)
public:
    explicit LapList(QObject *parent = nullptr);

signals:
    void countChanged();
    void lapsChanged();

public:
    void appendComponentHelper(LapComponent *);
    LapComponent* componentHelper(const int &) const;
    void clearComponentsHelper();

    QQmlListProperty<LapComponent> getLaps();

    void append(LapComponent *);
    int getCount() const;
    LapComponent* componentAt(const int &) const;
    void clear();

private:
    //Callback Methods
    static void appendComponent(QQmlListProperty<LapComponent>*, LapComponent*);
    static int componentCount(QQmlListProperty<LapComponent>*);
    static LapComponent* component(QQmlListProperty<LapComponent>*, int);
    static void clearComponents(QQmlListProperty<LapComponent>*);

    QVector<LapComponent *> _laps;
};

#endif // LAPLIST_H
