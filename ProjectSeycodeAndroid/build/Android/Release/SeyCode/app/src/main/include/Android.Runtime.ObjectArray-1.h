// This file was generated based on /usr/local/share/uno/Packages/Android/0.32.1/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Android{namespace Runtime{struct ObjectArray;}}}

namespace g{
namespace Android{
namespace Runtime{

// public sealed extern class ObjectArray<T> :1176
// {
struct ObjectArray_type : ::g::Android::java::lang::Object_type
{
    ::g::Uno::Collections::IEnumerable interface2;
};

ObjectArray_type* ObjectArray_typeof();
void ObjectArray__GetEnumerator_fn(ObjectArray* __this, uObject** __retval);
void ObjectArray__get_Item_fn(ObjectArray* __this, int* i, uObject** __retval);
void ObjectArray__set_Item_fn(ObjectArray* __this, int* i, uObject* value);

struct ObjectArray : ::g::Android::java::lang::Object
{
    uObject* GetEnumerator();
    uObject* Item(int i);
    void Item(int i, uObject* value);
};
// }

}}} // ::g::Android::Runtime
