/****************************************************************************
** Meta object code from reading C++ file 'TaskPostBoxes.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/Mod/Fem/Gui/TaskPostBoxes.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskPostBoxes.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FemGui__PointMarker_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FemGui__PointMarker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FemGui__PointMarker_t qt_meta_stringdata_FemGui__PointMarker = {
    {
QT_MOC_LITERAL(0, 0, 19) // "FemGui::PointMarker"

    },
    "FemGui::PointMarker"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FemGui__PointMarker[] = {

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

void FemGui::PointMarker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject FemGui::PointMarker::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_FemGui__PointMarker.data,
    qt_meta_data_FemGui__PointMarker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FemGui::PointMarker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FemGui::PointMarker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FemGui__PointMarker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FemGui::PointMarker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_FemGui__DataAlongLineMarker_t {
    QByteArrayData data[9];
    char stringdata0[61];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FemGui__DataAlongLineMarker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FemGui__DataAlongLineMarker_t qt_meta_stringdata_FemGui__DataAlongLineMarker = {
    {
QT_MOC_LITERAL(0, 0, 27), // "FemGui::DataAlongLineMarker"
QT_MOC_LITERAL(1, 28, 13), // "PointsChanged"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 2), // "x1"
QT_MOC_LITERAL(4, 46, 2), // "y1"
QT_MOC_LITERAL(5, 49, 2), // "z1"
QT_MOC_LITERAL(6, 52, 2), // "x2"
QT_MOC_LITERAL(7, 55, 2), // "y2"
QT_MOC_LITERAL(8, 58, 2) // "z2"

    },
    "FemGui::DataAlongLineMarker\0PointsChanged\0"
    "\0x1\0y1\0z1\0x2\0y2\0z2"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FemGui__DataAlongLineMarker[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    6,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    3,    4,    5,    6,    7,    8,

       0        // eod
};

void FemGui::DataAlongLineMarker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DataAlongLineMarker *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->PointsChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4])),(*reinterpret_cast< double(*)>(_a[5])),(*reinterpret_cast< double(*)>(_a[6]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DataAlongLineMarker::*)(double , double , double , double , double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DataAlongLineMarker::PointsChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FemGui::DataAlongLineMarker::staticMetaObject = { {
    QMetaObject::SuperData::link<PointMarker::staticMetaObject>(),
    qt_meta_stringdata_FemGui__DataAlongLineMarker.data,
    qt_meta_data_FemGui__DataAlongLineMarker,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FemGui::DataAlongLineMarker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FemGui::DataAlongLineMarker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FemGui__DataAlongLineMarker.stringdata0))
        return static_cast<void*>(this);
    return PointMarker::qt_metacast(_clname);
}

int FemGui::DataAlongLineMarker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PointMarker::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void FemGui::DataAlongLineMarker::PointsChanged(double _t1, double _t2, double _t3, double _t4, double _t5, double _t6)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_FemGui__TaskPostBox_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FemGui__TaskPostBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FemGui__TaskPostBox_t qt_meta_stringdata_FemGui__TaskPostBox = {
    {
QT_MOC_LITERAL(0, 0, 19) // "FemGui::TaskPostBox"

    },
    "FemGui::TaskPostBox"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FemGui__TaskPostBox[] = {

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

void FemGui::TaskPostBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject FemGui::TaskPostBox::staticMetaObject = { {
    QMetaObject::SuperData::link<Gui::TaskView::TaskBox::staticMetaObject>(),
    qt_meta_stringdata_FemGui__TaskPostBox.data,
    qt_meta_data_FemGui__TaskPostBox,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FemGui::TaskPostBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FemGui::TaskPostBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FemGui__TaskPostBox.stringdata0))
        return static_cast<void*>(this);
    return Gui::TaskView::TaskBox::qt_metacast(_clname);
}

int FemGui::TaskPostBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Gui::TaskView::TaskBox::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_FemGui__TaskDlgPost_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FemGui__TaskDlgPost_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FemGui__TaskDlgPost_t qt_meta_stringdata_FemGui__TaskDlgPost = {
    {
QT_MOC_LITERAL(0, 0, 19) // "FemGui::TaskDlgPost"

    },
    "FemGui::TaskDlgPost"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FemGui__TaskDlgPost[] = {

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

void FemGui::TaskDlgPost::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject FemGui::TaskDlgPost::staticMetaObject = { {
    QMetaObject::SuperData::link<Gui::TaskView::TaskDialog::staticMetaObject>(),
    qt_meta_stringdata_FemGui__TaskDlgPost.data,
    qt_meta_data_FemGui__TaskDlgPost,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FemGui::TaskDlgPost::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FemGui::TaskDlgPost::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FemGui__TaskDlgPost.stringdata0))
        return static_cast<void*>(this);
    return Gui::TaskView::TaskDialog::qt_metacast(_clname);
}

int FemGui::TaskDlgPost::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Gui::TaskView::TaskDialog::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_FemGui__TaskPostDisplay_t {
    QByteArrayData data[1];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FemGui__TaskPostDisplay_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FemGui__TaskPostDisplay_t qt_meta_stringdata_FemGui__TaskPostDisplay = {
    {
QT_MOC_LITERAL(0, 0, 23) // "FemGui::TaskPostDisplay"

    },
    "FemGui::TaskPostDisplay"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FemGui__TaskPostDisplay[] = {

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

void FemGui::TaskPostDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject FemGui::TaskPostDisplay::staticMetaObject = { {
    QMetaObject::SuperData::link<TaskPostBox::staticMetaObject>(),
    qt_meta_stringdata_FemGui__TaskPostDisplay.data,
    qt_meta_data_FemGui__TaskPostDisplay,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FemGui::TaskPostDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FemGui::TaskPostDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FemGui__TaskPostDisplay.stringdata0))
        return static_cast<void*>(this);
    return TaskPostBox::qt_metacast(_clname);
}

int FemGui::TaskPostDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskPostBox::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_FemGui__TaskPostFunction_t {
    QByteArrayData data[1];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FemGui__TaskPostFunction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FemGui__TaskPostFunction_t qt_meta_stringdata_FemGui__TaskPostFunction = {
    {
QT_MOC_LITERAL(0, 0, 24) // "FemGui::TaskPostFunction"

    },
    "FemGui::TaskPostFunction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FemGui__TaskPostFunction[] = {

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

void FemGui::TaskPostFunction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject FemGui::TaskPostFunction::staticMetaObject = { {
    QMetaObject::SuperData::link<TaskPostBox::staticMetaObject>(),
    qt_meta_stringdata_FemGui__TaskPostFunction.data,
    qt_meta_data_FemGui__TaskPostFunction,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FemGui::TaskPostFunction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FemGui::TaskPostFunction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FemGui__TaskPostFunction.stringdata0))
        return static_cast<void*>(this);
    return TaskPostBox::qt_metacast(_clname);
}

int FemGui::TaskPostFunction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskPostBox::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_FemGui__TaskPostDataAlongLine_t {
    QByteArrayData data[1];
    char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FemGui__TaskPostDataAlongLine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FemGui__TaskPostDataAlongLine_t qt_meta_stringdata_FemGui__TaskPostDataAlongLine = {
    {
QT_MOC_LITERAL(0, 0, 29) // "FemGui::TaskPostDataAlongLine"

    },
    "FemGui::TaskPostDataAlongLine"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FemGui__TaskPostDataAlongLine[] = {

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

void FemGui::TaskPostDataAlongLine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject FemGui::TaskPostDataAlongLine::staticMetaObject = { {
    QMetaObject::SuperData::link<TaskPostBox::staticMetaObject>(),
    qt_meta_stringdata_FemGui__TaskPostDataAlongLine.data,
    qt_meta_data_FemGui__TaskPostDataAlongLine,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FemGui::TaskPostDataAlongLine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FemGui::TaskPostDataAlongLine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FemGui__TaskPostDataAlongLine.stringdata0))
        return static_cast<void*>(this);
    return TaskPostBox::qt_metacast(_clname);
}

int FemGui::TaskPostDataAlongLine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskPostBox::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_FemGui__TaskPostDataAtPoint_t {
    QByteArrayData data[6];
    char stringdata0[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FemGui__TaskPostDataAtPoint_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FemGui__TaskPostDataAtPoint_t qt_meta_stringdata_FemGui__TaskPostDataAtPoint = {
    {
QT_MOC_LITERAL(0, 0, 27), // "FemGui::TaskPostDataAtPoint"
QT_MOC_LITERAL(1, 28, 13), // "PointsChanged"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 1), // "x"
QT_MOC_LITERAL(4, 45, 1), // "y"
QT_MOC_LITERAL(5, 47, 1) // "z"

    },
    "FemGui::TaskPostDataAtPoint\0PointsChanged\0"
    "\0x\0y\0z"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FemGui__TaskPostDataAtPoint[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,    3,    4,    5,

       0        // eod
};

void FemGui::TaskPostDataAtPoint::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TaskPostDataAtPoint *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->PointsChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TaskPostDataAtPoint::*)(double , double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TaskPostDataAtPoint::PointsChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FemGui::TaskPostDataAtPoint::staticMetaObject = { {
    QMetaObject::SuperData::link<TaskPostBox::staticMetaObject>(),
    qt_meta_stringdata_FemGui__TaskPostDataAtPoint.data,
    qt_meta_data_FemGui__TaskPostDataAtPoint,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FemGui::TaskPostDataAtPoint::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FemGui::TaskPostDataAtPoint::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FemGui__TaskPostDataAtPoint.stringdata0))
        return static_cast<void*>(this);
    return TaskPostBox::qt_metacast(_clname);
}

int FemGui::TaskPostDataAtPoint::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskPostBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void FemGui::TaskPostDataAtPoint::PointsChanged(double _t1, double _t2, double _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_FemGui__TaskPostClip_t {
    QByteArrayData data[3];
    char stringdata0[40];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FemGui__TaskPostClip_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FemGui__TaskPostClip_t qt_meta_stringdata_FemGui__TaskPostClip = {
    {
QT_MOC_LITERAL(0, 0, 20), // "FemGui::TaskPostClip"
QT_MOC_LITERAL(1, 21, 17), // "emitAddedFunction"
QT_MOC_LITERAL(2, 39, 0) // ""

    },
    "FemGui::TaskPostClip\0emitAddedFunction\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FemGui__TaskPostClip[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void FemGui::TaskPostClip::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TaskPostClip *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->emitAddedFunction(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TaskPostClip::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TaskPostClip::emitAddedFunction)) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject FemGui::TaskPostClip::staticMetaObject = { {
    QMetaObject::SuperData::link<TaskPostBox::staticMetaObject>(),
    qt_meta_stringdata_FemGui__TaskPostClip.data,
    qt_meta_data_FemGui__TaskPostClip,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FemGui::TaskPostClip::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FemGui::TaskPostClip::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FemGui__TaskPostClip.stringdata0))
        return static_cast<void*>(this);
    return TaskPostBox::qt_metacast(_clname);
}

int FemGui::TaskPostClip::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskPostBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void FemGui::TaskPostClip::emitAddedFunction()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_FemGui__TaskPostContours_t {
    QByteArrayData data[1];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FemGui__TaskPostContours_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FemGui__TaskPostContours_t qt_meta_stringdata_FemGui__TaskPostContours = {
    {
QT_MOC_LITERAL(0, 0, 24) // "FemGui::TaskPostContours"

    },
    "FemGui::TaskPostContours"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FemGui__TaskPostContours[] = {

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

void FemGui::TaskPostContours::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject FemGui::TaskPostContours::staticMetaObject = { {
    QMetaObject::SuperData::link<TaskPostBox::staticMetaObject>(),
    qt_meta_stringdata_FemGui__TaskPostContours.data,
    qt_meta_data_FemGui__TaskPostContours,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FemGui::TaskPostContours::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FemGui::TaskPostContours::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FemGui__TaskPostContours.stringdata0))
        return static_cast<void*>(this);
    return TaskPostBox::qt_metacast(_clname);
}

int FemGui::TaskPostContours::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskPostBox::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_FemGui__TaskPostCut_t {
    QByteArrayData data[3];
    char stringdata0[39];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FemGui__TaskPostCut_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FemGui__TaskPostCut_t qt_meta_stringdata_FemGui__TaskPostCut = {
    {
QT_MOC_LITERAL(0, 0, 19), // "FemGui::TaskPostCut"
QT_MOC_LITERAL(1, 20, 17), // "emitAddedFunction"
QT_MOC_LITERAL(2, 38, 0) // ""

    },
    "FemGui::TaskPostCut\0emitAddedFunction\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FemGui__TaskPostCut[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void FemGui::TaskPostCut::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TaskPostCut *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->emitAddedFunction(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TaskPostCut::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TaskPostCut::emitAddedFunction)) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject FemGui::TaskPostCut::staticMetaObject = { {
    QMetaObject::SuperData::link<TaskPostBox::staticMetaObject>(),
    qt_meta_stringdata_FemGui__TaskPostCut.data,
    qt_meta_data_FemGui__TaskPostCut,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FemGui::TaskPostCut::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FemGui::TaskPostCut::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FemGui__TaskPostCut.stringdata0))
        return static_cast<void*>(this);
    return TaskPostBox::qt_metacast(_clname);
}

int FemGui::TaskPostCut::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskPostBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void FemGui::TaskPostCut::emitAddedFunction()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_FemGui__TaskPostScalarClip_t {
    QByteArrayData data[1];
    char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FemGui__TaskPostScalarClip_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FemGui__TaskPostScalarClip_t qt_meta_stringdata_FemGui__TaskPostScalarClip = {
    {
QT_MOC_LITERAL(0, 0, 26) // "FemGui::TaskPostScalarClip"

    },
    "FemGui::TaskPostScalarClip"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FemGui__TaskPostScalarClip[] = {

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

void FemGui::TaskPostScalarClip::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject FemGui::TaskPostScalarClip::staticMetaObject = { {
    QMetaObject::SuperData::link<TaskPostBox::staticMetaObject>(),
    qt_meta_stringdata_FemGui__TaskPostScalarClip.data,
    qt_meta_data_FemGui__TaskPostScalarClip,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FemGui::TaskPostScalarClip::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FemGui::TaskPostScalarClip::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FemGui__TaskPostScalarClip.stringdata0))
        return static_cast<void*>(this);
    return TaskPostBox::qt_metacast(_clname);
}

int FemGui::TaskPostScalarClip::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskPostBox::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_FemGui__TaskPostWarpVector_t {
    QByteArrayData data[1];
    char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FemGui__TaskPostWarpVector_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FemGui__TaskPostWarpVector_t qt_meta_stringdata_FemGui__TaskPostWarpVector = {
    {
QT_MOC_LITERAL(0, 0, 26) // "FemGui::TaskPostWarpVector"

    },
    "FemGui::TaskPostWarpVector"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FemGui__TaskPostWarpVector[] = {

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

void FemGui::TaskPostWarpVector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject FemGui::TaskPostWarpVector::staticMetaObject = { {
    QMetaObject::SuperData::link<TaskPostBox::staticMetaObject>(),
    qt_meta_stringdata_FemGui__TaskPostWarpVector.data,
    qt_meta_data_FemGui__TaskPostWarpVector,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FemGui::TaskPostWarpVector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FemGui::TaskPostWarpVector::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FemGui__TaskPostWarpVector.stringdata0))
        return static_cast<void*>(this);
    return TaskPostBox::qt_metacast(_clname);
}

int FemGui::TaskPostWarpVector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TaskPostBox::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
