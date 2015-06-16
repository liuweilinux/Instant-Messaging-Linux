/****************************************************************************
** Meta object code from reading C++ file 'IMLittleWidget.h'
**
** Created: Mon Jun 1 09:23:32 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../view/IMLittleWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'IMLittleWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_IMLittleWidget[] = {

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
      16,   15,   15,   15, 0x0a,
      33,   15,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_IMLittleWidget[] = {
    "IMLittleWidget\0\0onClickedBtnOk()\0"
    "onClickedBtnClose()\0"
};

const QMetaObject IMLittleWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_IMLittleWidget,
      qt_meta_data_IMLittleWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &IMLittleWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *IMLittleWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *IMLittleWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_IMLittleWidget))
        return static_cast<void*>(const_cast< IMLittleWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int IMLittleWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: onClickedBtnOk(); break;
        case 1: onClickedBtnClose(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
