/****************************************************************************
** Meta object code from reading C++ file 'PropertyEditorMesh.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/Mod/Mesh/Gui/PropertyEditorMesh.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PropertyEditorMesh.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MeshGui__PropertyMeshKernelItem_t {
    QByteArrayData data[4];
    char stringdata0[51];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MeshGui__PropertyMeshKernelItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MeshGui__PropertyMeshKernelItem_t qt_meta_stringdata_MeshGui__PropertyMeshKernelItem = {
    {
QT_MOC_LITERAL(0, 0, 31), // "MeshGui::PropertyMeshKernelItem"
QT_MOC_LITERAL(1, 32, 6), // "Points"
QT_MOC_LITERAL(2, 39, 5), // "Edges"
QT_MOC_LITERAL(3, 45, 5) // "Faces"

    },
    "MeshGui::PropertyMeshKernelItem\0Points\0"
    "Edges\0Faces"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MeshGui__PropertyMeshKernelItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       3,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Int, 0x00095401,
       2, QMetaType::Int, 0x00095401,
       3, QMetaType::Int, 0x00095401,

       0        // eod
};

void MeshGui::PropertyMeshKernelItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PropertyMeshKernelItem *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->countPoints(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->countEdges(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->countFaces(); break;
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

QT_INIT_METAOBJECT const QMetaObject MeshGui::PropertyMeshKernelItem::staticMetaObject = { {
    QMetaObject::SuperData::link<Gui::PropertyEditor::PropertyItem::staticMetaObject>(),
    qt_meta_stringdata_MeshGui__PropertyMeshKernelItem.data,
    qt_meta_data_MeshGui__PropertyMeshKernelItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MeshGui::PropertyMeshKernelItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MeshGui::PropertyMeshKernelItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MeshGui__PropertyMeshKernelItem.stringdata0))
        return static_cast<void*>(this);
    return Gui::PropertyEditor::PropertyItem::qt_metacast(_clname);
}

int MeshGui::PropertyMeshKernelItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Gui::PropertyEditor::PropertyItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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
