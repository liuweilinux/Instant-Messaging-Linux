/****************************************************************************
** Meta object code from reading C++ file 'IMClientSocketCtrl.h'
**
** Created: Mon Jun 1 09:21:56 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../control/IMClientSocketCtrl.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'IMClientSocketCtrl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_IMClientSocketCtrl[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   20,   19,   19, 0x05,
      61,   56,   19,   19, 0x05,
      98,   94,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
     120,   19,   19,   19, 0x0a,
     137,   20,   19,   19, 0x0a,
     169,   19,   19,   19, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_IMClientSocketCtrl[] = {
    "IMClientSocketCtrl\0\0temp\0"
    "sendSignal(SaveTmpInformation)\0user\0"
    "userLoginSignal(UserInformation)\0acc\0"
    "deleteSignal(QString)\0receiveMessage()\0"
    "sendMessage(SaveTmpInformation)\0"
    "deleteScoket()\0"
};

const QMetaObject IMClientSocketCtrl::staticMetaObject = {
    { &QTcpSocket::staticMetaObject, qt_meta_stringdata_IMClientSocketCtrl,
      qt_meta_data_IMClientSocketCtrl, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &IMClientSocketCtrl::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *IMClientSocketCtrl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *IMClientSocketCtrl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_IMClientSocketCtrl))
        return static_cast<void*>(const_cast< IMClientSocketCtrl*>(this));
    return QTcpSocket::qt_metacast(_clname);
}

int IMClientSocketCtrl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpSocket::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: sendSignal((*reinterpret_cast< const SaveTmpInformation(*)>(_a[1]))); break;
        case 1: userLoginSignal((*reinterpret_cast< const UserInformation(*)>(_a[1]))); break;
        case 2: deleteSignal((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: receiveMessage(); break;
        case 4: sendMessage((*reinterpret_cast< const SaveTmpInformation(*)>(_a[1]))); break;
        case 5: deleteScoket(); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void IMClientSocketCtrl::sendSignal(const SaveTmpInformation & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void IMClientSocketCtrl::userLoginSignal(const UserInformation & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void IMClientSocketCtrl::deleteSignal(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
