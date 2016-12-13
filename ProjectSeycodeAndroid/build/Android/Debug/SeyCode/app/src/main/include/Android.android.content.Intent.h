// This file was generated based on /usr/local/share/uno/Packages/Android/0.32.1/Android/android/content/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace content{struct Intent;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace android{
namespace content{

// public sealed extern class Intent :4242
// {
::g::Android::java::lang::Object_type* Intent_typeof();
void Intent___Init2_fn();
void Intent__toString_fn(Intent* __this, ::g::Android::java::lang::String** __retval);
void Intent__toString_IMPL_4755_fn(bool* arg0_, jobject* arg1_, uObject** __retval);

struct Intent : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID toString_4755_ID_;
    static jmethodID& toString_4755_ID() { return toString_4755_ID_; }

    static void _Init2();
    static uObject* toString_IMPL_4755(bool arg0_, jobject arg1_);
};
// }

}}}} // ::g::Android::android::content
