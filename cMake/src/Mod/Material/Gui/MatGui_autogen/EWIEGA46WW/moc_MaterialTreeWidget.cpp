/****************************************************************************
** Meta object code from reading C++ file 'MaterialTreeWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/Mod/Material/Gui/MaterialTreeWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MaterialTreeWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MatGui__MaterialTreeWidget_t {
    QByteArrayData data[22];
    char stringdata0[274];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MatGui__MaterialTreeWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MatGui__MaterialTreeWidget_t qt_meta_stringdata_MatGui__MaterialTreeWidget = {
    {
QT_MOC_LITERAL(0, 0, 26), // "MatGui::MaterialTreeWidget"
QT_MOC_LITERAL(1, 27, 16), // "materialSelected"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 36), // "std::shared_ptr<Materials::Ma..."
QT_MOC_LITERAL(4, 82, 8), // "material"
QT_MOC_LITERAL(5, 91, 10), // "onMaterial"
QT_MOC_LITERAL(6, 102, 4), // "uuid"
QT_MOC_LITERAL(7, 107, 10), // "onExpanded"
QT_MOC_LITERAL(8, 118, 8), // "expanded"
QT_MOC_LITERAL(9, 127, 13), // "expandClicked"
QT_MOC_LITERAL(10, 141, 7), // "checked"
QT_MOC_LITERAL(11, 149, 13), // "editorClicked"
QT_MOC_LITERAL(12, 163, 16), // "onSelectMaterial"
QT_MOC_LITERAL(13, 180, 14), // "QItemSelection"
QT_MOC_LITERAL(14, 195, 8), // "selected"
QT_MOC_LITERAL(15, 204, 10), // "deselected"
QT_MOC_LITERAL(16, 215, 13), // "onDoubleClick"
QT_MOC_LITERAL(17, 229, 11), // "QModelIndex"
QT_MOC_LITERAL(18, 241, 5), // "index"
QT_MOC_LITERAL(19, 247, 8), // "onFilter"
QT_MOC_LITERAL(20, 256, 4), // "text"
QT_MOC_LITERAL(21, 261, 12) // "treeSizeHint"

    },
    "MatGui::MaterialTreeWidget\0materialSelected\0"
    "\0std::shared_ptr<Materials::Material>\0"
    "material\0onMaterial\0uuid\0onExpanded\0"
    "expanded\0expandClicked\0checked\0"
    "editorClicked\0onSelectMaterial\0"
    "QItemSelection\0selected\0deselected\0"
    "onDoubleClick\0QModelIndex\0index\0"
    "onFilter\0text\0treeSizeHint"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MatGui__MaterialTreeWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       1,   80, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       5,    1,   57,    2, 0x06 /* Public */,
       7,    1,   60,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   63,    2, 0x08 /* Private */,
      11,    1,   66,    2, 0x08 /* Private */,
      12,    2,   69,    2, 0x08 /* Private */,
      16,    1,   74,    2, 0x08 /* Private */,
      19,    1,   77,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::Bool,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, 0x80000000 | 13, 0x80000000 | 13,   14,   15,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, QMetaType::QString,   20,

 // properties: name, type, flags
      21, QMetaType::QSize, 0x00095103,

       0        // eod
};

void MatGui::MaterialTreeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MaterialTreeWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->materialSelected((*reinterpret_cast< const std::shared_ptr<Materials::Material>(*)>(_a[1]))); break;
        case 1: _t->onMaterial((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->onExpanded((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->expandClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->editorClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->onSelectMaterial((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 6: _t->onDoubleClick((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 7: _t->onFilter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< std::shared_ptr<Materials::Material> >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QItemSelection >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MaterialTreeWidget::*)(const std::shared_ptr<Materials::Material> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MaterialTreeWidget::materialSelected)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MaterialTreeWidget::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MaterialTreeWidget::onMaterial)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MaterialTreeWidget::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MaterialTreeWidget::onExpanded)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<MaterialTreeWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QSize*>(_v) = _t->treeSizeHint(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<MaterialTreeWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTreeSizeHint(*reinterpret_cast< QSize*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject MatGui::MaterialTreeWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_MatGui__MaterialTreeWidget.data,
    qt_meta_data_MatGui__MaterialTreeWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MatGui::MaterialTreeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MatGui::MaterialTreeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MatGui__MaterialTreeWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Base::BaseClass"))
        return static_cast< Base::BaseClass*>(this);
    return QWidget::qt_metacast(_clname);
}

int MatGui::MaterialTreeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void MatGui::MaterialTreeWidget::materialSelected(const std::shared_ptr<Materials::Material> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MatGui::MaterialTreeWidget::onMaterial(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MatGui::MaterialTreeWidget::onExpanded(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_MatGui__PrefMaterialTreeWidget_t {
    QByteArrayData data[3];
    char stringdata0[50];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MatGui__PrefMaterialTreeWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MatGui__PrefMaterialTreeWidget_t qt_meta_stringdata_MatGui__PrefMaterialTreeWidget = {
    {
QT_MOC_LITERAL(0, 0, 30), // "MatGui::PrefMaterialTreeWidget"
QT_MOC_LITERAL(1, 31, 9), // "prefEntry"
QT_MOC_LITERAL(2, 41, 8) // "prefPath"

    },
    "MatGui::PrefMaterialTreeWidget\0prefEntry\0"
    "prefPath"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MatGui__PrefMaterialTreeWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QByteArray, 0x00095003,
       2, QMetaType::QByteArray, 0x00095003,

       0        // eod
};

void MatGui::PrefMaterialTreeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PrefMaterialTreeWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QByteArray*>(_v) = _t->entryName(); break;
        case 1: *reinterpret_cast< QByteArray*>(_v) = _t->paramGrpPath(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<PrefMaterialTreeWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setEntryName(*reinterpret_cast< QByteArray*>(_v)); break;
        case 1: _t->setParamGrpPath(*reinterpret_cast< QByteArray*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject MatGui::PrefMaterialTreeWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<MaterialTreeWidget::staticMetaObject>(),
    qt_meta_stringdata_MatGui__PrefMaterialTreeWidget.data,
    qt_meta_data_MatGui__PrefMaterialTreeWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MatGui::PrefMaterialTreeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MatGui::PrefMaterialTreeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MatGui__PrefMaterialTreeWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Gui::PrefWidget"))
        return static_cast< Gui::PrefWidget*>(this);
    return MaterialTreeWidget::qt_metacast(_clname);
}

int MatGui::PrefMaterialTreeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = MaterialTreeWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
