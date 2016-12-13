// This file was generated based on /usr/local/share/uno/Packages/Android/0.32.1/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <jni.h>
#include <Uno.h>
namespace g{namespace Android{namespace Runtime{struct UnoHelper;}}}

namespace g{
namespace Android{
namespace Runtime{

// public static extern class UnoHelper :14
// {
uClassType* UnoHelper_typeof();
void UnoHelper__Init_fn();
void UnoHelper__RegisterCallback_fn(JNINativeMethod* nativeFunc_, jobject* optionalClass_);

struct UnoHelper : uObject
{
    static jclass _helperCls_;
    static jclass& _helperCls() { return _helperCls_; }
    static bool _inited_;
    static bool& _inited() { return _inited_; }

    static void Init();
    static void RegisterCallback(JNINativeMethod nativeFunc_, jobject optionalClass_);
};
// }

}}} // ::g::Android::Runtime
