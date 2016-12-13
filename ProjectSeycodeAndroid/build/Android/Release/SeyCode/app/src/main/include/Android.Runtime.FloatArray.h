// This file was generated based on /usr/local/share/uno/Packages/Android/0.32.1/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Float.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace Runtime{struct FloatArray;}}}

namespace g{
namespace Android{
namespace Runtime{

// public sealed extern class FloatArray :1084
// {
struct FloatArray_type : ::g::Android::java::lang::Object_type
{
    ::g::Uno::Collections::IEnumerable interface2;
};

FloatArray_type* FloatArray_typeof();
void FloatArray__GetEnumerator_fn(FloatArray* __this, uObject** __retval);

struct FloatArray : ::g::Android::java::lang::Object
{
    uObject* GetEnumerator();
};
// }

}}} // ::g::Android::Runtime
