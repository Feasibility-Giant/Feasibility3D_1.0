/****************************************************************************
** Meta object code from reading C++ file 'DlgParameterImp.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/Gui/DlgParameterImp.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DlgParameterImp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Gui__Dialog__DlgParameterImp_t {
    QByteArrayData data[1];
    char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Gui__Dialog__DlgParameterImp_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Gui__Dialog__DlgParameterImp_t qt_meta_stringdata_Gui__Dialog__DlgParameterImp = {
    {
QT_MOC_LITERAL(0, 0, 28) // "Gui::Dialog::DlgParameterImp"

    },
    "Gui::Dialog::DlgParameterImp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Gui__Dialog__DlgParameterImp[] = {

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

void Gui::Dialog::DlgParameterImp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject Gui::Dialog::DlgParameterImp::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Gui__Dialog__DlgParameterImp.data,
    qt_meta_data_Gui__Dialog__DlgParameterImp,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Gui::Dialog::DlgParameterImp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::Dialog::DlgParameterImp::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__Dialog__DlgParameterImp.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Gui::Dialog::DlgParameterImp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_Gui__Dialog__ParameterGroup_t {
    QByteArrayData data[8];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Gui__Dialog__ParameterGroup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Gui__Dialog__ParameterGroup_t qt_meta_stringdata_Gui__Dialog__ParameterGroup = {
    {
QT_MOC_LITERAL(0, 0, 27), // "Gui::Dialog::ParameterGroup"
QT_MOC_LITERAL(1, 28, 20), // "onDeleteSelectedItem"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 16), // "onCreateSubgroup"
QT_MOC_LITERAL(4, 67, 20), // "onToggleSelectedItem"
QT_MOC_LITERAL(5, 88, 14), // "onExportToFile"
QT_MOC_LITERAL(6, 103, 16), // "onImportFromFile"
QT_MOC_LITERAL(7, 120, 20) // "onRenameSelectedItem"

    },
    "Gui::Dialog::ParameterGroup\0"
    "onDeleteSelectedItem\0\0onCreateSubgroup\0"
    "onToggleSelectedItem\0onExportToFile\0"
    "onImportFromFile\0onRenameSelectedItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Gui__Dialog__ParameterGroup[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x09 /* Protected */,
       3,    0,   45,    2, 0x09 /* Protected */,
       4,    0,   46,    2, 0x09 /* Protected */,
       5,    0,   47,    2, 0x09 /* Protected */,
       6,    0,   48,    2, 0x09 /* Protected */,
       7,    0,   49,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Gui::Dialog::ParameterGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ParameterGroup *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onDeleteSelectedItem(); break;
        case 1: _t->onCreateSubgroup(); break;
        case 2: _t->onToggleSelectedItem(); break;
        case 3: _t->onExportToFile(); break;
        case 4: _t->onImportFromFile(); break;
        case 5: _t->onRenameSelectedItem(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject Gui::Dialog::ParameterGroup::staticMetaObject = { {
    QMetaObject::SuperData::link<QTreeWidget::staticMetaObject>(),
    qt_meta_stringdata_Gui__Dialog__ParameterGroup.data,
    qt_meta_data_Gui__Dialog__ParameterGroup,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Gui::Dialog::ParameterGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::Dialog::ParameterGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__Dialog__ParameterGroup.stringdata0))
        return static_cast<void*>(this);
    return QTreeWidget::qt_metacast(_clname);
}

int Gui::Dialog::ParameterGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
struct qt_meta_stringdata_Gui__Dialog__ParameterValue_t {
    QByteArrayData data[18];
    char stringdata0[270];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Gui__Dialog__ParameterValue_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Gui__Dialog__ParameterValue_t qt_meta_stringdata_Gui__Dialog__ParameterValue = {
    {
QT_MOC_LITERAL(0, 0, 27), // "Gui::Dialog::ParameterValue"
QT_MOC_LITERAL(1, 28, 20), // "onChangeSelectedItem"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(4, 67, 20), // "onDeleteSelectedItem"
QT_MOC_LITERAL(5, 88, 20), // "onRenameSelectedItem"
QT_MOC_LITERAL(6, 109, 16), // "onCreateTextItem"
QT_MOC_LITERAL(7, 126, 15), // "onCreateIntItem"
QT_MOC_LITERAL(8, 142, 16), // "onCreateUIntItem"
QT_MOC_LITERAL(9, 159, 17), // "onCreateFloatItem"
QT_MOC_LITERAL(10, 177, 16), // "onCreateBoolItem"
QT_MOC_LITERAL(11, 194, 4), // "edit"
QT_MOC_LITERAL(12, 199, 11), // "QModelIndex"
QT_MOC_LITERAL(13, 211, 5), // "index"
QT_MOC_LITERAL(14, 217, 30), // "QAbstractItemView::EditTrigger"
QT_MOC_LITERAL(15, 248, 7), // "trigger"
QT_MOC_LITERAL(16, 256, 7), // "QEvent*"
QT_MOC_LITERAL(17, 264, 5) // "event"

    },
    "Gui::Dialog::ParameterValue\0"
    "onChangeSelectedItem\0\0QTreeWidgetItem*\0"
    "onDeleteSelectedItem\0onRenameSelectedItem\0"
    "onCreateTextItem\0onCreateIntItem\0"
    "onCreateUIntItem\0onCreateFloatItem\0"
    "onCreateBoolItem\0edit\0QModelIndex\0"
    "index\0QAbstractItemView::EditTrigger\0"
    "trigger\0QEvent*\0event"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Gui__Dialog__ParameterValue[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   64,    2, 0x09 /* Protected */,
       1,    0,   69,    2, 0x09 /* Protected */,
       4,    0,   70,    2, 0x09 /* Protected */,
       5,    0,   71,    2, 0x09 /* Protected */,
       6,    0,   72,    2, 0x09 /* Protected */,
       7,    0,   73,    2, 0x09 /* Protected */,
       8,    0,   74,    2, 0x09 /* Protected */,
       9,    0,   75,    2, 0x09 /* Protected */,
      10,    0,   76,    2, 0x09 /* Protected */,
      11,    3,   77,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, 0x80000000 | 12, 0x80000000 | 14, 0x80000000 | 16,   13,   15,   17,

       0        // eod
};

void Gui::Dialog::ParameterValue::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ParameterValue *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onChangeSelectedItem((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->onChangeSelectedItem(); break;
        case 2: _t->onDeleteSelectedItem(); break;
        case 3: _t->onRenameSelectedItem(); break;
        case 4: _t->onCreateTextItem(); break;
        case 5: _t->onCreateIntItem(); break;
        case 6: _t->onCreateUIntItem(); break;
        case 7: _t->onCreateFloatItem(); break;
        case 8: _t->onCreateBoolItem(); break;
        case 9: { bool _r = _t->edit((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< QAbstractItemView::EditTrigger(*)>(_a[2])),(*reinterpret_cast< QEvent*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Gui::Dialog::ParameterValue::staticMetaObject = { {
    QMetaObject::SuperData::link<QTreeWidget::staticMetaObject>(),
    qt_meta_stringdata_Gui__Dialog__ParameterValue.data,
    qt_meta_data_Gui__Dialog__ParameterValue,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Gui::Dialog::ParameterValue::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::Dialog::ParameterValue::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__Dialog__ParameterValue.stringdata0))
        return static_cast<void*>(this);
    return QTreeWidget::qt_metacast(_clname);
}

int Gui::Dialog::ParameterValue::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
