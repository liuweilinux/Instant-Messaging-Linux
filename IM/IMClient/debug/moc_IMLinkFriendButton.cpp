/****************************************************************************
** Meta object code from reading C++ file 'IMLinkFriendButton.h'
**
** Created: Mon Jun 1 09:23:31 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../view/IMLinkFriendButton.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'IMLinkFriendButton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_IMLinkFriendButton[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x0a,
      42,   19,   19,   19, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_IMLinkFriendButton[] = {
    "IMLinkFriendButton\0\0onDoubleClickButton()\0"
    "ignoreMessage()\0"
};

const QMetaObject IMLinkFriendButton::staticMetaObject = {
    { &IMLinkButton::staticMetaObject, qt_meta_stringdata_IMLinkFriendButton,
      qt_meta_data_IMLinkFriendButton, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &IMLinkFriendButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *IMLinkFriendButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *IMLinkFriendButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_IMLinkFriendButton))
        return static_cast<void*>(const_cast< IMLinkFriendButton*>(this));
    return IMLinkButton::qt_metacast(_clname);
}

int IMLinkFriendButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = IMLinkButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: onDoubleClickButton(); break;
        case 1: ignoreMessage(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
