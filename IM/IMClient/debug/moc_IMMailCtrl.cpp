/****************************************************************************
** Meta object code from reading C++ file 'IMMailCtrl.h'
**
** Created: Mon Jun 1 09:23:09 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../control/IMMailCtrl.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'IMMailCtrl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_IMMailCtrl[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,
      56,   11,   11,   11, 0x05,
     101,   11,   11,   11, 0x05,
     124,   11,   11,   11, 0x05,
     152,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
     179,   11,   11,   11, 0x0a,
     212,   11,   11,   11, 0x0a,
     232,   11,   11,   11, 0x0a,
     258,  253,   11,   11, 0x0a,
     293,  253,   11,   11, 0x0a,
     329,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_IMMailCtrl[] = {
    "IMMailCtrl\0\0getInMailsSuccess(QVector<MailInformation>)\0"
    "getOutMailsSuccess(QVector<MailInformation>)\0"
    "deleteMailSuccess(int)\0"
    "getOutMail(MailInformation)\0"
    "getInMail(MailInformation)\0"
    "requestSendMail(MailInformation)\0"
    "requestGetInMails()\0requestGetOutMails()\0"
    "mail\0requestDeleteMail(MailInformation)\0"
    "requestSetMailRead(MailInformation)\0"
    "readMessage()\0"
};

const QMetaObject IMMailCtrl::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_IMMailCtrl,
      qt_meta_data_IMMailCtrl, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &IMMailCtrl::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *IMMailCtrl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *IMMailCtrl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_IMMailCtrl))
        return static_cast<void*>(const_cast< IMMailCtrl*>(this));
    return QObject::qt_metacast(_clname);
}

int IMMailCtrl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: getInMailsSuccess((*reinterpret_cast< const QVector<MailInformation>(*)>(_a[1]))); break;
        case 1: getOutMailsSuccess((*reinterpret_cast< const QVector<MailInformation>(*)>(_a[1]))); break;
        case 2: deleteMailSuccess((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 3: getOutMail((*reinterpret_cast< const MailInformation(*)>(_a[1]))); break;
        case 4: getInMail((*reinterpret_cast< const MailInformation(*)>(_a[1]))); break;
        case 5: requestSendMail((*reinterpret_cast< const MailInformation(*)>(_a[1]))); break;
        case 6: requestGetInMails(); break;
        case 7: requestGetOutMails(); break;
        case 8: requestDeleteMail((*reinterpret_cast< const MailInformation(*)>(_a[1]))); break;
        case 9: requestSetMailRead((*reinterpret_cast< const MailInformation(*)>(_a[1]))); break;
        case 10: readMessage(); break;
        default: ;
        }
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void IMMailCtrl::getInMailsSuccess(const QVector<MailInformation> & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void IMMailCtrl::getOutMailsSuccess(const QVector<MailInformation> & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void IMMailCtrl::deleteMailSuccess(const int & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void IMMailCtrl::getOutMail(const MailInformation & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void IMMailCtrl::getInMail(const MailInformation & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
