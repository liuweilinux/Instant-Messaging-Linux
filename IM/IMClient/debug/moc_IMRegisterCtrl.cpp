/****************************************************************************
** Meta object code from reading C++ file 'IMRegisterCtrl.h'
**
** Created: Mon Jun 1 09:23:10 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../control/IMRegisterCtrl.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'IMRegisterCtrl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_IMRegisterCtrl[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      45,   15,   15,   15, 0x08,
      63,   15,   15,   15, 0x08,
      77,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_IMRegisterCtrl[] = {
    "IMRegisterCtrl\0\0signalResetBtnRegister(bool)\0"
    "requestRegister()\0readMessage()\0"
    "resetBtnRegister()\0"
};

const QMetaObject IMRegisterCtrl::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_IMRegisterCtrl,
      qt_meta_data_IMRegisterCtrl, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &IMRegisterCtrl::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *IMRegisterCtrl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *IMRegisterCtrl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_IMRegisterCtrl))
        return static_cast<void*>(const_cast< IMRegisterCtrl*>(this));
    return QObject::qt_metacast(_clname);
}

int IMRegisterCtrl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: signalResetBtnRegister((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: requestRegister(); break;
        case 2: readMessage(); break;
        case 3: resetBtnRegister(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void IMRegisterCtrl::signalResetBtnRegister(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
