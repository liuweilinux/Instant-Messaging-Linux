/****************************************************************************
** Meta object code from reading C++ file 'IMMessageWidget.h'
**
** Created: Mon Jun 1 09:23:40 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../view/IMMessageWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'IMMessageWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_IMMessageWidget[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      42,   16,   16,   16, 0x0a,
      62,   16,   16,   16, 0x0a,
      81,   16,   16,   16, 0x0a,
     100,   16,   16,   16, 0x0a,
     116,   16,   16,   16, 0x0a,
     135,   16,   16,   16, 0x0a,
     154,   16,   16,   16, 0x0a,
     174,   16,   16,   16, 0x0a,
     204,   16,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_IMMessageWidget[] = {
    "IMMessageWidget\0\0currentIndexClicked(int)\0"
    "onClickDeleteDate()\0onClickDeleteOne()\0"
    "onClickDeleteAll()\0onClickImport()\0"
    "onClickExportOne()\0onClickExportAll()\0"
    "onClickGetMessage()\0groupItemClicked(QModelIndex)\0"
    "friendItemClicked(QModelIndex)\0"
};

const QMetaObject IMMessageWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_IMMessageWidget,
      qt_meta_data_IMMessageWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &IMMessageWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *IMMessageWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *IMMessageWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_IMMessageWidget))
        return static_cast<void*>(const_cast< IMMessageWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int IMMessageWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: currentIndexClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: onClickDeleteDate(); break;
        case 2: onClickDeleteOne(); break;
        case 3: onClickDeleteAll(); break;
        case 4: onClickImport(); break;
        case 5: onClickExportOne(); break;
        case 6: onClickExportAll(); break;
        case 7: onClickGetMessage(); break;
        case 8: groupItemClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 9: friendItemClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void IMMessageWidget::currentIndexClicked(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
