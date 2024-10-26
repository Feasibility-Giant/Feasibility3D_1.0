/****************************************************************************
** Meta object code from reading C++ file 'TaskDressUpParameters.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/Mod/PartDesign/Gui/TaskDressUpParameters.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskDressUpParameters.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PartDesignGui__TaskDressUpParameters_t {
    QByteArrayData data[15];
    char stringdata0[217];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PartDesignGui__TaskDressUpParameters_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PartDesignGui__TaskDressUpParameters_t qt_meta_stringdata_PartDesignGui__TaskDressUpParameters = {
    {
QT_MOC_LITERAL(0, 0, 36), // "PartDesignGui::TaskDressUpPar..."
QT_MOC_LITERAL(1, 37, 14), // "onButtonRefSel"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 7), // "checked"
QT_MOC_LITERAL(4, 61, 13), // "doubleClicked"
QT_MOC_LITERAL(5, 75, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(6, 92, 4), // "item"
QT_MOC_LITERAL(7, 97, 12), // "setSelection"
QT_MOC_LITERAL(8, 110, 7), // "current"
QT_MOC_LITERAL(9, 118, 18), // "itemClickedTimeout"
QT_MOC_LITERAL(10, 137, 12), // "onRefDeleted"
QT_MOC_LITERAL(11, 150, 18), // "createDeleteAction"
QT_MOC_LITERAL(12, 169, 12), // "QListWidget*"
QT_MOC_LITERAL(13, 182, 10), // "parentList"
QT_MOC_LITERAL(14, 193, 23) // "createAddAllEdgesAction"

    },
    "PartDesignGui::TaskDressUpParameters\0"
    "onButtonRefSel\0\0checked\0doubleClicked\0"
    "QListWidgetItem*\0item\0setSelection\0"
    "current\0itemClickedTimeout\0onRefDeleted\0"
    "createDeleteAction\0QListWidget*\0"
    "parentList\0createAddAllEdgesAction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PartDesignGui__TaskDressUpParameters[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x09 /* Protected */,
       4,    1,   52,    2, 0x09 /* Protected */,
       7,    1,   55,    2, 0x09 /* Protected */,
       9,    0,   58,    2, 0x09 /* Protected */,
      10,    0,   59,    2, 0x09 /* Protected */,
      11,    1,   60,    2, 0x09 /* Protected */,
      14,    1,   63,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 12,   13,

       0        // eod
};

void PartDesignGui::TaskDressUpParameters::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TaskDressUpParameters *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onButtonRefSel((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 1: _t->doubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 2: _t->setSelection((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 3: _t->itemClickedTimeout(); break;
        case 4: _t->onRefDeleted(); break;
        case 5: _t->createDeleteAction((*reinterpret_cast< QListWidget*(*)>(_a[1]))); break;
        case 6: _t->createAddAllEdgesAction((*reinterpret_cast< QListWidget*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PartDesignGui::TaskDressUpParameters::staticMetaObject = { {
    QMetaObject::SuperData::link<Gui::TaskView::TaskBox::staticMetaObject>(),
    qt_meta_stringdata_PartDesignGui__TaskDressUpParameters.data,
    qt_meta_data_PartDesignGui__TaskDressUpParameters,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PartDesignGui::TaskDressUpParameters::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartDesignGui::TaskDressUpParameters::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PartDesignGui__TaskDressUpParameters.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Gui::SelectionObserver"))
        return static_cast< Gui::SelectionObserver*>(this);
    return Gui::TaskView::TaskBox::qt_metacast(_clname);
}

int PartDesignGui::TaskDressUpParameters::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Gui::TaskView::TaskBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
struct qt_meta_stringdata_PartDesignGui__TaskDlgDressUpParameters_t {
    QByteArrayData data[1];
    char stringdata0[40];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PartDesignGui__TaskDlgDressUpParameters_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PartDesignGui__TaskDlgDressUpParameters_t qt_meta_stringdata_PartDesignGui__TaskDlgDressUpParameters = {
    {
QT_MOC_LITERAL(0, 0, 39) // "PartDesignGui::TaskDlgDressUp..."

    },
    "PartDesignGui::TaskDlgDressUpParameters"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PartDesignGui__TaskDlgDressUpParameters[] = {

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

void PartDesignGui::TaskDlgDressUpParameters::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject PartDesignGui::TaskDlgDressUpParameters::staticMetaObject = { {
    QMetaObject::SuperData::link<TaskDlgFeatureParameters::staticMetaObject>(),
    qt_meta_stringdata_PartDesignGui__TaskDlgDressUpParameters.data,
    qt_meta_data_PartDesignGui__TaskDlgDressUpParameters,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PartDesignGui::TaskDlgDressUpParameters::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartDesignGui::TaskDlgDressUpParameters::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PartDesignGui__TaskDlgDressUpParameters.stringdata0))
        return static_cast<void*>(this);
    return TaskDlgFeatureParameters::qt_metacast(_clname);
}

int PartDesignGui::TaskDlgDressUpParameters::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskDlgFeatureParameters::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
