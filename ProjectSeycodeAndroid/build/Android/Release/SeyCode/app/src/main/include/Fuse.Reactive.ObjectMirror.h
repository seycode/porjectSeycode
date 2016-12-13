// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive/0.32.14/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.ValueMirror.h>
#include <Fuse.Scripting.IObject.h>
namespace g{namespace Fuse{namespace Reactive{struct ObjectMirror;}}}
namespace g{namespace Fuse{namespace Reactive{struct ThreadWorker;}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class ObjectMirror :1148
// {
struct ObjectMirror_type : ::g::Fuse::Reactive::ValueMirror_type
{
    ::g::Fuse::Scripting::IObject interface0;
};

ObjectMirror_type* ObjectMirror_typeof();
void ObjectMirror__ctor_1_fn(ObjectMirror* __this, ::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj);
void ObjectMirror__ContainsKey_fn(ObjectMirror* __this, uString* key, bool* __retval);
void ObjectMirror__get_Item_fn(ObjectMirror* __this, uString* key, uObject** __retval);
void ObjectMirror__New1_fn(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, ObjectMirror** __retval);
void ObjectMirror__Unsubscribe_fn(ObjectMirror* __this);

struct ObjectMirror : ::g::Fuse::Reactive::ValueMirror
{
    uStrong< ::g::Uno::Collections::Dictionary*> _props;

    void ctor_1(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj);
    bool ContainsKey(uString* key);
    uObject* Item(uString* key);
    static ObjectMirror* New1(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj);
};
// }

}}} // ::g::Fuse::Reactive
