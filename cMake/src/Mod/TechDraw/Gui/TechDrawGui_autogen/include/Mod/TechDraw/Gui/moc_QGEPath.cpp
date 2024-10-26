/****************************************************************************
** Meta object code from reading C++ file 'QGEPath.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../../src/Mod/TechDraw/Gui/QGEPath.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGEPath.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TechDrawGui__QGMarker_t {
    QByteArrayData data[8];
    char stringdata0[73];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TechDrawGui__QGMarker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TechDrawGui__QGMarker_t qt_meta_stringdata_TechDrawGui__QGMarker = {
    {
QT_MOC_LITERAL(0, 0, 21), // "TechDrawGui::QGMarker"
QT_MOC_LITERAL(1, 22, 8), // "dragging"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 3), // "pos"
QT_MOC_LITERAL(4, 36, 3), // "idx"
QT_MOC_LITERAL(5, 40, 12), // "dragFinished"
QT_MOC_LITERAL(6, 53, 11), // "doubleClick"
QT_MOC_LITERAL(7, 65, 7) // "endEdit"

    },
    "TechDrawGui::QGMarker\0dragging\0\0pos\0"
    "idx\0dragFinished\0doubleClick\0endEdit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TechDrawGui__QGMarker[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x06 /* Public */,
       5,    2,   39,    2, 0x06 /* Public */,
       6,    2,   44,    2, 0x06 /* Public */,
       7,    0,   49,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPointF, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::QPointF, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::QPointF, QMetaType::Int,    3,    4,
    QMetaType::Void,

       0        // eod
};

void TechDrawGui::QGMarker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QGMarker *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->dragging((*reinterpret_cast< QPointF(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->dragFinished((*reinterpret_cast< QPointF(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->doubleClick((*reinterpret_cast< QPointF(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->endEdit(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QGMarker::*)(QPointF , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGMarker::dragging)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QGMarker::*)(QPointF , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGMarker::dragFinished)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QGMarker::*)(QPointF , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGMarker::doubleClick)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QGMarker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGMarker::endEdit)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TechDrawGui::QGMarker::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_TechDrawGui__QGMarker.data,
    qt_meta_data_TechDrawGui__QGMarker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TechDrawGui::QGMarker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TechDrawGui::QGMarker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TechDrawGui__QGMarker.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QGIVertex"))
        return static_cast< QGIVertex*>(this);
    return QObject::qt_metacast(_clname);
}

int TechDrawGui::QGMarker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void TechDrawGui::QGMarker::dragging(QPointF _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TechDrawGui::QGMarker::dragFinished(QPointF _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TechDrawGui::QGMarker::doubleClick(QPointF _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void TechDrawGui::QGMarker::endEdit()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
struct qt_meta_stringdata_TechDrawGui__QGEPath_t {
    QByteArrayData data[16];
    char stringdata0[164];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TechDrawGui__QGEPath_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TechDrawGui__QGEPath_t qt_meta_stringdata_TechDrawGui__QGEPath = {
    {
QT_MOC_LITERAL(0, 0, 20), // "TechDrawGui::QGEPath"
QT_MOC_LITERAL(1, 21, 13), // "pointsUpdated"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 6), // "attach"
QT_MOC_LITERAL(4, 43, 20), // "std::vector<QPointF>"
QT_MOC_LITERAL(5, 64, 6), // "deltas"
QT_MOC_LITERAL(6, 71, 5), // "hover"
QT_MOC_LITERAL(7, 77, 5), // "state"
QT_MOC_LITERAL(8, 83, 8), // "selected"
QT_MOC_LITERAL(9, 92, 14), // "onDragFinished"
QT_MOC_LITERAL(10, 107, 3), // "pos"
QT_MOC_LITERAL(11, 111, 5), // "index"
QT_MOC_LITERAL(12, 117, 10), // "onDragging"
QT_MOC_LITERAL(13, 128, 13), // "onDoubleClick"
QT_MOC_LITERAL(14, 142, 11), // "markerIndex"
QT_MOC_LITERAL(15, 154, 9) // "onEndEdit"

    },
    "TechDrawGui::QGEPath\0pointsUpdated\0\0"
    "attach\0std::vector<QPointF>\0deltas\0"
    "hover\0state\0selected\0onDragFinished\0"
    "pos\0index\0onDragging\0onDoubleClick\0"
    "markerIndex\0onEndEdit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TechDrawGui__QGEPath[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x06 /* Public */,
       6,    1,   54,    2, 0x06 /* Public */,
       8,    1,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    2,   60,    2, 0x0a /* Public */,
      12,    2,   65,    2, 0x0a /* Public */,
      13,    2,   70,    2, 0x0a /* Public */,
      15,    0,   75,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPointF, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::QPointF, QMetaType::Int,   10,   11,
    QMetaType::Void, QMetaType::QPointF, QMetaType::Int,   10,   11,
    QMetaType::Void, QMetaType::QPointF, QMetaType::Int,   10,   14,
    QMetaType::Void,

       0        // eod
};

void TechDrawGui::QGEPath::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QGEPath *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->pointsUpdated((*reinterpret_cast< QPointF(*)>(_a[1])),(*reinterpret_cast< std::vector<QPointF>(*)>(_a[2]))); break;
        case 1: _t->hover((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->selected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->onDragFinished((*reinterpret_cast< QPointF(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->onDragging((*reinterpret_cast< QPointF(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->onDoubleClick((*reinterpret_cast< QPointF(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->onEndEdit(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QGEPath::*)(QPointF , std::vector<QPointF> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGEPath::pointsUpdated)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QGEPath::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGEPath::hover)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QGEPath::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGEPath::selected)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TechDrawGui::QGEPath::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_TechDrawGui__QGEPath.data,
    qt_meta_data_TechDrawGui__QGEPath,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TechDrawGui::QGEPath::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TechDrawGui::QGEPath::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TechDrawGui__QGEPath.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QGIPrimPath"))
        return static_cast< QGIPrimPath*>(this);
    return QObject::qt_metacast(_clname);
}

int TechDrawGui::QGEPath::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void TechDrawGui::QGEPath::pointsUpdated(QPointF _t1, std::vector<QPointF> _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TechDrawGui::QGEPath::hover(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TechDrawGui::QGEPath::selected(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
