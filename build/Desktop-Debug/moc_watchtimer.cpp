/****************************************************************************
** Meta object code from reading C++ file 'watchtimer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../watchtimer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'watchtimer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WatchTimer_t {
    QByteArrayData data[11];
    char stringdata0[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WatchTimer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WatchTimer_t qt_meta_stringdata_WatchTimer = {
    {
QT_MOC_LITERAL(0, 0, 10), // "WatchTimer"
QT_MOC_LITERAL(1, 11, 14), // "runningChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 15), // "intervalChanged"
QT_MOC_LITERAL(4, 43, 11), // "timeChanged"
QT_MOC_LITERAL(5, 55, 5), // "start"
QT_MOC_LITERAL(6, 61, 4), // "stop"
QT_MOC_LITERAL(7, 66, 5), // "reset"
QT_MOC_LITERAL(8, 72, 4), // "time"
QT_MOC_LITERAL(9, 77, 7), // "running"
QT_MOC_LITERAL(10, 85, 8) // "interval"

    },
    "WatchTimer\0runningChanged\0\0intervalChanged\0"
    "timeChanged\0start\0stop\0reset\0time\0"
    "running\0interval"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WatchTimer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       3,   56, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       3,    1,   47,    2, 0x06 /* Public */,
       4,    1,   50,    2, 0x06 /* Public */,
       5,    0,   53,    2, 0x06 /* Public */,
       6,    0,   54,    2, 0x06 /* Public */,
       7,    0,   55,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       8, QMetaType::QString, 0x00495903,
       9, QMetaType::Bool, 0x00495903,
      10, QMetaType::Int, 0x00495903,

 // properties: notify_signal_id
       2,
       0,
       1,

       0        // eod
};

void WatchTimer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WatchTimer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->runningChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 1: _t->intervalChanged((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 2: _t->timeChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->start(); break;
        case 4: _t->stop(); break;
        case 5: _t->reset(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WatchTimer::*)(const bool & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WatchTimer::runningChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WatchTimer::*)(const int & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WatchTimer::intervalChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (WatchTimer::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WatchTimer::timeChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (WatchTimer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WatchTimer::start)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (WatchTimer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WatchTimer::stop)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (WatchTimer::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WatchTimer::reset)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<WatchTimer *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getTime(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->getRunning(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->getInterval(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<WatchTimer *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTime(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setRunning(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setInterval(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject WatchTimer::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_WatchTimer.data,
    qt_meta_data_WatchTimer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WatchTimer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WatchTimer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WatchTimer.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int WatchTimer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void WatchTimer::runningChanged(const bool & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WatchTimer::intervalChanged(const int & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WatchTimer::timeChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void WatchTimer::start()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void WatchTimer::stop()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void WatchTimer::reset()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
