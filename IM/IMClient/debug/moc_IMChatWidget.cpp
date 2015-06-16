/****************************************************************************
** Meta object code from reading C++ file 'IMChatWidget.h'
**
** Created: Mon Jun 1 09:23:15 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../view/IMChatWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'IMChatWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_IMChatWidget[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,
      49,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      66,   13,   13,   13, 0x08,
      84,   13,   13,   13, 0x08,
     102,   13,   13,   13, 0x08,
     119,   13,   13,   13, 0x08,
     142,  137,   13,   13, 0x08,
     171,  166,   13,   13, 0x08,
     205,  197,   13,   13, 0x08,
     226,  197,   13,   13, 0x08,
     249,  197,   13,   13, 0x08,
     275,   13,   13,   13, 0x08,
     293,   13,   13,   13, 0x08,
     311,  197,   13,   13, 0x08,
     342,  335,   13,   13, 0x08,
     380,   13,   13,   13, 0x08,
     398,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_IMChatWidget[] = {
    "IMChatWidget\0\0sendMessagesFromChat(TalkMessage&)\0"
    "roomQuitSignal()\0onClickBtnVideo()\0"
    "onClickBtnVoice()\0onClickBtnFile()\0"
    "onClickBtnSpace()\0font\0setInputTextFont(QFont)\0"
    "size\0setInputTextSize(QString)\0checked\0"
    "onClickBtnBold(bool)\0onClickBtnItalic(bool)\0"
    "onClickBtnUnderline(bool)\0onClickBtnColor()\0"
    "onClickBtnClear()\0onClickBtnHistory(bool)\0"
    "format\0currentFormatChanged(QTextCharFormat)\0"
    "onClickBtnClose()\0onClickBtnSend()\0"
};

const QMetaObject IMChatWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_IMChatWidget,
      qt_meta_data_IMChatWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &IMChatWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *IMChatWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *IMChatWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_IMChatWidget))
        return static_cast<void*>(const_cast< IMChatWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int IMChatWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: sendMessagesFromChat((*reinterpret_cast< TalkMessage(*)>(_a[1]))); break;
        case 1: roomQuitSignal(); break;
        case 2: onClickBtnVideo(); break;
        case 3: onClickBtnVoice(); break;
        case 4: onClickBtnFile(); break;
        case 5: onClickBtnSpace(); break;
        case 6: setInputTextFont((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        case 7: setInputTextSize((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: onClickBtnBold((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: onClickBtnItalic((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: onClickBtnUnderline((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: onClickBtnColor(); break;
        case 12: onClickBtnClear(); break;
        case 13: onClickBtnHistory((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: currentFormatChanged((*reinterpret_cast< const QTextCharFormat(*)>(_a[1]))); break;
        case 15: onClickBtnClose(); break;
        case 16: onClickBtnSend(); break;
        default: ;
        }
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void IMChatWidget::sendMessagesFromChat(TalkMessage & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void IMChatWidget::roomQuitSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
