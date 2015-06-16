/****************************************************************************
** Meta object code from reading C++ file 'IMDiscussionChatWidget.h'
**
** Created: Mon Jun 1 09:23:17 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../view/IMDiscussionChatWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'IMDiscussionChatWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_IMDiscussionChatWidget[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   23,   23,   23, 0x05,
      59,   23,   23,   23, 0x05,

 // slots: signature, parameters, type, tag, flags
      87,   76,   23,   23, 0x0a,
     143,  138,   23,   23, 0x08,
     172,  167,   23,   23, 0x08,
     206,  198,   23,   23, 0x08,
     227,  198,   23,   23, 0x08,
     250,  198,   23,   23, 0x08,
     276,   23,   23,   23, 0x08,
     294,   23,   23,   23, 0x08,
     312,  198,   23,   23, 0x08,
     343,  336,   23,   23, 0x08,
     381,   23,   23,   23, 0x08,
     399,   23,   23,   23, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_IMDiscussionChatWidget[] = {
    "IMDiscussionChatWidget\0\0"
    "sendMessagesFromChat(TalkMessage&)\0"
    "roomQuitSignal()\0memberList\0"
    "setDiscussionMemberList(QVector<DiscussionMember>)\0"
    "font\0setInputTextFont(QFont)\0size\0"
    "setInputTextSize(QString)\0checked\0"
    "onClickBtnBold(bool)\0onClickBtnItalic(bool)\0"
    "onClickBtnUnderline(bool)\0onClickBtnColor()\0"
    "onClickBtnClear()\0onClickBtnHistory(bool)\0"
    "format\0currentFormatChanged(QTextCharFormat)\0"
    "onClickBtnClose()\0onClickBtnSend()\0"
};

const QMetaObject IMDiscussionChatWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_IMDiscussionChatWidget,
      qt_meta_data_IMDiscussionChatWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &IMDiscussionChatWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *IMDiscussionChatWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *IMDiscussionChatWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_IMDiscussionChatWidget))
        return static_cast<void*>(const_cast< IMDiscussionChatWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int IMDiscussionChatWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: sendMessagesFromChat((*reinterpret_cast< TalkMessage(*)>(_a[1]))); break;
        case 1: roomQuitSignal(); break;
        case 2: setDiscussionMemberList((*reinterpret_cast< const QVector<DiscussionMember>(*)>(_a[1]))); break;
        case 3: setInputTextFont((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        case 4: setInputTextSize((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: onClickBtnBold((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: onClickBtnItalic((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: onClickBtnUnderline((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: onClickBtnColor(); break;
        case 9: onClickBtnClear(); break;
        case 10: onClickBtnHistory((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: currentFormatChanged((*reinterpret_cast< const QTextCharFormat(*)>(_a[1]))); break;
        case 12: onClickBtnClose(); break;
        case 13: onClickBtnSend(); break;
        default: ;
        }
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void IMDiscussionChatWidget::sendMessagesFromChat(TalkMessage & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void IMDiscussionChatWidget::roomQuitSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
