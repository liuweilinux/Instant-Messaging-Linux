/****************************************************************************
** Meta object code from reading C++ file 'IMTcpServer.h'
**
** Created: Mon Jun 1 09:21:54 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../model/IMTcpServer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'IMTcpServer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_IMTcpServer[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   13,   12,   12, 0x05,
      43,   35,   12,   12, 0x05,
      67,   13,   12,   12, 0x05,
      87,   35,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
     112,   13,   12,   12, 0x0a,
     145,  140,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_IMTcpServer[] = {
    "IMTcpServer\0\0id\0haveNewID(QString)\0"
    "address\0haveNewAddress(QString)\0"
    "haveLeftID(QString)\0haveLeftAddress(QString)\0"
    "clientDisconnected(QString)\0temp\0"
    "sendMessage(SaveTmpInformation)\0"
};

const QMetaObject IMTcpServer::staticMetaObject = {
    { &QTcpServer::staticMetaObject, qt_meta_stringdata_IMTcpServer,
      qt_meta_data_IMTcpServer, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &IMTcpServer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *IMTcpServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *IMTcpServer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_IMTcpServer))
        return static_cast<void*>(const_cast< IMTcpServer*>(this));
    return QTcpServer::qt_metacast(_clname);
}

int IMTcpServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpServer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: haveNewID((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: haveNewAddress((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: haveLeftID((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: haveLeftAddress((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: clientDisconnected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: sendMessage((*reinterpret_cast< const SaveTmpInformation(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void IMTcpServer::haveNewID(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void IMTcpServer::haveNewAddress(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void IMTcpServer::haveLeftID(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void IMTcpServer::haveLeftAddress(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
