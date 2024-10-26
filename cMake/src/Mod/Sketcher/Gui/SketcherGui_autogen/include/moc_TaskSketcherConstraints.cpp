/****************************************************************************
** Meta object code from reading C++ file 'TaskSketcherConstraints.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/Mod/Sketcher/Gui/TaskSketcherConstraints.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskSketcherConstraints.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SketcherGui__ConstraintView_t {
    QByteArrayData data[20];
    char stringdata0[377];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SketcherGui__ConstraintView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SketcherGui__ConstraintView_t qt_meta_stringdata_SketcherGui__ConstraintView = {
    {
QT_MOC_LITERAL(0, 0, 27), // "SketcherGui::ConstraintView"
QT_MOC_LITERAL(1, 28, 21), // "onUpdateDrivingStatus"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(4, 68, 4), // "item"
QT_MOC_LITERAL(5, 73, 6), // "status"
QT_MOC_LITERAL(6, 80, 20), // "onUpdateActiveStatus"
QT_MOC_LITERAL(7, 101, 23), // "emitCenterSelectedItems"
QT_MOC_LITERAL(8, 125, 29), // "emitHideSelection3DVisibility"
QT_MOC_LITERAL(9, 155, 29), // "emitShowSelection3DVisibility"
QT_MOC_LITERAL(10, 185, 17), // "modifyCurrentItem"
QT_MOC_LITERAL(11, 203, 17), // "renameCurrentItem"
QT_MOC_LITERAL(12, 221, 19), // "centerSelectedItems"
QT_MOC_LITERAL(13, 241, 19), // "deleteSelectedItems"
QT_MOC_LITERAL(14, 261, 19), // "doSelectConstraints"
QT_MOC_LITERAL(15, 281, 19), // "updateDrivingStatus"
QT_MOC_LITERAL(16, 301, 18), // "updateActiveStatus"
QT_MOC_LITERAL(17, 320, 24), // "swapNamedOfSelectedItems"
QT_MOC_LITERAL(18, 345, 15), // "showConstraints"
QT_MOC_LITERAL(19, 361, 15) // "hideConstraints"

    },
    "SketcherGui::ConstraintView\0"
    "onUpdateDrivingStatus\0\0QListWidgetItem*\0"
    "item\0status\0onUpdateActiveStatus\0"
    "emitCenterSelectedItems\0"
    "emitHideSelection3DVisibility\0"
    "emitShowSelection3DVisibility\0"
    "modifyCurrentItem\0renameCurrentItem\0"
    "centerSelectedItems\0deleteSelectedItems\0"
    "doSelectConstraints\0updateDrivingStatus\0"
    "updateActiveStatus\0swapNamedOfSelectedItems\0"
    "showConstraints\0hideConstraints"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SketcherGui__ConstraintView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   89,    2, 0x06 /* Public */,
       6,    2,   94,    2, 0x06 /* Public */,
       7,    0,   99,    2, 0x06 /* Public */,
       8,    0,  100,    2, 0x06 /* Public */,
       9,    0,  101,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,  102,    2, 0x09 /* Protected */,
      11,    0,  103,    2, 0x09 /* Protected */,
      12,    0,  104,    2, 0x09 /* Protected */,
      13,    0,  105,    2, 0x09 /* Protected */,
      14,    0,  106,    2, 0x09 /* Protected */,
      15,    0,  107,    2, 0x09 /* Protected */,
      16,    0,  108,    2, 0x09 /* Protected */,
      17,    0,  109,    2, 0x09 /* Protected */,
      18,    0,  110,    2, 0x09 /* Protected */,
      19,    0,  111,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,    5,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SketcherGui::ConstraintView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ConstraintView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onUpdateDrivingStatus((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->onUpdateActiveStatus((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->emitCenterSelectedItems(); break;
        case 3: _t->emitHideSelection3DVisibility(); break;
        case 4: _t->emitShowSelection3DVisibility(); break;
        case 5: _t->modifyCurrentItem(); break;
        case 6: _t->renameCurrentItem(); break;
        case 7: _t->centerSelectedItems(); break;
        case 8: _t->deleteSelectedItems(); break;
        case 9: _t->doSelectConstraints(); break;
        case 10: _t->updateDrivingStatus(); break;
        case 11: _t->updateActiveStatus(); break;
        case 12: _t->swapNamedOfSelectedItems(); break;
        case 13: _t->showConstraints(); break;
        case 14: _t->hideConstraints(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ConstraintView::*)(QListWidgetItem * , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConstraintView::onUpdateDrivingStatus)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ConstraintView::*)(QListWidgetItem * , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConstraintView::onUpdateActiveStatus)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ConstraintView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConstraintView::emitCenterSelectedItems)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ConstraintView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConstraintView::emitHideSelection3DVisibility)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ConstraintView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConstraintView::emitShowSelection3DVisibility)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SketcherGui::ConstraintView::staticMetaObject = { {
    QMetaObject::SuperData::link<QListWidget::staticMetaObject>(),
    qt_meta_stringdata_SketcherGui__ConstraintView.data,
    qt_meta_data_SketcherGui__ConstraintView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SketcherGui::ConstraintView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SketcherGui::ConstraintView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SketcherGui__ConstraintView.stringdata0))
        return static_cast<void*>(this);
    return QListWidget::qt_metacast(_clname);
}

int SketcherGui::ConstraintView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void SketcherGui::ConstraintView::onUpdateDrivingStatus(QListWidgetItem * _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SketcherGui::ConstraintView::onUpdateActiveStatus(QListWidgetItem * _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SketcherGui::ConstraintView::emitCenterSelectedItems()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void SketcherGui::ConstraintView::emitHideSelection3DVisibility()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void SketcherGui::ConstraintView::emitShowSelection3DVisibility()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
struct qt_meta_stringdata_SketcherGui__ConstraintFilterList_t {
    QByteArrayData data[1];
    char stringdata0[34];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SketcherGui__ConstraintFilterList_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SketcherGui__ConstraintFilterList_t qt_meta_stringdata_SketcherGui__ConstraintFilterList = {
    {
QT_MOC_LITERAL(0, 0, 33) // "SketcherGui::ConstraintFilter..."

    },
    "SketcherGui::ConstraintFilterList"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SketcherGui__ConstraintFilterList[] = {

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

void SketcherGui::ConstraintFilterList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject SketcherGui::ConstraintFilterList::staticMetaObject = { {
    QMetaObject::SuperData::link<QListWidget::staticMetaObject>(),
    qt_meta_stringdata_SketcherGui__ConstraintFilterList.data,
    qt_meta_data_SketcherGui__ConstraintFilterList,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SketcherGui::ConstraintFilterList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SketcherGui::ConstraintFilterList::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SketcherGui__ConstraintFilterList.stringdata0))
        return static_cast<void*>(this);
    return QListWidget::qt_metacast(_clname);
}

int SketcherGui::ConstraintFilterList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListWidget::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_SketcherGui__TaskSketcherConstraints_t {
    QByteArrayData data[1];
    char stringdata0[37];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SketcherGui__TaskSketcherConstraints_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SketcherGui__TaskSketcherConstraints_t qt_meta_stringdata_SketcherGui__TaskSketcherConstraints = {
    {
QT_MOC_LITERAL(0, 0, 36) // "SketcherGui::TaskSketcherCons..."

    },
    "SketcherGui::TaskSketcherConstraints"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SketcherGui__TaskSketcherConstraints[] = {

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

void SketcherGui::TaskSketcherConstraints::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject SketcherGui::TaskSketcherConstraints::staticMetaObject = { {
    QMetaObject::SuperData::link<Gui::TaskView::TaskBox::staticMetaObject>(),
    qt_meta_stringdata_SketcherGui__TaskSketcherConstraints.data,
    qt_meta_data_SketcherGui__TaskSketcherConstraints,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SketcherGui::TaskSketcherConstraints::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SketcherGui::TaskSketcherConstraints::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SketcherGui__TaskSketcherConstraints.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Gui::SelectionObserver"))
        return static_cast< Gui::SelectionObserver*>(this);
    if (!strcmp(_clname, "ParameterGrp::ObserverType"))
        return static_cast< ParameterGrp::ObserverType*>(this);
    return Gui::TaskView::TaskBox::qt_metacast(_clname);
}

int SketcherGui::TaskSketcherConstraints::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Gui::TaskView::TaskBox::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
