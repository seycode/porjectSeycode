// This file was generated based on /usr/local/share/uno/Packages/Android/0.32.1/Android/java/lang/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace java{namespace lang{struct Object;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace java{
namespace lang{

// public extern class Object :11
// {
struct Object_type : ::g::Android::Base::Wrappers::JWrapper_type
{
    void(*fp_hashCode1)(::g::Android::java::lang::Object*, int*);
    void(*fp_toString)(::g::Android::java::lang::Object*, ::g::Android::java::lang::String**);
};

Object_type* Object_typeof();
void Object___Init1_fn();
void Object__Equals_fn(Object* __this, uObject* obj, bool* __retval);
void Object__GetHashCode_fn(Object* __this, int* __retval);
void Object__hashCode1_fn(Object* __this, int* __retval);
void Object__hashCode_IMPL_31291_fn(bool* arg0_, jobject* arg1_, int* __retval);
void Object__toString_fn(Object* __this, ::g::Android::java::lang::String** __retval);
void Object__ToString_fn(Object* __this, uString** __retval);
void Object__toString_IMPL_31294_fn(bool* arg0_, jobject* arg1_, uObject** __retval);

struct Object : ::g::Android::Base::Wrappers::JWrapper
{
    static jclass _javaClass1_;
    static jclass& _javaClass1() { return _javaClass1_; }
    static jmethodID hashCode_31291_ID_;
    static jmethodID& hashCode_31291_ID() { return hashCode_31291_ID_; }
    static jmethodID toString_31294_ID_;
    static jmethodID& toString_31294_ID() { return toString_31294_ID_; }

    int hashCode1() { int __retval; return (((Object_type*)__type)->fp_hashCode1)(this, &__retval), __retval; }
    ::g::Android::java::lang::String* toString() { ::g::Android::java::lang::String* __retval; return (((Object_type*)__type)->fp_toString)(this, &__retval), __retval; }
    static void _Init1();
    static int hashCode1(Object* __this) { int __retval; return Object__hashCode1_fn(__this, &__retval), __retval; }
    static int hashCode_IMPL_31291(bool arg0_, jobject arg1_);
    static ::g::Android::java::lang::String* toString(Object* __this) { ::g::Android::java::lang::String* __retval; return Object__toString_fn(__this, &__retval), __retval; }
    static uObject* toString_IMPL_31294(bool arg0_, jobject arg1_);
};
// }

}}}} // ::g::Android::java::lang
