/****************************************************************************
** Meta object code from reading C++ file 'eventthread.h'
**
** Created: Wed Oct 15 23:39:39 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../emaTest_src/eventthread.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'eventthread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EventThread[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   37,   43,   43, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_EventThread[] = {
    "EventThread\0dataReceived(EMA_EVENT*)\0"
    "event\0\0"
};

void EventThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        EventThread *_t = static_cast<EventThread *>(_o);
        switch (_id) {
        case 0: _t->dataReceived((*reinterpret_cast< EMA_EVENT*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData EventThread::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject EventThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_EventThread,
      qt_meta_data_EventThread, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EventThread::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EventThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EventThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EventThread))
        return static_cast<void*>(const_cast< EventThread*>(this));
    return QThread::qt_metacast(_clname);
}

int EventThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void EventThread::dataReceived(EMA_EVENT * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
