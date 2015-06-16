/****************************************************************************
** Meta object code from reading C++ file 'IMMailWidget.h'
**
** Created: Mon Jun 1 09:23:37 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../view/IMMailWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'IMMailWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_IMMailWidget[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x08,
      57,   13,   13,   13, 0x08,
     106,   13,  101,   13, 0x08,
     139,   13,  101,   13, 0x08,
     173,   13,   13,   13, 0x08,
     189,   13,  101,   13, 0x08,
     226,   13,  101,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_IMMailWidget[] = {
    "IMMailWidget\0\0setInMailsWidget(QVector<MailInformation>)\0"
    "setOutMailsWidget(QVector<MailInformation>)\0"
    "bool\0addInMailButton(MailInformation)\0"
    "addOutMailButton(MailInformation)\0"
    "deleteMail(int)\0addNewOutMailButton(MailInformation)\0"
    "addNewInMailButton(MailInformation)\0"
};

const QMetaObject IMMailWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_IMMailWidget,
      qt_meta_data_IMMailWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &IMMailWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *IMMailWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *IMMailWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_IMMailWidget))
        return static_cast<void*>(const_cast< IMMailWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int IMMailWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setInMailsWidget((*reinterpret_cast< const QVector<MailInformation>(*)>(_a[1]))); break;
        case 1: setOutMailsWidget((*reinterpret_cast< const QVector<MailInformation>(*)>(_a[1]))); break;
        case 2: { bool _r = addInMailButton((*reinterpret_cast< const MailInformation(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = addOutMailButton((*reinterpret_cast< const MailInformation(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: deleteMail((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 5: { bool _r = addNewOutMailButton((*reinterpret_cast< const MailInformation(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = addNewInMailButton((*reinterpret_cast< const MailInformation(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
