/****************************************************************************
** Meta object code from reading C++ file 'IMLocalMessageWidget.h'
**
** Created: Mon Jun 1 09:23:33 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../view/IMLocalMessageWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'IMLocalMessageWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_IMLocalMessageWidget[] = {

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
      22,   21,   21,   21, 0x0a,
      42,   21,   21,   21, 0x0a,
      61,   21,   21,   21, 0x0a,
      80,   21,   21,   21, 0x0a,
      96,   21,   21,   21, 0x0a,
     115,   21,   21,   21, 0x0a,
     134,   21,   21,   21, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_IMLocalMessageWidget[] = {
    "IMLocalMessageWidget\0\0onClickDeleteDate()\0"
    "onClickDeleteOne()\0onClickDeleteAll()\0"
    "onClickImport()\0onClickExportOne()\0"
    "onClickExportAll()\0onClickGetMessage()\0"
};

const QMetaObject IMLocalMessageWidget::staticMetaObject = {
    { &IMMessageWidget::staticMetaObject, qt_meta_stringdata_IMLocalMessageWidget,
      qt_meta_data_IMLocalMessageWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &IMLocalMessageWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *IMLocalMessageWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *IMLocalMessageWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_IMLocalMessageWidget))
        return static_cast<void*>(const_cast< IMLocalMessageWidget*>(this));
    return IMMessageWidget::qt_metacast(_clname);
}

int IMLocalMessageWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = IMMessageWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: onClickDeleteDate(); break;
        case 1: onClickDeleteOne(); break;
        case 2: onClickDeleteAll(); break;
        case 3: onClickImport(); break;
        case 4: onClickExportOne(); break;
        case 5: onClickExportAll(); break;
        case 6: onClickGetMessage(); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
