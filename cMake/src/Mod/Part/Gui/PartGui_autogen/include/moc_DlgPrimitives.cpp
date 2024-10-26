/****************************************************************************
** Meta object code from reading C++ file 'DlgPrimitives.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/Mod/Part/Gui/DlgPrimitives.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DlgPrimitives.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PartGui__AbstractPrimitive_t {
    QByteArrayData data[1];
    char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PartGui__AbstractPrimitive_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PartGui__AbstractPrimitive_t qt_meta_stringdata_PartGui__AbstractPrimitive = {
    {
QT_MOC_LITERAL(0, 0, 26) // "PartGui::AbstractPrimitive"

    },
    "PartGui::AbstractPrimitive"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PartGui__AbstractPrimitive[] = {

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

void PartGui::AbstractPrimitive::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject PartGui::AbstractPrimitive::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PartGui__AbstractPrimitive.data,
    qt_meta_data_PartGui__AbstractPrimitive,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PartGui::AbstractPrimitive::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartGui::AbstractPrimitive::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PartGui__AbstractPrimitive.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PartGui::AbstractPrimitive::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_PartGui__PlanePrimitive_t {
    QByteArrayData data[1];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PartGui__PlanePrimitive_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PartGui__PlanePrimitive_t qt_meta_stringdata_PartGui__PlanePrimitive = {
    {
QT_MOC_LITERAL(0, 0, 23) // "PartGui::PlanePrimitive"

    },
    "PartGui::PlanePrimitive"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PartGui__PlanePrimitive[] = {

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

void PartGui::PlanePrimitive::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject PartGui::PlanePrimitive::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractPrimitive::staticMetaObject>(),
    qt_meta_stringdata_PartGui__PlanePrimitive.data,
    qt_meta_data_PartGui__PlanePrimitive,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PartGui::PlanePrimitive::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartGui::PlanePrimitive::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PartGui__PlanePrimitive.stringdata0))
        return static_cast<void*>(this);
    return AbstractPrimitive::qt_metacast(_clname);
}

int PartGui::PlanePrimitive::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractPrimitive::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_PartGui__BoxPrimitive_t {
    QByteArrayData data[1];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PartGui__BoxPrimitive_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PartGui__BoxPrimitive_t qt_meta_stringdata_PartGui__BoxPrimitive = {
    {
QT_MOC_LITERAL(0, 0, 21) // "PartGui::BoxPrimitive"

    },
    "PartGui::BoxPrimitive"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PartGui__BoxPrimitive[] = {

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

void PartGui::BoxPrimitive::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject PartGui::BoxPrimitive::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractPrimitive::staticMetaObject>(),
    qt_meta_stringdata_PartGui__BoxPrimitive.data,
    qt_meta_data_PartGui__BoxPrimitive,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PartGui::BoxPrimitive::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartGui::BoxPrimitive::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PartGui__BoxPrimitive.stringdata0))
        return static_cast<void*>(this);
    return AbstractPrimitive::qt_metacast(_clname);
}

int PartGui::BoxPrimitive::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractPrimitive::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_PartGui__CylinderPrimitive_t {
    QByteArrayData data[1];
    char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PartGui__CylinderPrimitive_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PartGui__CylinderPrimitive_t qt_meta_stringdata_PartGui__CylinderPrimitive = {
    {
QT_MOC_LITERAL(0, 0, 26) // "PartGui::CylinderPrimitive"

    },
    "PartGui::CylinderPrimitive"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PartGui__CylinderPrimitive[] = {

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

void PartGui::CylinderPrimitive::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject PartGui::CylinderPrimitive::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractPrimitive::staticMetaObject>(),
    qt_meta_stringdata_PartGui__CylinderPrimitive.data,
    qt_meta_data_PartGui__CylinderPrimitive,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PartGui::CylinderPrimitive::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartGui::CylinderPrimitive::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PartGui__CylinderPrimitive.stringdata0))
        return static_cast<void*>(this);
    return AbstractPrimitive::qt_metacast(_clname);
}

int PartGui::CylinderPrimitive::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractPrimitive::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_PartGui__ConePrimitive_t {
    QByteArrayData data[1];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PartGui__ConePrimitive_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PartGui__ConePrimitive_t qt_meta_stringdata_PartGui__ConePrimitive = {
    {
QT_MOC_LITERAL(0, 0, 22) // "PartGui::ConePrimitive"

    },
    "PartGui::ConePrimitive"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PartGui__ConePrimitive[] = {

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

void PartGui::ConePrimitive::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject PartGui::ConePrimitive::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractPrimitive::staticMetaObject>(),
    qt_meta_stringdata_PartGui__ConePrimitive.data,
    qt_meta_data_PartGui__ConePrimitive,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PartGui::ConePrimitive::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartGui::ConePrimitive::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PartGui__ConePrimitive.stringdata0))
        return static_cast<void*>(this);
    return AbstractPrimitive::qt_metacast(_clname);
}

int PartGui::ConePrimitive::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractPrimitive::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_PartGui__SpherePrimitive_t {
    QByteArrayData data[1];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PartGui__SpherePrimitive_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PartGui__SpherePrimitive_t qt_meta_stringdata_PartGui__SpherePrimitive = {
    {
QT_MOC_LITERAL(0, 0, 24) // "PartGui::SpherePrimitive"

    },
    "PartGui::SpherePrimitive"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PartGui__SpherePrimitive[] = {

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

void PartGui::SpherePrimitive::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject PartGui::SpherePrimitive::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractPrimitive::staticMetaObject>(),
    qt_meta_stringdata_PartGui__SpherePrimitive.data,
    qt_meta_data_PartGui__SpherePrimitive,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PartGui::SpherePrimitive::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartGui::SpherePrimitive::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PartGui__SpherePrimitive.stringdata0))
        return static_cast<void*>(this);
    return AbstractPrimitive::qt_metacast(_clname);
}

int PartGui::SpherePrimitive::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractPrimitive::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_PartGui__EllipsoidPrimitive_t {
    QByteArrayData data[1];
    char stringdata0[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PartGui__EllipsoidPrimitive_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PartGui__EllipsoidPrimitive_t qt_meta_stringdata_PartGui__EllipsoidPrimitive = {
    {
QT_MOC_LITERAL(0, 0, 27) // "PartGui::EllipsoidPrimitive"

    },
    "PartGui::EllipsoidPrimitive"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PartGui__EllipsoidPrimitive[] = {

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

void PartGui::EllipsoidPrimitive::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject PartGui::EllipsoidPrimitive::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractPrimitive::staticMetaObject>(),
    qt_meta_stringdata_PartGui__EllipsoidPrimitive.data,
    qt_meta_data_PartGui__EllipsoidPrimitive,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PartGui::EllipsoidPrimitive::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartGui::EllipsoidPrimitive::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PartGui__EllipsoidPrimitive.stringdata0))
        return static_cast<void*>(this);
    return AbstractPrimitive::qt_metacast(_clname);
}

int PartGui::EllipsoidPrimitive::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractPrimitive::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_PartGui__TorusPrimitive_t {
    QByteArrayData data[1];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PartGui__TorusPrimitive_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PartGui__TorusPrimitive_t qt_meta_stringdata_PartGui__TorusPrimitive = {
    {
QT_MOC_LITERAL(0, 0, 23) // "PartGui::TorusPrimitive"

    },
    "PartGui::TorusPrimitive"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PartGui__TorusPrimitive[] = {

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

void PartGui::TorusPrimitive::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject PartGui::TorusPrimitive::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractPrimitive::staticMetaObject>(),
    qt_meta_stringdata_PartGui__TorusPrimitive.data,
    qt_meta_data_PartGui__TorusPrimitive,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PartGui::TorusPrimitive::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartGui::TorusPrimitive::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PartGui__TorusPrimitive.stringdata0))
        return static_cast<void*>(this);
    return AbstractPrimitive::qt_metacast(_clname);
}

int PartGui::TorusPrimitive::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractPrimitive::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_PartGui__PrismPrimitive_t {
    QByteArrayData data[1];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PartGui__PrismPrimitive_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PartGui__PrismPrimitive_t qt_meta_stringdata_PartGui__PrismPrimitive = {
    {
QT_MOC_LITERAL(0, 0, 23) // "PartGui::PrismPrimitive"

    },
    "PartGui::PrismPrimitive"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PartGui__PrismPrimitive[] = {

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

void PartGui::PrismPrimitive::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject PartGui::PrismPrimitive::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractPrimitive::staticMetaObject>(),
    qt_meta_stringdata_PartGui__PrismPrimitive.data,
    qt_meta_data_PartGui__PrismPrimitive,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PartGui::PrismPrimitive::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartGui::PrismPrimitive::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PartGui__PrismPrimitive.stringdata0))
        return static_cast<void*>(this);
    return AbstractPrimitive::qt_metacast(_clname);
}

int PartGui::PrismPrimitive::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractPrimitive::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_PartGui__WedgePrimitive_t {
    QByteArrayData data[1];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PartGui__WedgePrimitive_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PartGui__WedgePrimitive_t qt_meta_stringdata_PartGui__WedgePrimitive = {
    {
QT_MOC_LITERAL(0, 0, 23) // "PartGui::WedgePrimitive"

    },
    "PartGui::WedgePrimitive"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PartGui__WedgePrimitive[] = {

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

void PartGui::WedgePrimitive::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject PartGui::WedgePrimitive::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractPrimitive::staticMetaObject>(),
    qt_meta_stringdata_PartGui__WedgePrimitive.data,
    qt_meta_data_PartGui__WedgePrimitive,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PartGui::WedgePrimitive::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartGui::WedgePrimitive::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PartGui__WedgePrimitive.stringdata0))
        return static_cast<void*>(this);
    return AbstractPrimitive::qt_metacast(_clname);
}

int PartGui::WedgePrimitive::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractPrimitive::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_PartGui__HelixPrimitive_t {
    QByteArrayData data[1];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PartGui__HelixPrimitive_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PartGui__HelixPrimitive_t qt_meta_stringdata_PartGui__HelixPrimitive = {
    {
QT_MOC_LITERAL(0, 0, 23) // "PartGui::HelixPrimitive"

    },
    "PartGui::HelixPrimitive"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PartGui__HelixPrimitive[] = {

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

void PartGui::HelixPrimitive::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject PartGui::HelixPrimitive::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractPrimitive::staticMetaObject>(),
    qt_meta_stringdata_PartGui__HelixPrimitive.data,
    qt_meta_data_PartGui__HelixPrimitive,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PartGui::HelixPrimitive::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartGui::HelixPrimitive::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PartGui__HelixPrimitive.stringdata0))
        return static_cast<void*>(this);
    return AbstractPrimitive::qt_metacast(_clname);
}

int PartGui::HelixPrimitive::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractPrimitive::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_PartGui__SpiralPrimitive_t {
    QByteArrayData data[1];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PartGui__SpiralPrimitive_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PartGui__SpiralPrimitive_t qt_meta_stringdata_PartGui__SpiralPrimitive = {
    {
QT_MOC_LITERAL(0, 0, 24) // "PartGui::SpiralPrimitive"

    },
    "PartGui::SpiralPrimitive"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PartGui__SpiralPrimitive[] = {

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

void PartGui::SpiralPrimitive::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject PartGui::SpiralPrimitive::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractPrimitive::staticMetaObject>(),
    qt_meta_stringdata_PartGui__SpiralPrimitive.data,
    qt_meta_data_PartGui__SpiralPrimitive,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PartGui::SpiralPrimitive::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartGui::SpiralPrimitive::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PartGui__SpiralPrimitive.stringdata0))
        return static_cast<void*>(this);
    return AbstractPrimitive::qt_metacast(_clname);
}

int PartGui::SpiralPrimitive::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractPrimitive::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_PartGui__CirclePrimitive_t {
    QByteArrayData data[1];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PartGui__CirclePrimitive_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PartGui__CirclePrimitive_t qt_meta_stringdata_PartGui__CirclePrimitive = {
    {
QT_MOC_LITERAL(0, 0, 24) // "PartGui::CirclePrimitive"

    },
    "PartGui::CirclePrimitive"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PartGui__CirclePrimitive[] = {

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

void PartGui::CirclePrimitive::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject PartGui::CirclePrimitive::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractPrimitive::staticMetaObject>(),
    qt_meta_stringdata_PartGui__CirclePrimitive.data,
    qt_meta_data_PartGui__CirclePrimitive,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PartGui::CirclePrimitive::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartGui::CirclePrimitive::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PartGui__CirclePrimitive.stringdata0))
        return static_cast<void*>(this);
    return AbstractPrimitive::qt_metacast(_clname);
}

int PartGui::CirclePrimitive::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractPrimitive::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_PartGui__EllipsePrimitive_t {
    QByteArrayData data[1];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PartGui__EllipsePrimitive_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PartGui__EllipsePrimitive_t qt_meta_stringdata_PartGui__EllipsePrimitive = {
    {
QT_MOC_LITERAL(0, 0, 25) // "PartGui::EllipsePrimitive"

    },
    "PartGui::EllipsePrimitive"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PartGui__EllipsePrimitive[] = {

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

void PartGui::EllipsePrimitive::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject PartGui::EllipsePrimitive::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractPrimitive::staticMetaObject>(),
    qt_meta_stringdata_PartGui__EllipsePrimitive.data,
    qt_meta_data_PartGui__EllipsePrimitive,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PartGui::EllipsePrimitive::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartGui::EllipsePrimitive::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PartGui__EllipsePrimitive.stringdata0))
        return static_cast<void*>(this);
    return AbstractPrimitive::qt_metacast(_clname);
}

int PartGui::EllipsePrimitive::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractPrimitive::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_PartGui__PolygonPrimitive_t {
    QByteArrayData data[1];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PartGui__PolygonPrimitive_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PartGui__PolygonPrimitive_t qt_meta_stringdata_PartGui__PolygonPrimitive = {
    {
QT_MOC_LITERAL(0, 0, 25) // "PartGui::PolygonPrimitive"

    },
    "PartGui::PolygonPrimitive"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PartGui__PolygonPrimitive[] = {

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

void PartGui::PolygonPrimitive::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject PartGui::PolygonPrimitive::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractPrimitive::staticMetaObject>(),
    qt_meta_stringdata_PartGui__PolygonPrimitive.data,
    qt_meta_data_PartGui__PolygonPrimitive,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PartGui::PolygonPrimitive::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartGui::PolygonPrimitive::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PartGui__PolygonPrimitive.stringdata0))
        return static_cast<void*>(this);
    return AbstractPrimitive::qt_metacast(_clname);
}

int PartGui::PolygonPrimitive::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractPrimitive::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_PartGui__LinePrimitive_t {
    QByteArrayData data[1];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PartGui__LinePrimitive_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PartGui__LinePrimitive_t qt_meta_stringdata_PartGui__LinePrimitive = {
    {
QT_MOC_LITERAL(0, 0, 22) // "PartGui::LinePrimitive"

    },
    "PartGui::LinePrimitive"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PartGui__LinePrimitive[] = {

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

void PartGui::LinePrimitive::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject PartGui::LinePrimitive::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractPrimitive::staticMetaObject>(),
    qt_meta_stringdata_PartGui__LinePrimitive.data,
    qt_meta_data_PartGui__LinePrimitive,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PartGui::LinePrimitive::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartGui::LinePrimitive::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PartGui__LinePrimitive.stringdata0))
        return static_cast<void*>(this);
    return AbstractPrimitive::qt_metacast(_clname);
}

int PartGui::LinePrimitive::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractPrimitive::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_PartGui__VertexPrimitive_t {
    QByteArrayData data[1];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PartGui__VertexPrimitive_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PartGui__VertexPrimitive_t qt_meta_stringdata_PartGui__VertexPrimitive = {
    {
QT_MOC_LITERAL(0, 0, 24) // "PartGui::VertexPrimitive"

    },
    "PartGui::VertexPrimitive"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PartGui__VertexPrimitive[] = {

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

void PartGui::VertexPrimitive::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject PartGui::VertexPrimitive::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractPrimitive::staticMetaObject>(),
    qt_meta_stringdata_PartGui__VertexPrimitive.data,
    qt_meta_data_PartGui__VertexPrimitive,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PartGui::VertexPrimitive::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartGui::VertexPrimitive::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PartGui__VertexPrimitive.stringdata0))
        return static_cast<void*>(this);
    return AbstractPrimitive::qt_metacast(_clname);
}

int PartGui::VertexPrimitive::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractPrimitive::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_PartGui__DlgPrimitives_t {
    QByteArrayData data[1];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PartGui__DlgPrimitives_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PartGui__DlgPrimitives_t qt_meta_stringdata_PartGui__DlgPrimitives = {
    {
QT_MOC_LITERAL(0, 0, 22) // "PartGui::DlgPrimitives"

    },
    "PartGui::DlgPrimitives"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PartGui__DlgPrimitives[] = {

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

void PartGui::DlgPrimitives::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject PartGui::DlgPrimitives::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_PartGui__DlgPrimitives.data,
    qt_meta_data_PartGui__DlgPrimitives,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PartGui::DlgPrimitives::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartGui::DlgPrimitives::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PartGui__DlgPrimitives.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int PartGui::DlgPrimitives::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_PartGui__Location_t {
    QByteArrayData data[1];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PartGui__Location_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PartGui__Location_t qt_meta_stringdata_PartGui__Location = {
    {
QT_MOC_LITERAL(0, 0, 17) // "PartGui::Location"

    },
    "PartGui::Location"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PartGui__Location[] = {

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

void PartGui::Location::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject PartGui::Location::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_PartGui__Location.data,
    qt_meta_data_PartGui__Location,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PartGui::Location::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartGui::Location::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PartGui__Location.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int PartGui::Location::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_PartGui__TaskPrimitives_t {
    QByteArrayData data[1];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PartGui__TaskPrimitives_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PartGui__TaskPrimitives_t qt_meta_stringdata_PartGui__TaskPrimitives = {
    {
QT_MOC_LITERAL(0, 0, 23) // "PartGui::TaskPrimitives"

    },
    "PartGui::TaskPrimitives"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PartGui__TaskPrimitives[] = {

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

void PartGui::TaskPrimitives::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject PartGui::TaskPrimitives::staticMetaObject = { {
    QMetaObject::SuperData::link<Gui::TaskView::TaskDialog::staticMetaObject>(),
    qt_meta_stringdata_PartGui__TaskPrimitives.data,
    qt_meta_data_PartGui__TaskPrimitives,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PartGui::TaskPrimitives::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartGui::TaskPrimitives::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PartGui__TaskPrimitives.stringdata0))
        return static_cast<void*>(this);
    return Gui::TaskView::TaskDialog::qt_metacast(_clname);
}

int PartGui::TaskPrimitives::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Gui::TaskView::TaskDialog::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_PartGui__TaskPrimitivesEdit_t {
    QByteArrayData data[1];
    char stringdata0[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PartGui__TaskPrimitivesEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PartGui__TaskPrimitivesEdit_t qt_meta_stringdata_PartGui__TaskPrimitivesEdit = {
    {
QT_MOC_LITERAL(0, 0, 27) // "PartGui::TaskPrimitivesEdit"

    },
    "PartGui::TaskPrimitivesEdit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PartGui__TaskPrimitivesEdit[] = {

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

void PartGui::TaskPrimitivesEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject PartGui::TaskPrimitivesEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<Gui::TaskView::TaskDialog::staticMetaObject>(),
    qt_meta_stringdata_PartGui__TaskPrimitivesEdit.data,
    qt_meta_data_PartGui__TaskPrimitivesEdit,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PartGui::TaskPrimitivesEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartGui::TaskPrimitivesEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PartGui__TaskPrimitivesEdit.stringdata0))
        return static_cast<void*>(this);
    return Gui::TaskView::TaskDialog::qt_metacast(_clname);
}

int PartGui::TaskPrimitivesEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Gui::TaskView::TaskDialog::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
