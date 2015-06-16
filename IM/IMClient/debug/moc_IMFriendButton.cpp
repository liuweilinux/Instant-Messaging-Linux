/****************************************************************************
** Meta object code from reading C++ file 'IMFriendButton.h'
**
** Created: Mon Jun 1 09:23:26 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../view/IMFriendButton.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'IMFriendButton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_IMFriendButton[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      44,   15,   15,   15, 0x0a,
      72,   15,   15,   15, 0x0a,
      93,   15,   15,   15, 0x0a,
     114,   15,   15,   15, 0x0a,
     134,   15,   15,   15, 0x0a,
     152,   15,   15,   15, 0x0a,
     177,   15,   15,   15, 0x0a,
     199,   15,   15,   15, 0x0a,
     213,   15,   15,   15, 0x0a,
     235,   15,   15,   15, 0x0a,
     255,   15,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_IMFriendButton[] = {
    "IMFriendButton\0\0deleteFriendSignal(QString)\0"
    "onDoubleClickFriendButton()\0"
    "onClickRightButton()\0onClickSendMessage()\0"
    "onClickShowRecord()\0onClickSendMail()\0"
    "onClickShowInformation()\0onClickChangeRemark()\0"
    "onClickMove()\0onClickRemoveFriend()\0"
    "onClickEnterSpace()\0chatRoomQuit()\0"
};

const QMetaObject IMFriendButton::staticMetaObject = {
    { &QPushButton::staticMetaObject, qt_meta_stringdata_IMFriendButton,
      qt_meta_data_IMFriendButton, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &IMFriendButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *IMFriendButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *IMFriendButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_IMFriendButton))
        return static_cast<void*>(const_cast< IMFriendButton*>(this));
    return QPushButton::qt_metacast(_clname);
}

int IMFriendButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: deleteFriendSignal((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: onDoubleClickFriendButton(); break;
        case 2: onClickRightButton(); break;
        case 3: onClickSendMessage(); break;
        case 4: onClickShowRecord(); break;
        case 5: onClickSendMail(); break;
        case 6: onClickShowInformation(); break;
        case 7: onClickChangeRemark(); break;
        case 8: onClickMove(); break;
        case 9: onClickRemoveFriend(); break;
        case 10: onClickEnterSpace(); break;
        case 11: chatRoomQuit(); break;
        default: ;
        }
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void IMFriendButton::deleteFriendSignal(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
