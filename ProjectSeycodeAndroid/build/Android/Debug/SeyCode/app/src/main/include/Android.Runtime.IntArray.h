// This file was generated based on /usr/local/share/uno/Packages/Android/0.32.1/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
namespace g{namespace Android{namespace Runtime{struct IntArray;}}}

namespace g{
namespace Android{
namespace Runtime{

// public sealed extern class IntArray :1005
// {
struct IntArray_type : ::g::Android::java::lang::Object_type
{
    ::g::Uno::Collections::IEnumerable interface2;
};

IntArray_type* IntArray_typeof();
void IntArray__GetEnumerator_fn(IntArray* __this, uObject** __retval);

struct IntArray : ::g::Android::java::lang::Object
{
    uObject* GetEnumerator();
};
// }

}}} // ::g::Android::Runtime
