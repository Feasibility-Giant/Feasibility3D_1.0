/****************************************************************************
** Meta object code from reading C++ file 'DlgSmoothing.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/Mod/Mesh/Gui/DlgSmoothing.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DlgSmoothing.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MeshGui__DlgSmoothing_t {
    QByteArrayData data[3];
    char stringdata0[40];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MeshGui__DlgSmoothing_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MeshGui__DlgSmoothing_t qt_meta_stringdata_MeshGui__DlgSmoothing = {
    {
QT_MOC_LITERAL(0, 0, 21), // "MeshGui::DlgSmoothing"
QT_MOC_LITERAL(1, 22, 16), // "toggledSelection"
QT_MOC_LITERAL(2, 39, 0) // ""

    },
    "MeshGui::DlgSmoothing\0toggledSelection\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MeshGui__DlgSmoothing[] = {

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
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void MeshGui::DlgSmoothing::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DlgSmoothing *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->toggledSelection((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DlgSmoothing::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DlgSmoothing::toggledSelection)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MeshGui::DlgSmoothing::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_MeshGui__DlgSmoothing.data,
    qt_meta_data_MeshGui__DlgSmoothing,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MeshGui::DlgSmoothing::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MeshGui::DlgSmoothing::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MeshGui__DlgSmoothing.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MeshGui::DlgSmoothing::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void MeshGui::DlgSmoothing::toggledSelection(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_MeshGui__SmoothingDialog_t {
    QByteArrayData data[1];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MeshGui__SmoothingDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MeshGui__SmoothingDialog_t qt_meta_stringdata_MeshGui__SmoothingDialog = {
    {
QT_MOC_LITERAL(0, 0, 24) // "MeshGui::SmoothingDialog"

    },
    "MeshGui::SmoothingDialog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MeshGui__SmoothingDialog[] = {

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

void MeshGui::SmoothingDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject MeshGui::SmoothingDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_MeshGui__SmoothingDialog.data,
    qt_meta_data_MeshGui__SmoothingDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MeshGui::SmoothingDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MeshGui::SmoothingDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MeshGui__SmoothingDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int MeshGui::SmoothingDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_MeshGui__TaskSmoothing_t {
    QByteArrayData data[1];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MeshGui__TaskSmoothing_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MeshGui__TaskSmoothing_t qt_meta_stringdata_MeshGui__TaskSmoothing = {
    {
QT_MOC_LITERAL(0, 0, 22) // "MeshGui::TaskSmoothing"

    },
    "MeshGui::TaskSmoothing"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MeshGui__TaskSmoothing[] = {

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

void MeshGui::TaskSmoothing::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject MeshGui::TaskSmoothing::staticMetaObject = { {
    QMetaObject::SuperData::link<Gui::TaskView::TaskDialog::staticMetaObject>(),
    qt_meta_stringdata_MeshGui__TaskSmoothing.data,
    qt_meta_data_MeshGui__TaskSmoothing,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MeshGui::TaskSmoothing::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MeshGui::TaskSmoothing::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MeshGui__TaskSmoothing.stringdata0))
        return static_cast<void*>(this);
    return Gui::TaskView::TaskDialog::qt_metacast(_clname);
}

int MeshGui::TaskSmoothing::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Gui::TaskView::TaskDialog::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
