/****************************************************************************
** Meta object code from reading C++ file 'dialog.h'
**
** Created: Wed Oct 15 23:39:37 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../emaTest_src/dialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Dialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       7,   14,   14,   14, 0x08,
      15,   14,   14,   14, 0x08,
      23,   14,   14,   14, 0x08,
      42,   14,   14,   14, 0x08,
      61,   14,   14,   14, 0x08,
      81,   14,   14,   14, 0x08,
      96,   14,   14,   14, 0x08,
     108,   14,   14,   14, 0x08,
     120,   14,   14,   14, 0x08,
     133,   14,   14,   14, 0x08,
     146,   14,   14,   14, 0x08,
     159,   14,   14,   14, 0x08,
     173,  202,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Dialog[] = {
    "Dialog\0open()\0\0close()\0wiegandSetConfig()\0"
    "wiegandGetConfig()\0wiegandAutoDetect()\0"
    "writeWiegand()\0writeGPO1()\0writeGPO2()\0"
    "writeGPO12()\0writeRelay()\0usbPowerOn()\0"
    "usbPowerOff()\0showReceivedData(EMA_EVENT*)\0"
    "event\0"
};

void Dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Dialog *_t = static_cast<Dialog *>(_o);
        switch (_id) {
        case 0: _t->open(); break;
        case 1: _t->close(); break;
        case 2: _t->wiegandSetConfig(); break;
        case 3: _t->wiegandGetConfig(); break;
        case 4: _t->wiegandAutoDetect(); break;
        case 5: _t->writeWiegand(); break;
        case 6: _t->writeGPO1(); break;
        case 7: _t->writeGPO2(); break;
        case 8: _t->writeGPO12(); break;
        case 9: _t->writeRelay(); break;
        case 10: _t->usbPowerOn(); break;
        case 11: _t->usbPowerOff(); break;
        case 12: _t->showReceivedData((*reinterpret_cast< EMA_EVENT*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Dialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Dialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Dialog,
      qt_meta_data_Dialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Dialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Dialog))
        return static_cast<void*>(const_cast< Dialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int Dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
