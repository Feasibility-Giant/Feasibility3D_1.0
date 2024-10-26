/****************************************************************************
** Meta object code from reading C++ file 'QGTracker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../../../../src/Mod/TechDraw/Gui/QGTracker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QGTracker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TechDrawGui__QGTracker_t {
    QByteArrayData data[9];
    char stringdata0[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TechDrawGui__QGTracker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TechDrawGui__QGTracker_t qt_meta_stringdata_TechDrawGui__QGTracker = {
    {
QT_MOC_LITERAL(0, 0, 22), // "TechDrawGui::QGTracker"
QT_MOC_LITERAL(1, 23, 15), // "drawingFinished"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 20), // "std::vector<QPointF>"
QT_MOC_LITERAL(4, 61, 3), // "pts"
QT_MOC_LITERAL(5, 65, 21), // "TechDrawGui::QGIView*"
QT_MOC_LITERAL(6, 87, 8), // "qgParent"
QT_MOC_LITERAL(7, 96, 11), // "qViewPicked"
QT_MOC_LITERAL(8, 108, 3) // "pos"

    },
    "TechDrawGui::QGTracker\0drawingFinished\0"
    "\0std::vector<QPointF>\0pts\0"
    "TechDrawGui::QGIView*\0qgParent\0"
    "qViewPicked\0pos"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TechDrawGui__QGTracker[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x06 /* Public */,
       7,    2,   29,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, QMetaType::QPointF, 0x80000000 | 5,    8,    6,

       0        // eod
};

void TechDrawGui::QGTracker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QGTracker *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->drawingFinished((*reinterpret_cast< std::vector<QPointF>(*)>(_a[1])),(*reinterpret_cast< TechDrawGui::QGIView*(*)>(_a[2]))); break;
        case 1: _t->qViewPicked((*reinterpret_cast< QPointF(*)>(_a[1])),(*reinterpret_cast< TechDrawGui::QGIView*(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QGTracker::*)(std::vector<QPointF> , TechDrawGui::QGIView * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGTracker::drawingFinished)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QGTracker::*)(QPointF , TechDrawGui::QGIView * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QGTracker::qViewPicked)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TechDrawGui::QGTracker::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_TechDrawGui__QGTracker.data,
    qt_meta_data_TechDrawGui__QGTracker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TechDrawGui::QGTracker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TechDrawGui::QGTracker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TechDrawGui__QGTracker.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QGIPrimPath"))
        return static_cast< QGIPrimPath*>(this);
    return QObject::qt_metacast(_clname);
}

int TechDrawGui::QGTracker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void TechDrawGui::QGTracker::drawingFinished(std::vector<QPointF> _t1, TechDrawGui::QGIView * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TechDrawGui::QGTracker::qViewPicked(QPointF _t1, TechDrawGui::QGIView * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
