/****************************************************************************
** Meta object code from reading C++ file 'IMFileSenderWidget.h'
**
** Created: Mon Jun 1 09:23:21 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../view/IMFileSenderWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'IMFileSenderWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_IMFileSenderWidget[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x08,
      39,   19,   19,   19, 0x08,
      57,   19,   19,   19, 0x08,
      80,   71,   19,   19, 0x08,
     109,   19,   19,   19, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_IMFileSenderWidget[] = {
    "IMFileSenderWidget\0\0onClickBtnCancel()\0"
    "onClickBtnClose()\0sendMessage()\0"
    "numBytes\0updateClientProgress(qint64)\0"
    "showClosedConnect()\0"
};

const QMetaObject IMFileSenderWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_IMFileSenderWidget,
      qt_meta_data_IMFileSenderWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &IMFileSenderWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *IMFileSenderWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *IMFileSenderWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_IMFileSenderWidget))
        return static_cast<void*>(const_cast< IMFileSenderWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int IMFileSenderWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: onClickBtnCancel(); break;
        case 1: onClickBtnClose(); break;
        case 2: sendMessage(); break;
        case 3: updateClientProgress((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 4: showClosedConnect(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
