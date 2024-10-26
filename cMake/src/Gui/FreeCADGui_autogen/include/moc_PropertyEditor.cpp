/****************************************************************************
** Meta object code from reading C++ file 'PropertyEditor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/Gui/propertyeditor/PropertyEditor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PropertyEditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Gui__PropertyEditor__PropertyEditor_t {
    QByteArrayData data[17];
    char stringdata0[199];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Gui__PropertyEditor__PropertyEditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Gui__PropertyEditor__PropertyEditor_t qt_meta_stringdata_Gui__PropertyEditor__PropertyEditor = {
    {
QT_MOC_LITERAL(0, 0, 35), // "Gui::PropertyEditor::Property..."
QT_MOC_LITERAL(1, 36, 15), // "onItemActivated"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 11), // "QModelIndex"
QT_MOC_LITERAL(4, 65, 5), // "index"
QT_MOC_LITERAL(5, 71, 14), // "onItemExpanded"
QT_MOC_LITERAL(6, 86, 15), // "onItemCollapsed"
QT_MOC_LITERAL(7, 102, 11), // "onRowsMoved"
QT_MOC_LITERAL(8, 114, 6), // "parent"
QT_MOC_LITERAL(9, 121, 5), // "start"
QT_MOC_LITERAL(10, 127, 3), // "end"
QT_MOC_LITERAL(11, 131, 3), // "dst"
QT_MOC_LITERAL(12, 135, 3), // "row"
QT_MOC_LITERAL(13, 139, 13), // "onRowsRemoved"
QT_MOC_LITERAL(14, 153, 15), // "groupBackground"
QT_MOC_LITERAL(15, 169, 14), // "groupTextColor"
QT_MOC_LITERAL(16, 184, 14) // "itemBackground"

    },
    "Gui::PropertyEditor::PropertyEditor\0"
    "onItemActivated\0\0QModelIndex\0index\0"
    "onItemExpanded\0onItemCollapsed\0"
    "onRowsMoved\0parent\0start\0end\0dst\0row\0"
    "onRowsRemoved\0groupBackground\0"
    "groupTextColor\0itemBackground"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Gui__PropertyEditor__PropertyEditor[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       3,   66, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x09 /* Protected */,
       5,    1,   42,    2, 0x09 /* Protected */,
       6,    1,   45,    2, 0x09 /* Protected */,
       7,    5,   48,    2, 0x09 /* Protected */,
      13,    3,   59,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int, 0x80000000 | 3, QMetaType::Int,    8,    9,   10,   11,   12,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,    8,    9,   10,

 // properties: name, type, flags
      14, QMetaType::QBrush, 0x00095103,
      15, QMetaType::QColor, 0x00095103,
      16, QMetaType::QBrush, 0x00095103,

       0        // eod
};

void Gui::PropertyEditor::PropertyEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PropertyEditor *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onItemActivated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->onItemExpanded((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->onItemCollapsed((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->onRowsMoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 4: _t->onRowsRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PropertyEditor *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QBrush*>(_v) = _t->groupBackground(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->groupTextColor(); break;
        case 2: *reinterpret_cast< QBrush*>(_v) = _t->itemBackground(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<PropertyEditor *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setGroupBackground(*reinterpret_cast< QBrush*>(_v)); break;
        case 1: _t->setGroupTextColor(*reinterpret_cast< QColor*>(_v)); break;
        case 2: _t->setItemBackground(*reinterpret_cast< QBrush*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Gui::PropertyEditor::PropertyEditor::staticMetaObject = { {
    QMetaObject::SuperData::link<QTreeView::staticMetaObject>(),
    qt_meta_stringdata_Gui__PropertyEditor__PropertyEditor.data,
    qt_meta_data_Gui__PropertyEditor__PropertyEditor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Gui::PropertyEditor::PropertyEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::PropertyEditor::PropertyEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__PropertyEditor__PropertyEditor.stringdata0))
        return static_cast<void*>(this);
    return QTreeView::qt_metacast(_clname);
}

int Gui::PropertyEditor::PropertyEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeView::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
