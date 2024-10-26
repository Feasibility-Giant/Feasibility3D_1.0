/****************************************************************************
** Meta object code from reading C++ file 'PropertyFemMeshItem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/Mod/Fem/Gui/PropertyFemMeshItem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PropertyFemMeshItem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FemGui__PropertyFemMeshItem_t {
    QByteArrayData data[8];
    char stringdata0[82];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FemGui__PropertyFemMeshItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FemGui__PropertyFemMeshItem_t qt_meta_stringdata_FemGui__PropertyFemMeshItem = {
    {
QT_MOC_LITERAL(0, 0, 27), // "FemGui::PropertyFemMeshItem"
QT_MOC_LITERAL(1, 28, 5), // "Nodes"
QT_MOC_LITERAL(2, 34, 5), // "Edges"
QT_MOC_LITERAL(3, 40, 5), // "Faces"
QT_MOC_LITERAL(4, 46, 8), // "Polygons"
QT_MOC_LITERAL(5, 55, 7), // "Volumes"
QT_MOC_LITERAL(6, 63, 11), // "Polyhedrons"
QT_MOC_LITERAL(7, 75, 6) // "Groups"

    },
    "FemGui::PropertyFemMeshItem\0Nodes\0"
    "Edges\0Faces\0Polygons\0Volumes\0Polyhedrons\0"
    "Groups"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FemGui__PropertyFemMeshItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       7,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Int, 0x00095401,
       2, QMetaType::Int, 0x00095401,
       3, QMetaType::Int, 0x00095401,
       4, QMetaType::Int, 0x00095401,
       5, QMetaType::Int, 0x00095401,
       6, QMetaType::Int, 0x00095401,
       7, QMetaType::Int, 0x00095401,

       0        // eod
};

void FemGui::PropertyFemMeshItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PropertyFemMeshItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->countNodes(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->countEdges(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->countFaces(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->countPolygons(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->countVolumes(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->countPolyhedrons(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->countGroups(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject FemGui::PropertyFemMeshItem::staticMetaObject = { {
    QMetaObject::SuperData::link<Gui::PropertyEditor::PropertyItem::staticMetaObject>(),
    qt_meta_stringdata_FemGui__PropertyFemMeshItem.data,
    qt_meta_data_FemGui__PropertyFemMeshItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FemGui::PropertyFemMeshItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FemGui::PropertyFemMeshItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FemGui__PropertyFemMeshItem.stringdata0))
        return static_cast<void*>(this);
    return Gui::PropertyEditor::PropertyItem::qt_metacast(_clname);
}

int FemGui::PropertyFemMeshItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Gui::PropertyEditor::PropertyItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
