/****************************************************************************
** Meta object code from reading C++ file 'runnable.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../runnable.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'runnable.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN8RunnableE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN8RunnableE = QtMocHelpers::stringData(
    "Runnable",
    "finished",
    "",
    "runningChanged",
    "keyChanged",
    "dir1Changed",
    "dir2Changed",
    "filesChanged",
    "delFilesChanged",
    "filtersChanged",
    "repeatChanged",
    "duration_secChanged",
    "rewriteChanged",
    "run",
    "running",
    "delFiles",
    "repeat",
    "key",
    "dir1",
    "dir2",
    "files",
    "filters",
    "duration_sec",
    "rewrite"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN8RunnableE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
      10,   98, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x06,   11 /* Public */,
       3,    0,   87,    2, 0x06,   12 /* Public */,
       4,    0,   88,    2, 0x06,   13 /* Public */,
       5,    0,   89,    2, 0x06,   14 /* Public */,
       6,    0,   90,    2, 0x06,   15 /* Public */,
       7,    0,   91,    2, 0x06,   16 /* Public */,
       8,    0,   92,    2, 0x06,   17 /* Public */,
       9,    0,   93,    2, 0x06,   18 /* Public */,
      10,    0,   94,    2, 0x06,   19 /* Public */,
      11,    0,   95,    2, 0x06,   20 /* Public */,
      12,    0,   96,    2, 0x06,   21 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      13,    0,   97,    2, 0x0a,   22 /* Public */,

 // signals: parameters
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
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags, notifyId, revision
      14, QMetaType::Bool, 0x00015903, uint(1), 0,
      15, QMetaType::Bool, 0x00015803, uint(6), 0,
      16, QMetaType::Bool, 0x00015803, uint(8), 0,
      17, QMetaType::QByteArray, 0x00015903, uint(2), 0,
      18, QMetaType::QString, 0x00015903, uint(3), 0,
      19, QMetaType::QString, 0x00015903, uint(4), 0,
      20, QMetaType::QStringList, 0x00015903, uint(5), 0,
      21, QMetaType::QStringList, 0x00015803, uint(7), 0,
      22, QMetaType::Int, 0x00015803, uint(9), 0,
      23, QMetaType::Bool, 0x00015803, uint(10), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject Runnable::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN8RunnableE.offsetsAndSizes,
    qt_meta_data_ZN8RunnableE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN8RunnableE_t,
        // property 'running'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'delFiles'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'repeat'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'key'
        QtPrivate::TypeAndForceComplete<QByteArray, std::true_type>,
        // property 'dir1'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'dir2'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'files'
        QtPrivate::TypeAndForceComplete<QStringList, std::true_type>,
        // property 'filters'
        QtPrivate::TypeAndForceComplete<QStringList, std::true_type>,
        // property 'duration_sec'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'rewrite'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Runnable, std::true_type>,
        // method 'finished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'runningChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'keyChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'dir1Changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'dir2Changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'filesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'delFilesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'filtersChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'repeatChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'duration_secChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'rewriteChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'run'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Runnable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Runnable *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->finished(); break;
        case 1: _t->runningChanged(); break;
        case 2: _t->keyChanged(); break;
        case 3: _t->dir1Changed(); break;
        case 4: _t->dir2Changed(); break;
        case 5: _t->filesChanged(); break;
        case 6: _t->delFilesChanged(); break;
        case 7: _t->filtersChanged(); break;
        case 8: _t->repeatChanged(); break;
        case 9: _t->duration_secChanged(); break;
        case 10: _t->rewriteChanged(); break;
        case 11: _t->run(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (Runnable::*)();
            if (_q_method_type _q_method = &Runnable::finished; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (Runnable::*)();
            if (_q_method_type _q_method = &Runnable::runningChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (Runnable::*)();
            if (_q_method_type _q_method = &Runnable::keyChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (Runnable::*)();
            if (_q_method_type _q_method = &Runnable::dir1Changed; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = void (Runnable::*)();
            if (_q_method_type _q_method = &Runnable::dir2Changed; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _q_method_type = void (Runnable::*)();
            if (_q_method_type _q_method = &Runnable::filesChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _q_method_type = void (Runnable::*)();
            if (_q_method_type _q_method = &Runnable::delFilesChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _q_method_type = void (Runnable::*)();
            if (_q_method_type _q_method = &Runnable::filtersChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _q_method_type = void (Runnable::*)();
            if (_q_method_type _q_method = &Runnable::repeatChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _q_method_type = void (Runnable::*)();
            if (_q_method_type _q_method = &Runnable::duration_secChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _q_method_type = void (Runnable::*)();
            if (_q_method_type _q_method = &Runnable::rewriteChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->running(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->delFiles(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->repeat(); break;
        case 3: *reinterpret_cast< QByteArray*>(_v) = _t->key(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->dir1(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->dir2(); break;
        case 6: *reinterpret_cast< QStringList*>(_v) = _t->files(); break;
        case 7: *reinterpret_cast< QStringList*>(_v) = _t->filters(); break;
        case 8: *reinterpret_cast< int*>(_v) = _t->duration_sec(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->rewrite(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRunning(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setdelFiles(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setrepeat(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setKey(*reinterpret_cast< QByteArray*>(_v)); break;
        case 4: _t->setDir1(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setDir2(*reinterpret_cast< QString*>(_v)); break;
        case 6: _t->setFiles(*reinterpret_cast< QStringList*>(_v)); break;
        case 7: _t->setfilters(*reinterpret_cast< QStringList*>(_v)); break;
        case 8: _t->setduration_sec(*reinterpret_cast< int*>(_v)); break;
        case 9: _t->setrewrite(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *Runnable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Runnable::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN8RunnableE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Runnable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void Runnable::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Runnable::runningChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Runnable::keyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Runnable::dir1Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Runnable::dir2Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Runnable::filesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Runnable::delFilesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void Runnable::filtersChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void Runnable::repeatChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void Runnable::duration_secChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void Runnable::rewriteChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}
QT_WARNING_POP
