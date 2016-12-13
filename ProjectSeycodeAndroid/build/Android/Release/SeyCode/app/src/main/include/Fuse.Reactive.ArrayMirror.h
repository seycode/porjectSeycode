// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive/0.32.14/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.ListMirror.h>
#include <Fuse.Scripting.IArray.h>
namespace g{namespace Fuse{namespace Reactive{struct ArrayMirror;}}}
namespace g{namespace Fuse{namespace Reactive{struct ThreadWorker;}}}
namespace g{namespace Fuse{namespace Scripting{struct Array;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class ArrayMirror :8
// {
::g::Fuse::Reactive::ListMirror_type* ArrayMirror_typeof();
void ArrayMirror__ctor_2_fn(ArrayMirror* __this, ::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Array* arr);
void ArrayMirror__get_Item_fn(ArrayMirror* __this, int* index, uObject** __retval);
void ArrayMirror__get_ItemsReadonly_fn(ArrayMirror* __this, uArray** __retval);
void ArrayMirror__get_Length_fn(ArrayMirror* __this, int* __retval);
void ArrayMirror__New1_fn(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Array* arr, ArrayMirror** __retval);
void ArrayMirror__Unsubscribe_fn(ArrayMirror* __this);

struct ArrayMirror : ::g::Fuse::Reactive::ListMirror
{
    uStrong<uArray*> _items;

    void ctor_2(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Array* arr);
    uArray* ItemsReadonly();
    static ArrayMirror* New1(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Array* arr);
};
// }

}}} // ::g::Fuse::Reactive
