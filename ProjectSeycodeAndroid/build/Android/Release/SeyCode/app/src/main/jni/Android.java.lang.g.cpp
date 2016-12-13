// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.AndroidBindingMacros.h>
#include <Android.Base.JNI.h>
#include <Android.Base.Primitives.jmethodID.h>
#include <Android.Base.Primitives.JNIEnvPtr.h>
#include <Android.Base.Primitives.ujclass.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Types.String.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Fallbacks.Android_java_lang_CharSequence.h>
#include <Android.java.lang.CharSequence.h>
#include <Android.java.lang.Object.h>
#include <Android.java.lang.String.h>
#include <Uno.Bool.h>
#include <Uno.Char.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
static uType* TYPES[4];

namespace g{
namespace Android{
namespace java{
namespace lang{

// /usr/local/share/uno/Packages/Android/0.32.1/Android/java/lang/$.uno
// --------------------------------------------------------------------

// public abstract extern interface CharSequence :18837
// {
uInterfaceType* CharSequence_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.java.lang.CharSequence", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Android/0.32.1/Android/java/lang/$.uno
// --------------------------------------------------------------------

// public extern class Object :11
// {
static void Object_build(uType* type)
{
    ::TYPES[0] = ::g::Android::Base::Wrappers::IJWrapper_typeof();
    ::TYPES[1] = ::g::Android::java::lang::String_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Object_type, interface1));
    type->SetFields(4,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::java::lang::Object::_javaClass1_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::lang::Object::hashCode_31291_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::lang::Object::toString_31294_ID_, uFieldFlagsStatic);
}

Object_type* Object_typeof()
{
    static uSStrong<Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Object);
    options.TypeSize = sizeof(Object_type);
    type = (Object_type*)uClassType::New("Android.java.lang.Object", options);
    type->SetBase(::g::Android::Base::Wrappers::JWrapper_typeof());
    type->fp_build_ = Object_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))Object__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))Object__GetHashCode_fn;
    type->fp_hashCode1 = Object__hashCode1_fn;
    type->fp_toString = Object__toString_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Object__ToString_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    return type;
}

// public static extern new void _Init() :15
void Object___Init1_fn()
{
    Object::_Init1();
}

// public override sealed bool Equals(object obj) :19
void Object__Equals_fn(Object* __this, uObject* obj, bool* __retval)
{
    if (obj != NULL)
    {
        uObject* tmp = uAs<uObject*>(obj, ::TYPES[0/*Android.Base.Wrappers.IJWrapper*/]);

        if (tmp != NULL)
            return *__retval = ::g::Android::Base::JNI::IsSameObject(__this->_javaObject, ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(uPtr(tmp), ::TYPES[0/*Android.Base.Wrappers.IJWrapper*/]))), void();
    }

    return *__retval = false, void();
}

// public override sealed int GetHashCode() :21
void Object__GetHashCode_fn(Object* __this, int* __retval)
{
    return *__retval = __this->hashCode1(), void();
}

// public virtual int hashCode() :67
void Object__hashCode1_fn(Object* __this, int* __retval)
{
    return *__retval = Object::hashCode_IMPL_31291(__this->_subclassed, __this->_javaObject), void();
}

// public static extern int hashCode_IMPL_31291(bool arg0, Android.Base.Primitives.ujobject arg1) :123
void Object__hashCode_IMPL_31291_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = Object::hashCode_IMPL_31291(*arg0_, *arg1_);
}

// public virtual Android.java.lang.String toString() :85
void Object__toString_fn(Object* __this, ::g::Android::java::lang::String** __retval)
{
    return *__retval = uCast< ::g::Android::java::lang::String*>(Object::toString_IMPL_31294(__this->_subclassed, __this->_javaObject), ::TYPES[1/*Android.java.lang.String*/]), void();
}

// public override sealed string ToString() :17
void Object__ToString_fn(Object* __this, uString** __retval)
{
    return *__retval = ::g::Android::java::lang::String::op_Implicit(__this->toString()), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_31294(bool arg0, Android.Base.Primitives.ujobject arg1) :132
void Object__toString_IMPL_31294_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Object::toString_IMPL_31294(*arg0_, *arg1_);
}

jclass Object::_javaClass1_;
jmethodID Object::hashCode_31291_ID_;
jmethodID Object::toString_31294_ID_;

// public static extern new void _Init() [static] :15
void Object::_Init1()
{
    if (Object::_javaClass1()) { return; }
    INIT_JNI;
    Object::_javaClass1() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("java/lang/Object"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!Object::_javaClass1()) { THROW_UNO_EXCEPTION("Unable to cache class 'java.lang.Object'", 40);; }
}

// public static extern int hashCode_IMPL_31291(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :123
int Object::hashCode_IMPL_31291(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(Object::_javaClass1(),Object::_Init1());
    
    int result;
    CACHE_METHOD(Object::hashCode_31291_ID(),Object::_javaClass1(),"hashCode","()I",GetMethodID,"Id for fallback method java.lang.Object.hashCode could not be cached",68);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, Object::_javaClass1(), Object::hashCode_31291_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, Object::hashCode_31291_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_31294(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :132
uObject* Object::toString_IMPL_31294(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(Object::_javaClass1(),Object::_Init1());
    
    uObject* result;
    CACHE_METHOD(Object::toString_31294_ID(),Object::_javaClass1(),"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method java.lang.Object.toString could not be cached",68);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, Object::_javaClass1(), Object::toString_31294_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Object::toString_31294_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// /usr/local/share/uno/Packages/Android/0.32.1/Android/java/lang/$.uno
// --------------------------------------------------------------------

// public sealed extern class String :15813
// {
static void String_build(uType* type)
{
    ::TYPES[2] = uObject_typeof();
    ::TYPES[3] = ::g::Android::java::lang::CharSequence_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(String_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(String_type, interface1),
        ::g::Android::java::lang::CharSequence_typeof(), offsetof(String_type, interface2));
    type->SetFields(4,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::java::lang::String::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::lang::String::charAt_31531_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::lang::String::hashCode_31545_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::lang::String::length_31556_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::lang::String::subSequence_31588_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::java::lang::String::toString_31568_ID_, uFieldFlagsStatic);
}

String_type* String_typeof()
{
    static uSStrong<String_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(String);
    options.TypeSize = sizeof(String_type);
    type = (String_type*)uClassType::New("Android.java.lang.String", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_build_ = String_build;
    type->fp_hashCode1 = (void(*)(::g::Android::java::lang::Object*, int*))String__hashCode1_fn;
    type->fp_toString = (void(*)(::g::Android::java::lang::Object*, String**))String__toString_fn;
    type->interface2.fp_length = (void(*)(uObject*, int*))String__length_fn;
    type->interface2.fp_charAt = (void(*)(uObject*, int*, uChar*))String__charAt_fn;
    type->interface2.fp_subSequence = (void(*)(uObject*, int*, int*, uObject**))String__subSequence_fn;
    type->interface2.fp_toString = (void(*)(uObject*, String**))String__toString_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    return type;
}

// public static extern new void _Init() :15817
void String___Init2_fn()
{
    String::_Init2();
}

// public char charAt(int arg0) :16087
void String__charAt_fn(String* __this, int* arg0, uChar* __retval)
{
    *__retval = __this->charAt(*arg0);
}

// public static extern char charAt_IMPL_31531(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) :16499
void String__charAt_IMPL_31531_fn(bool* arg0_, jobject* arg1_, int* arg2_, uChar* __retval)
{
    *__retval = String::charAt_IMPL_31531(*arg0_, *arg1_, *arg2_);
}

// public override sealed int hashCode() :16171
void String__hashCode1_fn(String* __this, int* __retval)
{
    return *__retval = String::hashCode_IMPL_31545(__this->_subclassed, __this->_javaObject), void();
}

// public static extern int hashCode_IMPL_31545(bool arg0, Android.Base.Primitives.ujobject arg1) :16541
void String__hashCode_IMPL_31545_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = String::hashCode_IMPL_31545(*arg0_, *arg1_);
}

// public int length() :16237
void String__length_fn(String* __this, int* __retval)
{
    *__retval = __this->length();
}

// public static extern int length_IMPL_31556(bool arg0, Android.Base.Primitives.ujobject arg1) :16574
void String__length_IMPL_31556_fn(bool* arg0_, jobject* arg1_, int* __retval)
{
    *__retval = String::length_IMPL_31556(*arg0_, *arg1_);
}

// public static implicit operator string(Android.java.lang.String str) :15839
void String__op_Implicit_fn(String* str, uString** __retval)
{
    *__retval = String::op_Implicit(str);
}

// public Android.java.lang.CharSequence subSequence(int arg0, int arg1) :16429
void String__subSequence_fn(String* __this, int* arg0, int* arg1, uObject** __retval)
{
    *__retval = __this->subSequence(*arg0, *arg1);
}

// public static extern Android.Base.Wrappers.IJWrapper subSequence_IMPL_31588(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3) :16670
void String__subSequence_IMPL_31588_fn(bool* arg0_, jobject* arg1_, int* arg2_, int* arg3_, uObject** __retval)
{
    *__retval = String::subSequence_IMPL_31588(*arg0_, *arg1_, *arg2_, *arg3_);
}

// public override sealed Android.java.lang.String toString() :16309
void String__toString_fn(String* __this, String** __retval)
{
    return *__retval = uCast<String*>(String::toString_IMPL_31568(__this->_subclassed, __this->_javaObject), String_typeof()), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_31568(bool arg0, Android.Base.Primitives.ujobject arg1) :16610
void String__toString_IMPL_31568_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = String::toString_IMPL_31568(*arg0_, *arg1_);
}

jclass String::_javaClass2_;
jmethodID String::charAt_31531_ID_;
jmethodID String::hashCode_31545_ID_;
jmethodID String::length_31556_ID_;
jmethodID String::subSequence_31588_ID_;
jmethodID String::toString_31568_ID_;

// public char charAt(int arg0) [instance] :16087
uChar String::charAt(int arg0)
{
    int arg0_ = arg0;
    return String::charAt_IMPL_31531(_subclassed, _javaObject, arg0_);
}

// public int length() [instance] :16237
int String::length()
{
    return String::length_IMPL_31556(_subclassed, _javaObject);
}

// public Android.java.lang.CharSequence subSequence(int arg0, int arg1) [instance] :16429
uObject* String::subSequence(int arg0, int arg1)
{
    int arg0_ = arg0;
    int arg1_ = arg1;
    return String::subSequence_IMPL_31588(_subclassed, _javaObject, arg0_, arg1_);
}

// public static extern new void _Init() [static] :15817
void String::_Init2()
{
    if (String::_javaClass2()) { return; }
    INIT_JNI;
    String::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("java/lang/String"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!String::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'java.lang.String'", 40);; }
}

// public static extern char charAt_IMPL_31531(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2) [static] :16499
uChar String::charAt_IMPL_31531(bool arg0_, jobject arg1_, int arg2_)
{
    INIT_JNI;
    CLASS_INIT(String::_javaClass2(),String::_Init2());
    
    uChar result;
    CACHE_METHOD(String::charAt_31531_ID(),String::_javaClass2(),"charAt","(I)C",GetMethodID,"Id for fallback method java.lang.String.charAt could not be cached",66);
    if (arg0_) {
        result = ((uChar)U_JNIVAR->CallNonvirtualCharMethod(arg1_, String::_javaClass2(), String::charAt_31531_ID(), ((jint)arg2_)));
    }
    else
    {
        result = ((uChar)U_JNIVAR->CallCharMethod(arg1_, String::charAt_31531_ID(), ((jint)arg2_)));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int hashCode_IMPL_31545(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :16541
int String::hashCode_IMPL_31545(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(String::_javaClass2(),String::_Init2());
    
    int result;
    CACHE_METHOD(String::hashCode_31545_ID(),String::_javaClass2(),"hashCode","()I",GetMethodID,"Id for fallback method java.lang.String.hashCode could not be cached",68);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, String::_javaClass2(), String::hashCode_31545_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, String::hashCode_31545_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern int length_IMPL_31556(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :16574
int String::length_IMPL_31556(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(String::_javaClass2(),String::_Init2());
    
    int result;
    CACHE_METHOD(String::length_31556_ID(),String::_javaClass2(),"length","()I",GetMethodID,"Id for fallback method java.lang.String.length could not be cached",66);
    if (arg0_) {
        result = ((int)U_JNIVAR->CallNonvirtualIntMethod(arg1_, String::_javaClass2(), String::length_31556_ID()));
    }
    else
    {
        result = ((int)U_JNIVAR->CallIntMethod(arg1_, String::length_31556_ID()));
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static implicit operator string(Android.java.lang.String str) [static] :15839
uString* String::op_Implicit(String* str)
{
    if (::g::Uno::Object::ReferenceEquals(str, NULL))
        return NULL;
    else
        return ::g::Android::Base::Types::String::JavaToUno(::g::Android::Base::JNI::GetEnvPtr(), uPtr(str)->_GetJavaObject());
}

// public static extern Android.Base.Wrappers.IJWrapper subSequence_IMPL_31588(bool arg0, Android.Base.Primitives.ujobject arg1, int arg2, int arg3) [static] :16670
uObject* String::subSequence_IMPL_31588(bool arg0_, jobject arg1_, int arg2_, int arg3_)
{
    INIT_JNI;
    CLASS_INIT(String::_javaClass2(),String::_Init2());
    
    uObject* result;
    CACHE_METHOD(String::subSequence_31588_ID(),String::_javaClass2(),"subSequence","(II)Ljava/lang/CharSequence;",GetMethodID,"Id for fallback method java.lang.String.subSequence could not be cached",71);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, String::_javaClass2(), String::subSequence_31588_ID(), ((jint)arg2_), ((jint)arg3_)),result,::g::Android::Fallbacks::Android_java_lang_CharSequence_typeof(),uObject*,true,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, String::subSequence_31588_ID(), ((jint)arg2_), ((jint)arg3_)),result,::g::Android::Fallbacks::Android_java_lang_CharSequence_typeof(),uObject*,true,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_31568(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :16610
uObject* String::toString_IMPL_31568(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(String::_javaClass2(),String::_Init2());
    
    uObject* result;
    CACHE_METHOD(String::toString_31568_ID(),String::_javaClass2(),"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method java.lang.String.toString could not be cached",68);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, String::_javaClass2(), String::toString_31568_ID()),result,String_typeof(),String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, String::toString_31568_ID()),result,String_typeof(),String*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

}}}} // ::g::Android::java::lang
