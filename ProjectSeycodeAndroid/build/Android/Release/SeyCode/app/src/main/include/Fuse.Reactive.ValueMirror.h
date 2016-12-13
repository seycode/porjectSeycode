// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive/0.32.14/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct ValueMirror;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public abstract class ValueMirror :2678
// {
struct ValueMirror_type : uType
{
    void(*fp_Unsubscribe)(::g::Fuse::Reactive::ValueMirror*);
};

ValueMirror_type* ValueMirror_typeof();
void ValueMirror__ctor__fn(ValueMirror* __this, uObject* raw);
void ValueMirror__get_Raw_fn(ValueMirror* __this, uObject** __retval);
void ValueMirror__Unbox_fn(uObject* obj, uObject** __retval);
void ValueMirror__Unsubscribe1_fn(uObject* obj);

struct ValueMirror : uObject
{
    uStrong<uObject*> _raw;

    void ctor_(uObject* raw);
    uObject* Raw();
    void Unsubscribe() { (((ValueMirror_type*)__type)->fp_Unsubscribe)(this); }
    static uObject* Unbox(uObject* obj);
    static void Unsubscribe1(uObject* obj);
};
// }

}}} // ::g::Fuse::Reactive
