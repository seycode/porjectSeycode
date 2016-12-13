// This file was generated based on /usr/local/share/uno/Packages/Android/0.32.1/Android/android/view/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace view{struct MotionEvent;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace android{
namespace view{

// public sealed extern class MotionEvent :18487
// {
::g::Android::java::lang::Object_type* MotionEvent_typeof();
void MotionEvent___Init3_fn();
void MotionEvent__toString_fn(MotionEvent* __this, ::g::Android::java::lang::String** __retval);
void MotionEvent__toString_IMPL_22526_fn(bool* arg0_, jobject* arg1_, uObject** __retval);

struct MotionEvent : ::g::Android::java::lang::Object
{
    static jclass _javaClass3_;
    static jclass& _javaClass3() { return _javaClass3_; }
    static jmethodID toString_22526_ID_;
    static jmethodID& toString_22526_ID() { return toString_22526_ID_; }

    static void _Init3();
    static uObject* toString_IMPL_22526(bool arg0_, jobject arg1_);
};
// }

}}}} // ::g::Android::android::view
