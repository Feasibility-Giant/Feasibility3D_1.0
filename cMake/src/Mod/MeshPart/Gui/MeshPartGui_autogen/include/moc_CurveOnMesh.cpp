/****************************************************************************
** Meta object code from reading C++ file 'CurveOnMesh.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/Mod/MeshPart/Gui/CurveOnMesh.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CurveOnMesh.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MeshPartGui__CurveOnMeshHandler_t {
    QByteArrayData data[7];
    char stringdata0[85];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MeshPartGui__CurveOnMeshHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MeshPartGui__CurveOnMeshHandler_t qt_meta_stringdata_MeshPartGui__CurveOnMeshHandler = {
    {
QT_MOC_LITERAL(0, 0, 31), // "MeshPartGui::CurveOnMeshHandler"
QT_MOC_LITERAL(1, 32, 13), // "onContextMenu"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 8), // "onCreate"
QT_MOC_LITERAL(4, 56, 7), // "onClear"
QT_MOC_LITERAL(5, 64, 8), // "onCancel"
QT_MOC_LITERAL(6, 73, 11) // "onCloseWire"

    },
    "MeshPartGui::CurveOnMeshHandler\0"
    "onContextMenu\0\0onCreate\0onClear\0"
    "onCancel\0onCloseWire"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MeshPartGui__CurveOnMeshHandler[] = {

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
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MeshPartGui::CurveOnMeshHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CurveOnMeshHandler *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onContextMenu(); break;
        case 1: _t->onCreate(); break;
        case 2: _t->onClear(); break;
        case 3: _t->onCancel(); break;
        case 4: _t->onCloseWire(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject MeshPartGui::CurveOnMeshHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_MeshPartGui__CurveOnMeshHandler.data,
    qt_meta_data_MeshPartGui__CurveOnMeshHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MeshPartGui::CurveOnMeshHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MeshPartGui::CurveOnMeshHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MeshPartGui__CurveOnMeshHandler.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MeshPartGui::CurveOnMeshHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
