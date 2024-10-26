/****************************************************************************
** Meta object code from reading C++ file 'TaskFemConstraint.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/Mod/Fem/Gui/TaskFemConstraint.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskFemConstraint.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FemGui__TaskFemConstraint_t {
    QByteArrayData data[11];
    char stringdata0[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FemGui__TaskFemConstraint_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FemGui__TaskFemConstraint_t qt_meta_stringdata_FemGui__TaskFemConstraint = {
    {
QT_MOC_LITERAL(0, 0, 25), // "FemGui::TaskFemConstraint"
QT_MOC_LITERAL(1, 26, 18), // "onReferenceDeleted"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 3), // "row"
QT_MOC_LITERAL(4, 50, 17), // "onButtonReference"
QT_MOC_LITERAL(5, 68, 7), // "pressed"
QT_MOC_LITERAL(6, 76, 12), // "setSelection"
QT_MOC_LITERAL(7, 89, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(8, 106, 4), // "item"
QT_MOC_LITERAL(9, 111, 5), // "event"
QT_MOC_LITERAL(10, 117, 7) // "QEvent*"

    },
    "FemGui::TaskFemConstraint\0onReferenceDeleted\0"
    "\0row\0onButtonReference\0pressed\0"
    "setSelection\0QListWidgetItem*\0item\0"
    "event\0QEvent*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FemGui__TaskFemConstraint[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x09 /* Protected */,
       4,    1,   42,    2, 0x09 /* Protected */,
       4,    0,   45,    2, 0x29 /* Protected | MethodCloned */,
       6,    1,   46,    2, 0x09 /* Protected */,
       9,    1,   49,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Bool, 0x80000000 | 10,    9,

       0        // eod
};

void FemGui::TaskFemConstraint::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TaskFemConstraint *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onReferenceDeleted((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 1: _t->onButtonReference((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 2: _t->onButtonReference(); break;
        case 3: _t->setSelection((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 4: { bool _r = _t->event((*reinterpret_cast< QEvent*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FemGui::TaskFemConstraint::staticMetaObject = { {
    QMetaObject::SuperData::link<Gui::TaskView::TaskBox::staticMetaObject>(),
    qt_meta_stringdata_FemGui__TaskFemConstraint.data,
    qt_meta_data_FemGui__TaskFemConstraint,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FemGui::TaskFemConstraint::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FemGui::TaskFemConstraint::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FemGui__TaskFemConstraint.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Gui::SelectionObserver"))
        return static_cast< Gui::SelectionObserver*>(this);
    return Gui::TaskView::TaskBox::qt_metacast(_clname);
}

int FemGui::TaskFemConstraint::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Gui::TaskView::TaskBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
struct qt_meta_stringdata_FemGui__TaskDlgFemConstraint_t {
    QByteArrayData data[1];
    char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FemGui__TaskDlgFemConstraint_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FemGui__TaskDlgFemConstraint_t qt_meta_stringdata_FemGui__TaskDlgFemConstraint = {
    {
QT_MOC_LITERAL(0, 0, 28) // "FemGui::TaskDlgFemConstraint"

    },
    "FemGui::TaskDlgFemConstraint"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FemGui__TaskDlgFemConstraint[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void FemGui::TaskDlgFemConstraint::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject FemGui::TaskDlgFemConstraint::staticMetaObject = { {
    QMetaObject::SuperData::link<Gui::TaskView::TaskDialog::staticMetaObject>(),
    qt_meta_stringdata_FemGui__TaskDlgFemConstraint.data,
    qt_meta_data_FemGui__TaskDlgFemConstraint,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FemGui::TaskDlgFemConstraint::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FemGui::TaskDlgFemConstraint::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FemGui__TaskDlgFemConstraint.stringdata0))
        return static_cast<void*>(this);
    return Gui::TaskView::TaskDialog::qt_metacast(_clname);
}

int FemGui::TaskDlgFemConstraint::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Gui::TaskView::TaskDialog::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
