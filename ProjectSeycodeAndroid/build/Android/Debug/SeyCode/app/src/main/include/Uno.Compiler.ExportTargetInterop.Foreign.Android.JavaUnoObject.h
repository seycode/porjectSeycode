// This file was generated based on /usr/local/share/uno/Packages/UnoCore/0.32.2/Source/Uno/Compiler/ExportTargetInterop/Foreign/Android/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <jni.h>
#include <Uno.h>
namespace g{namespace Uno{namespace Compiler{namespace ExportTargetInterop{namespace Foreign{namespace Android{struct JavaUnoObject;}}}}}}

namespace g{
namespace Uno{
namespace Compiler{
namespace ExportTargetInterop{
namespace Foreign{
namespace Android{

// public static extern class JavaUnoObject :44
// {
uClassType* JavaUnoObject_typeof();
void JavaUnoObject__Box_fn(uArray* unoArray, jobject* __retval);
void JavaUnoObject__Box1_fn(uArray* unoArray, jobject* __retval);
void JavaUnoObject__Box2_fn(uArray* unoArray, jobject* __retval);
void JavaUnoObject__Box3_fn(uArray* unoArray, jobject* __retval);
void JavaUnoObject__Box4_fn(uArray* unoArray, jobject* __retval);
void JavaUnoObject__Box5_fn(uObject* unoObject, jobject* __retval);
void JavaUnoObject__Box6_fn(uArray* unoArray, jobject* __retval);
void JavaUnoObject__Box7_fn(uArray* unoArray, jobject* __retval);
void JavaUnoObject__Box8_fn(uArray* unoArray, jobject* __retval);
void JavaUnoObject__Box9_fn(uArray* unoArray, jobject* __retval);
void JavaUnoObject__BoxDelegate_fn(uObject* delegateObj, const char** javaClassName, jobject* __retval);
void JavaUnoObject__EnsureInitialized_fn();
void JavaUnoObject__UnBox_fn(jobject* javaObject, uObject** __retval);

struct JavaUnoObject : uObject
{
    static jclass _unoBoolArrayClass_;
    static jclass& _unoBoolArrayClass() { return _unoBoolArrayClass_; }
    static jmethodID _unoBoolArrayConstructor_;
    static jmethodID& _unoBoolArrayConstructor() { return _unoBoolArrayConstructor_; }
    static jclass _unoByteArrayClass_;
    static jclass& _unoByteArrayClass() { return _unoByteArrayClass_; }
    static jmethodID _unoByteArrayConstructor_;
    static jmethodID& _unoByteArrayConstructor() { return _unoByteArrayConstructor_; }
    static jclass _unoDoubleArrayClass_;
    static jclass& _unoDoubleArrayClass() { return _unoDoubleArrayClass_; }
    static jmethodID _unoDoubleArrayConstructor_;
    static jmethodID& _unoDoubleArrayConstructor() { return _unoDoubleArrayConstructor_; }
    static jclass _unoFloatArrayClass_;
    static jclass& _unoFloatArrayClass() { return _unoFloatArrayClass_; }
    static jmethodID _unoFloatArrayConstructor_;
    static jmethodID& _unoFloatArrayConstructor() { return _unoFloatArrayConstructor_; }
    static jclass _unoIntArrayClass_;
    static jclass& _unoIntArrayClass() { return _unoIntArrayClass_; }
    static jmethodID _unoIntArrayConstructor_;
    static jmethodID& _unoIntArrayConstructor() { return _unoIntArrayConstructor_; }
    static jclass _unoLongArrayClass_;
    static jclass& _unoLongArrayClass() { return _unoLongArrayClass_; }
    static jmethodID _unoLongArrayConstructor_;
    static jmethodID& _unoLongArrayConstructor() { return _unoLongArrayConstructor_; }
    static jclass _unoObjectArrayClass_;
    static jclass& _unoObjectArrayClass() { return _unoObjectArrayClass_; }
    static jmethodID _unoObjectArrayConstructor_;
    static jmethodID& _unoObjectArrayConstructor() { return _unoObjectArrayConstructor_; }
    static jclass _unoObjectClass_;
    static jclass& _unoObjectClass() { return _unoObjectClass_; }
    static jmethodID _unoObjectConstructor_;
    static jmethodID& _unoObjectConstructor() { return _unoObjectConstructor_; }
    static jmethodID _unoObjectGetRetainedUnoPtr_;
    static jmethodID& _unoObjectGetRetainedUnoPtr() { return _unoObjectGetRetainedUnoPtr_; }
    static jclass _unoShortArrayClass_;
    static jclass& _unoShortArrayClass() { return _unoShortArrayClass_; }
    static jmethodID _unoShortArrayConstructor_;
    static jmethodID& _unoShortArrayConstructor() { return _unoShortArrayConstructor_; }
    static jclass _unoStringArrayClass_;
    static jclass& _unoStringArrayClass() { return _unoStringArrayClass_; }
    static jmethodID _unoStringArrayConstructor_;
    static jmethodID& _unoStringArrayConstructor() { return _unoStringArrayConstructor_; }

    static jobject Box(uArray* unoArray);
    static jobject Box1(uArray* unoArray);
    static jobject Box2(uArray* unoArray);
    static jobject Box3(uArray* unoArray);
    static jobject Box4(uArray* unoArray);
    static jobject Box5(uObject* unoObject);
    static jobject Box6(uArray* unoArray);
    static jobject Box7(uArray* unoArray);
    static jobject Box8(uArray* unoArray);
    static jobject Box9(uArray* unoArray);
    static jobject BoxDelegate(uObject* delegateObj, const char* javaClassName);
    static void EnsureInitialized();
    static uObject* UnBox(jobject javaObject);
};
// }

}}}}}} // ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android
