/****************************************************************************
** Meta object code from reading C++ file 'IMMainWidget.h'
**
** Created: Mon Jun 1 09:23:39 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../view/IMMainWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'IMMainWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_IMMainWidget[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      61,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   14,   13,   13, 0x05,
      81,   79,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
     129,   13,   13,   13, 0x0a,
     153,   13,   13,   13, 0x0a,
     176,   13,   13,   13, 0x0a,
     204,   13,   13,   13, 0x0a,
     244,  223,   13,   13, 0x0a,
     304,   13,   13,   13, 0x0a,
     352,   13,   13,   13, 0x0a,
     398,   13,   13,   13, 0x0a,
     459,   13,  454,   13, 0x0a,
     504,  494,  454,   13, 0x0a,
     545,  537,  454,   13, 0x0a,
     588,   13,   13,   13, 0x0a,
     626,   79,   13,   13, 0x0a,
     655,   13,   13,   13, 0x0a,
     695,   13,   13,   13, 0x0a,
     734,   13,   13,   13, 0x0a,
     769,   13,   13,   13, 0x0a,
     803,   13,   13,   13, 0x0a,
     842,   13,   13,   13, 0x0a,
     891,   13,   13,   13, 0x0a,
     929,   13,   13,   13, 0x0a,
     977,   13,   13,   13, 0x0a,
    1011,   13,   13,   13, 0x0a,
    1040,   14,   13,   13, 0x0a,
    1079,   13,   13,   13, 0x0a,
    1113, 1100,   13,   13, 0x0a,
    1139,   14,   13,   13, 0x0a,
    1176,   79,   13,   13, 0x0a,
    1210,   13,   13,   13, 0x0a,
    1247,   13,   13,   13, 0x0a,
    1299, 1294,   13,   13, 0x0a,
    1321,   13,   13,   13, 0x0a,
    1343,   13,   13,   13, 0x0a,
    1362,   13,   13,   13, 0x0a,
    1380,   13,   13,   13, 0x0a,
    1399,   13,   13,   13, 0x0a,
    1413,   13,   13,   13, 0x0a,
    1432,   13,   13,   13, 0x0a,
    1452,   13,   13,   13, 0x0a,
    1477, 1469,   13,   13, 0x0a,
    1506,   13,   13,   13, 0x0a,
    1539, 1532,   13,   13, 0x0a,
    1575, 1560,   13,   13, 0x0a,
    1609,   14,   13,   13, 0x0a,
    1657,   13,   13,   13, 0x0a,
    1678,   13,   13,   13, 0x0a,
    1693, 1690,   13,   13, 0x0a,
    1719,   13,   13,   13, 0x0a,
    1741,   13,   13,   13, 0x0a,
    1759,   13,   13,   13, 0x08,
    1773,   13,   13,   13, 0x08,
    1791,   13,   13,   13, 0x08,
    1810,   13,   13,   13, 0x08,
    1854, 1848,   13,   13, 0x08,
    1874,   79,   13,   13, 0x08,
    1924,   14,   13,   13, 0x08,
    2008, 1986,   13,   13, 0x08,
    2085,   13,   13,   13, 0x08,
    2104,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_IMMainWidget[] = {
    "IMMainWidget\0\0,,\0"
    "exportHistoryMessageOneFriendSuccess(QString,QString,QString)\0"
    ",\0exportHistoryMessageAllSuccess(QString,QString)\0"
    "getFriendsInformation()\0getFlocksInformation()\0"
    "getDiscussionsInformation()\0"
    "getLatestMessage()\0friendID,date,mesVec\0"
    "setNetworkMessageWidget(QString,QDate,QVector<TalkMessage>)\0"
    "setFriendListWidget(QVector<FriendInformation>)\0"
    "setFlockListWidget(QVector<FlockInformation>)\0"
    "setDiscussionListWidget(QVector<DiscussionInformation>)\0"
    "bool\0addFriendButton(FriendInformation)\0"
    "flcokInfo\0addFlockButton(FlockInformation)\0"
    "disInfo\0addDiscussionButton(DiscussionInformation)\0"
    "receiveFriendTalkMessage(TalkMessage)\0"
    "setFriendStatus(QString,int)\0"
    "setFriendInformation(FriendInformation)\0"
    "showFriendInformation(UserInformation)\0"
    "showMyInformation(UserInformation)\0"
    "setMyInformation(UserInformation)\0"
    "showFlockInformation(FlockInformation)\0"
    "showDiscussionInformation(DiscussionInformation)\0"
    "setFlockInformation(FlockInformation)\0"
    "setDiscussionInformation(DiscussionInformation)\0"
    "setFlockMemberRemark(TempStrings)\0"
    "setFriendRemark(TempStrings)\0"
    "deletedFriend(QString,QString,QString)\0"
    "dropedFlock(QString)\0discussionID\0"
    "dropedDiscussion(QString)\0"
    "leavedFlock(QString,QString,QString)\0"
    "leavedDiscussion(QString,QString)\0"
    "createFlockSuccess(FlockInformation)\0"
    "createDiscussionSuccess(DiscussionInformation)\0"
    "text\0searchFriend(QString)\0"
    "onClickSearchFriend()\0onClickAddFriend()\0"
    "onClickAddFlock()\0onClickChangePwd()\0"
    "createFlock()\0createDiscussion()\0"
    "showMessageWidget()\0showMailWidget()\0"
    "address\0showMailWriteWidget(QString)\0"
    "showLatestMessageWidget()\0isOpen\0"
    "setTimerStatus(bool)\0title,newTitle\0"
    "renameBoxSuccess(QString,QString)\0"
    "moveFriendToBoxSuccess(QString,QString,QString)\0"
    "onClickRightButton()\0createBox()\0id\0"
    "removeLinkButton(QString)\0"
    "removeAllLinkButton()\0showAllChatRoom()\0"
    "closeWindow()\0closeAllWindows()\0"
    "getMyInformation()\0"
    "receiveMessagesFromChat(TalkMessage&)\0"
    "index\0changeMyStatus(int)\0"
    "receiveFriendRequest(TalkMessage,UserInformation)\0"
    "receiveFlockRequest(TalkMessage,FlockMember,FlockInformation)\0"
    "mes,member,discussion\0"
    "receiveDiscussionRequest(TalkMessage,DiscussionMember,DiscussionInform"
    "ation)\0"
    "removeBox(QString)\0renameBox(QString)\0"
};

const QMetaObject IMMainWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_IMMainWidget,
      qt_meta_data_IMMainWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &IMMainWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *IMMainWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *IMMainWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_IMMainWidget))
        return static_cast<void*>(const_cast< IMMainWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int IMMainWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: exportHistoryMessageOneFriendSuccess((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 1: exportHistoryMessageAllSuccess((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: getFriendsInformation(); break;
        case 3: getFlocksInformation(); break;
        case 4: getDiscussionsInformation(); break;
        case 5: getLatestMessage(); break;
        case 6: setNetworkMessageWidget((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QDate(*)>(_a[2])),(*reinterpret_cast< const QVector<TalkMessage>(*)>(_a[3]))); break;
        case 7: setFriendListWidget((*reinterpret_cast< const QVector<FriendInformation>(*)>(_a[1]))); break;
        case 8: setFlockListWidget((*reinterpret_cast< const QVector<FlockInformation>(*)>(_a[1]))); break;
        case 9: setDiscussionListWidget((*reinterpret_cast< const QVector<DiscussionInformation>(*)>(_a[1]))); break;
        case 10: { bool _r = addFriendButton((*reinterpret_cast< const FriendInformation(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = addFlockButton((*reinterpret_cast< const FlockInformation(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = addDiscussionButton((*reinterpret_cast< const DiscussionInformation(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: receiveFriendTalkMessage((*reinterpret_cast< const TalkMessage(*)>(_a[1]))); break;
        case 14: setFriendStatus((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 15: setFriendInformation((*reinterpret_cast< const FriendInformation(*)>(_a[1]))); break;
        case 16: showFriendInformation((*reinterpret_cast< const UserInformation(*)>(_a[1]))); break;
        case 17: showMyInformation((*reinterpret_cast< const UserInformation(*)>(_a[1]))); break;
        case 18: setMyInformation((*reinterpret_cast< const UserInformation(*)>(_a[1]))); break;
        case 19: showFlockInformation((*reinterpret_cast< const FlockInformation(*)>(_a[1]))); break;
        case 20: showDiscussionInformation((*reinterpret_cast< const DiscussionInformation(*)>(_a[1]))); break;
        case 21: setFlockInformation((*reinterpret_cast< const FlockInformation(*)>(_a[1]))); break;
        case 22: setDiscussionInformation((*reinterpret_cast< const DiscussionInformation(*)>(_a[1]))); break;
        case 23: setFlockMemberRemark((*reinterpret_cast< const TempStrings(*)>(_a[1]))); break;
        case 24: setFriendRemark((*reinterpret_cast< const TempStrings(*)>(_a[1]))); break;
        case 25: deletedFriend((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 26: dropedFlock((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 27: dropedDiscussion((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 28: leavedFlock((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 29: leavedDiscussion((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 30: createFlockSuccess((*reinterpret_cast< const FlockInformation(*)>(_a[1]))); break;
        case 31: createDiscussionSuccess((*reinterpret_cast< const DiscussionInformation(*)>(_a[1]))); break;
        case 32: searchFriend((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 33: onClickSearchFriend(); break;
        case 34: onClickAddFriend(); break;
        case 35: onClickAddFlock(); break;
        case 36: onClickChangePwd(); break;
        case 37: createFlock(); break;
        case 38: createDiscussion(); break;
        case 39: showMessageWidget(); break;
        case 40: showMailWidget(); break;
        case 41: showMailWriteWidget((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 42: showLatestMessageWidget(); break;
        case 43: setTimerStatus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 44: renameBoxSuccess((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 45: moveFriendToBoxSuccess((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 46: onClickRightButton(); break;
        case 47: createBox(); break;
        case 48: removeLinkButton((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 49: removeAllLinkButton(); break;
        case 50: showAllChatRoom(); break;
        case 51: closeWindow(); break;
        case 52: closeAllWindows(); break;
        case 53: getMyInformation(); break;
        case 54: receiveMessagesFromChat((*reinterpret_cast< TalkMessage(*)>(_a[1]))); break;
        case 55: changeMyStatus((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 56: receiveFriendRequest((*reinterpret_cast< const TalkMessage(*)>(_a[1])),(*reinterpret_cast< const UserInformation(*)>(_a[2]))); break;
        case 57: receiveFlockRequest((*reinterpret_cast< const TalkMessage(*)>(_a[1])),(*reinterpret_cast< const FlockMember(*)>(_a[2])),(*reinterpret_cast< const FlockInformation(*)>(_a[3]))); break;
        case 58: receiveDiscussionRequest((*reinterpret_cast< const TalkMessage(*)>(_a[1])),(*reinterpret_cast< const DiscussionMember(*)>(_a[2])),(*reinterpret_cast< const DiscussionInformation(*)>(_a[3]))); break;
        case 59: removeBox((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 60: renameBox((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 61;
    }
    return _id;
}

// SIGNAL 0
void IMMainWidget::exportHistoryMessageOneFriendSuccess(const QString & _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void IMMainWidget::exportHistoryMessageAllSuccess(const QString & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
