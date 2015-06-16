/****************************************************************************
** Meta object code from reading C++ file 'CalendarDialog.h'
**
** Created: Mon Jun 1 09:23:12 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../view/CalendarDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CalendarDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CalendarDialog[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x05,
      38,   33,   15,   15, 0x05,
      71,   66,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
     105,   99,   15,   15, 0x0a,
     144,  139,   15,   15, 0x0a,
     192,  181,   15,   15, 0x0a,
     223,   15,   15,   15, 0x0a,
     257,   15,   15,   15, 0x0a,
     287,   15,   15,   15, 0x0a,
     314,   15,   15,   15, 0x0a,
     337,   15,   15,   15, 0x0a,
     365,   15,   15,   15, 0x0a,
     389,   15,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CalendarDialog[] = {
    "CalendarDialog\0\0focusOutDialog()\0text\0"
    "changeLineEditText(QString)\0date\0"
    "addHasVideoDataList(QDate&)\0month\0"
    "setCalendarCurrenPageByMonth(int)\0"
    "year\0setCalendarCurrenPageByYear(QString)\0"
    "year,month\0setCalendarCurrenPage(int,int)\0"
    "showCalendarPreviousMonthInYear()\0"
    "showCalendarNextMonthInYear()\0"
    "showCalendarPreviousYear()\0"
    "showCalendarNextYear()\0"
    "showCalendarPreviousMonth()\0"
    "showCalendarNextMonth()\0getSelectedDate()\0"
};

const QMetaObject CalendarDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CalendarDialog,
      qt_meta_data_CalendarDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CalendarDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CalendarDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CalendarDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CalendarDialog))
        return static_cast<void*>(const_cast< CalendarDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int CalendarDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: focusOutDialog(); break;
        case 1: changeLineEditText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: addHasVideoDataList((*reinterpret_cast< QDate(*)>(_a[1]))); break;
        case 3: setCalendarCurrenPageByMonth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: setCalendarCurrenPageByYear((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: setCalendarCurrenPage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: showCalendarPreviousMonthInYear(); break;
        case 7: showCalendarNextMonthInYear(); break;
        case 8: showCalendarPreviousYear(); break;
        case 9: showCalendarNextYear(); break;
        case 10: showCalendarPreviousMonth(); break;
        case 11: showCalendarNextMonth(); break;
        case 12: getSelectedDate(); break;
        default: ;
        }
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void CalendarDialog::focusOutDialog()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void CalendarDialog::changeLineEditText(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CalendarDialog::addHasVideoDataList(QDate & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
