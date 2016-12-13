// This file was generated based on /usr/local/share/uno/Packages/Android/0.32.1/Android/android/view/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace view{struct View;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace android{
namespace view{

// public sealed extern class View :962
// {
::g::Android::java::lang::Object_type* View_typeof();
void View___Init2_fn();
void View__toString_fn(View* __this, ::g::Android::java::lang::String** __retval);
void View__toString_IMPL_22818_fn(bool* arg0_, jobject* arg1_, uObject** __retval);

struct View : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID toString_22818_ID_;
    static jmethodID& toString_22818_ID() { return toString_22818_ID_; }

    static void _Init2();
    static uObject* toString_IMPL_22818(bool arg0_, jobject arg1_);
};
// }

}}}} // ::g::Android::android::view
