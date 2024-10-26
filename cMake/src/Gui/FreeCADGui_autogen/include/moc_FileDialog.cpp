/****************************************************************************
** Meta object code from reading C++ file 'FileDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/Gui/FileDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FileDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Gui__FileDialog_t {
    QByteArrayData data[3];
    char stringdata0[34];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Gui__FileDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Gui__FileDialog_t qt_meta_stringdata_Gui__FileDialog = {
    {
QT_MOC_LITERAL(0, 0, 15), // "Gui::FileDialog"
QT_MOC_LITERAL(1, 16, 16), // "onSelectedFilter"
QT_MOC_LITERAL(2, 33, 0) // ""

    },
    "Gui::FileDialog\0onSelectedFilter\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Gui__FileDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void Gui::FileDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FileDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onSelectedFilter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Gui::FileDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QFileDialog::staticMetaObject>(),
    qt_meta_stringdata_Gui__FileDialog.data,
    qt_meta_data_Gui__FileDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Gui::FileDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::FileDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__FileDialog.stringdata0))
        return static_cast<void*>(this);
    return QFileDialog::qt_metacast(_clname);
}

int Gui::FileDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFileDialog::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Gui__FileOptionsDialog_t {
    QByteArrayData data[3];
    char stringdata0[40];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Gui__FileOptionsDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Gui__FileOptionsDialog_t qt_meta_stringdata_Gui__FileOptionsDialog = {
    {
QT_MOC_LITERAL(0, 0, 22), // "Gui::FileOptionsDialog"
QT_MOC_LITERAL(1, 23, 15), // "toggleExtension"
QT_MOC_LITERAL(2, 39, 0) // ""

    },
    "Gui::FileOptionsDialog\0toggleExtension\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Gui__FileOptionsDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void Gui::FileOptionsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FileOptionsDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->toggleExtension(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject Gui::FileOptionsDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QFileDialog::staticMetaObject>(),
    qt_meta_stringdata_Gui__FileOptionsDialog.data,
    qt_meta_data_Gui__FileOptionsDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Gui::FileOptionsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::FileOptionsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__FileOptionsDialog.stringdata0))
        return static_cast<void*>(this);
    return QFileDialog::qt_metacast(_clname);
}

int Gui::FileOptionsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFileDialog::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_Gui__FileChooser_t {
    QByteArrayData data[29];
    char stringdata0[337];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Gui__FileChooser_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Gui__FileChooser_t qt_meta_stringdata_Gui__FileChooser = {
    {
QT_MOC_LITERAL(0, 0, 16), // "Gui::FileChooser"
QT_MOC_LITERAL(1, 17, 15), // "fileNameChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 16), // "fileNameSelected"
QT_MOC_LITERAL(4, 51, 13), // "filterChanged"
QT_MOC_LITERAL(5, 65, 17), // "buttonTextChanged"
QT_MOC_LITERAL(6, 83, 11), // "modeChanged"
QT_MOC_LITERAL(7, 95, 22), // "Gui::FileChooser::Mode"
QT_MOC_LITERAL(8, 118, 17), // "acceptModeChanged"
QT_MOC_LITERAL(9, 136, 28), // "Gui::FileChooser::AcceptMode"
QT_MOC_LITERAL(10, 165, 11), // "setFileName"
QT_MOC_LITERAL(11, 177, 2), // "fn"
QT_MOC_LITERAL(12, 180, 7), // "setMode"
QT_MOC_LITERAL(13, 188, 1), // "m"
QT_MOC_LITERAL(14, 190, 9), // "setFilter"
QT_MOC_LITERAL(15, 200, 13), // "setButtonText"
QT_MOC_LITERAL(16, 214, 10), // "chooseFile"
QT_MOC_LITERAL(17, 225, 15), // "editingFinished"
QT_MOC_LITERAL(18, 241, 4), // "mode"
QT_MOC_LITERAL(19, 246, 4), // "Mode"
QT_MOC_LITERAL(20, 251, 10), // "acceptMode"
QT_MOC_LITERAL(21, 262, 10), // "AcceptMode"
QT_MOC_LITERAL(22, 273, 8), // "fileName"
QT_MOC_LITERAL(23, 282, 6), // "filter"
QT_MOC_LITERAL(24, 289, 10), // "buttonText"
QT_MOC_LITERAL(25, 300, 4), // "File"
QT_MOC_LITERAL(26, 305, 9), // "Directory"
QT_MOC_LITERAL(27, 315, 10), // "AcceptOpen"
QT_MOC_LITERAL(28, 326, 10) // "AcceptSave"

    },
    "Gui::FileChooser\0fileNameChanged\0\0"
    "fileNameSelected\0filterChanged\0"
    "buttonTextChanged\0modeChanged\0"
    "Gui::FileChooser::Mode\0acceptModeChanged\0"
    "Gui::FileChooser::AcceptMode\0setFileName\0"
    "fn\0setMode\0m\0setFilter\0setButtonText\0"
    "chooseFile\0editingFinished\0mode\0Mode\0"
    "acceptMode\0AcceptMode\0fileName\0filter\0"
    "buttonText\0File\0Directory\0AcceptOpen\0"
    "AcceptSave"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Gui__FileChooser[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       5,  106, // properties
       2,  126, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       3,    1,   77,    2, 0x06 /* Public */,
       4,    1,   80,    2, 0x06 /* Public */,
       5,    1,   83,    2, 0x06 /* Public */,
       6,    1,   86,    2, 0x06 /* Public */,
       8,    1,   89,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   92,    2, 0x0a /* Public */,
      12,    1,   95,    2, 0x0a /* Public */,
      14,    1,   98,    2, 0x0a /* Public */,
      15,    1,  101,    2, 0x0a /* Public */,
      16,    0,  104,    2, 0x08 /* Private */,
      17,    0,  105,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, 0x80000000 | 9,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, 0x80000000 | 7,   13,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      18, 0x80000000 | 19, 0x0049510b,
      20, 0x80000000 | 21, 0x0049510b,
      22, QMetaType::QString, 0x00495103,
      23, QMetaType::QString, 0x00495103,
      24, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       4,
       5,
       0,
       2,
       3,

 // enums: name, alias, flags, count, data
      19,   19, 0x0,    2,  136,
      21,   21, 0x0,    2,  140,

 // enum data: key, value
      25, uint(Gui::FileChooser::File),
      26, uint(Gui::FileChooser::Directory),
      27, uint(Gui::FileChooser::AcceptOpen),
      28, uint(Gui::FileChooser::AcceptSave),

       0        // eod
};

void Gui::FileChooser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FileChooser *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->fileNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->fileNameSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->filterChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->buttonTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->modeChanged((*reinterpret_cast< Gui::FileChooser::Mode(*)>(_a[1]))); break;
        case 5: _t->acceptModeChanged((*reinterpret_cast< Gui::FileChooser::AcceptMode(*)>(_a[1]))); break;
        case 6: _t->setFileName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->setMode((*reinterpret_cast< Gui::FileChooser::Mode(*)>(_a[1]))); break;
        case 8: _t->setFilter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->setButtonText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->chooseFile(); break;
        case 11: _t->editingFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FileChooser::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileChooser::fileNameChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FileChooser::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileChooser::fileNameSelected)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FileChooser::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileChooser::filterChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FileChooser::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileChooser::buttonTextChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (FileChooser::*)(Gui::FileChooser::Mode );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileChooser::modeChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (FileChooser::*)(Gui::FileChooser::AcceptMode );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileChooser::acceptModeChanged)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FileChooser *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Mode*>(_v) = _t->mode(); break;
        case 1: *reinterpret_cast< AcceptMode*>(_v) = _t->acceptMode(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->fileName(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->filter(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->buttonText(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<FileChooser *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMode(*reinterpret_cast< Mode*>(_v)); break;
        case 1: _t->setAcceptMode(*reinterpret_cast< AcceptMode*>(_v)); break;
        case 2: _t->setFileName(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setFilter(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setButtonText(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Gui::FileChooser::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Gui__FileChooser.data,
    qt_meta_data_Gui__FileChooser,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Gui::FileChooser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::FileChooser::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__FileChooser.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Gui::FileChooser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Gui::FileChooser::fileNameChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Gui::FileChooser::fileNameSelected(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Gui::FileChooser::filterChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Gui::FileChooser::buttonTextChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Gui::FileChooser::modeChanged(Gui::FileChooser::Mode _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Gui::FileChooser::acceptModeChanged(Gui::FileChooser::AcceptMode _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
struct qt_meta_stringdata_Gui__SelectModule_t {
    QByteArrayData data[3];
    char stringdata0[35];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Gui__SelectModule_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Gui__SelectModule_t qt_meta_stringdata_Gui__SelectModule = {
    {
QT_MOC_LITERAL(0, 0, 17), // "Gui::SelectModule"
QT_MOC_LITERAL(1, 18, 15), // "onButtonClicked"
QT_MOC_LITERAL(2, 34, 0) // ""

    },
    "Gui::SelectModule\0onButtonClicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Gui__SelectModule[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void Gui::SelectModule::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SelectModule *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onButtonClicked(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject Gui::SelectModule::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Gui__SelectModule.data,
    qt_meta_data_Gui__SelectModule,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Gui::SelectModule::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gui::SelectModule::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Gui__SelectModule.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Gui::SelectModule::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
