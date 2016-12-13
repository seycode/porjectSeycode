// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.android.content.ComponentName.h>
#include <Android.android.content.Intent.h>
#include <Android.android.graphics.drawable.Drawable.h>
#include <Android.android.view.ActionMode.h>
#include <Android.android.view.ActionProvider.h>
#include <Android.android.view.ContextMenuDLRContextMenuInfo.h>
#include <Android.android.view.KeyEvent.h>
#include <Android.android.view.Menu.h>
#include <Android.android.view.MenuItem.h>
#include <Android.android.view.MenuItemDLROnActionExpandListener.h>
#include <Android.android.view.MenuItemDLROnMenuItemClickListener.h>
#include <Android.android.view.MotionEvent.h>
#include <Android.android.view.SubMenu.h>
#include <Android.android.view.View.h>
#include <Android.android.view.WindowManagerDLRLayoutParams.h>
#include <Android.Base.AndroidBindingMacros.h>
#include <Android.Base.JNI.h>
#include <Android.Base.Primitives.jmethodID.h>
#include <Android.Base.Primitives.ujclass.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Fallbacks.Android_android_view_ActionMode.h>
#include <Android.Fallbacks.Android_android_view_ActionProvider.h>
#include <Android.Fallbacks.Android_android_view_ContextMenuDLRContextMenuInfo.h>
#include <Android.Fallbacks.Android_android_view_Menu.h>
#include <Android.Fallbacks.Android_android_view_MenuItem.h>
#include <Android.Fallbacks.Android_android_view_MenuItemDLROnActionExpandListener.h>
#include <Android.Fallbacks.Android_android_view_MenuItemDLROnMenuItemCli-c7e65b51.h>
#include <Android.Fallbacks.Android_android_view_SubMenu.h>
#include <Android.java.lang.CharSequence.h>
#include <Android.java.lang.String.h>
#include <Android.Runtime.ObjectArray-1.h>
#include <Uno.Bool.h>
#include <Uno.Char.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
static uType* TYPES[1];

namespace g{
namespace Android{
namespace android{
namespace view{

// /usr/local/share/uno/Packages/Android/0.32.1/Android/android/view/$.uno
// -----------------------------------------------------------------------

// public abstract extern class ActionMode :246
// {
static void ActionMode_build(uType* type)
{
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(4);
}

::g::Android::java::lang::Object_type* ActionMode_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ActionMode);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.view.ActionMode", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_build_ = ActionMode_build;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    return type;
}
// }

// /usr/local/share/uno/Packages/Android/0.32.1/Android/android/view/$.uno
// -----------------------------------------------------------------------

// public abstract extern class ActionProvider :364
// {
static void ActionProvider_build(uType* type)
{
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(4);
}

::g::Android::java::lang::Object_type* ActionProvider_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ActionProvider);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.view.ActionProvider", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_build_ = ActionProvider_build;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    return type;
}
// }

// /usr/local/share/uno/Packages/Android/0.32.1/Android/android/view/$.uno
// -----------------------------------------------------------------------

// public abstract extern interface ContextMenuDLRContextMenuInfo :26700
// {
uInterfaceType* ContextMenuDLRContextMenuInfo_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.android.view.ContextMenuDLRContextMenuInfo", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Android/0.32.1/Android/android/view/$.uno
// -----------------------------------------------------------------------

// public sealed extern class KeyEvent :12892
// {
static void KeyEvent_build(uType* type)
{
    ::TYPES[0] = ::g::Android::java::lang::String_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(4,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::view::KeyEvent::_javaClass3_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::KeyEvent::toString_22231_ID_, uFieldFlagsStatic);
}

::g::Android::java::lang::Object_type* KeyEvent_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(KeyEvent);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.view.KeyEvent", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_build_ = KeyEvent_build;
    type->fp_toString = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::String**))KeyEvent__toString_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    return type;
}

// public static extern new void _Init() :12896
void KeyEvent___Init3_fn()
{
    KeyEvent::_Init3();
}

// public override sealed Android.java.lang.String toString() :17770
void KeyEvent__toString_fn(KeyEvent* __this, ::g::Android::java::lang::String** __retval)
{
    return *__retval = uCast< ::g::Android::java::lang::String*>(KeyEvent::toString_IMPL_22231(__this->_subclassed, __this->_javaObject), ::TYPES[0/*Android.java.lang.String*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_22231(bool arg0, Android.Base.Primitives.ujobject arg1) :17960
void KeyEvent__toString_IMPL_22231_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = KeyEvent::toString_IMPL_22231(*arg0_, *arg1_);
}

jclass KeyEvent::_javaClass3_;
jmethodID KeyEvent::toString_22231_ID_;

// public static extern new void _Init() [static] :12896
void KeyEvent::_Init3()
{
    if (KeyEvent::_javaClass3()) { return; }
    INIT_JNI;
    KeyEvent::_javaClass3() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/view/KeyEvent"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!KeyEvent::_javaClass3()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.view.KeyEvent'", 45);; }
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_22231(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :17960
uObject* KeyEvent::toString_IMPL_22231(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(KeyEvent::_javaClass3(),KeyEvent::_Init3());
    
    uObject* result;
    CACHE_METHOD(KeyEvent::toString_22231_ID(),KeyEvent::_javaClass3(),"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.view.KeyEvent.toString could not be cached",73);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, KeyEvent::_javaClass3(), KeyEvent::toString_22231_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, KeyEvent::toString_22231_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// /usr/local/share/uno/Packages/Android/0.32.1/Android/android/view/$.uno
// -----------------------------------------------------------------------

// public abstract extern interface Menu :26715
// {
uInterfaceType* Menu_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.android.view.Menu", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Android/0.32.1/Android/android/view/$.uno
// -----------------------------------------------------------------------

// public abstract extern interface MenuItem :26956
// {
uInterfaceType* MenuItem_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.android.view.MenuItem", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Android/0.32.1/Android/android/view/$.uno
// -----------------------------------------------------------------------

// public abstract extern interface MenuItemDLROnActionExpandListener :26920
// {
uInterfaceType* MenuItemDLROnActionExpandListener_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.android.view.MenuItemDLROnActionExpandListener", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Android/0.32.1/Android/android/view/$.uno
// -----------------------------------------------------------------------

// public abstract extern interface MenuItemDLROnMenuItemClickListener :26939
// {
uInterfaceType* MenuItemDLROnMenuItemClickListener_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.android.view.MenuItemDLROnMenuItemClickListener", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Android/0.32.1/Android/android/view/$.uno
// -----------------------------------------------------------------------

// public sealed extern class MotionEvent :18487
// {
static void MotionEvent_build(uType* type)
{
    ::TYPES[0] = ::g::Android::java::lang::String_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(4,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::view::MotionEvent::_javaClass3_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::MotionEvent::toString_22526_ID_, uFieldFlagsStatic);
}

::g::Android::java::lang::Object_type* MotionEvent_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(MotionEvent);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.view.MotionEvent", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_build_ = MotionEvent_build;
    type->fp_toString = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::String**))MotionEvent__toString_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    return type;
}

// public static extern new void _Init() :18491
void MotionEvent___Init3_fn()
{
    MotionEvent::_Init3();
}

// public override sealed Android.java.lang.String toString() :20358
void MotionEvent__toString_fn(MotionEvent* __this, ::g::Android::java::lang::String** __retval)
{
    return *__retval = uCast< ::g::Android::java::lang::String*>(MotionEvent::toString_IMPL_22526(__this->_subclassed, __this->_javaObject), ::TYPES[0/*Android.java.lang.String*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_22526(bool arg0, Android.Base.Primitives.ujobject arg1) :20632
void MotionEvent__toString_IMPL_22526_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = MotionEvent::toString_IMPL_22526(*arg0_, *arg1_);
}

jclass MotionEvent::_javaClass3_;
jmethodID MotionEvent::toString_22526_ID_;

// public static extern new void _Init() [static] :18491
void MotionEvent::_Init3()
{
    if (MotionEvent::_javaClass3()) { return; }
    INIT_JNI;
    MotionEvent::_javaClass3() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/view/MotionEvent"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!MotionEvent::_javaClass3()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.view.MotionEvent'", 48);; }
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_22526(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :20632
uObject* MotionEvent::toString_IMPL_22526(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(MotionEvent::_javaClass3(),MotionEvent::_Init3());
    
    uObject* result;
    CACHE_METHOD(MotionEvent::toString_22526_ID(),MotionEvent::_javaClass3(),"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.view.MotionEvent.toString could not be cached",76);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, MotionEvent::_javaClass3(), MotionEvent::toString_22526_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, MotionEvent::toString_22526_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// /usr/local/share/uno/Packages/Android/0.32.1/Android/android/view/$.uno
// -----------------------------------------------------------------------

// public abstract extern interface SubMenu :27093
// {
uInterfaceType* SubMenu_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Android.android.view.SubMenu", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Android/0.32.1/Android/android/view/$.uno
// -----------------------------------------------------------------------

// public sealed extern class View :962
// {
static void View_build(uType* type)
{
    ::TYPES[0] = ::g::Android::java::lang::String_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(4,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::view::View::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::View::toString_22818_ID_, uFieldFlagsStatic);
}

::g::Android::java::lang::Object_type* View_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(View);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.view.View", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_build_ = View_build;
    type->fp_toString = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::String**))View__toString_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    return type;
}

// public static extern new void _Init() :966
void View___Init2_fn()
{
    View::_Init2();
}

// public override sealed Android.java.lang.String toString() :2474
void View__toString_fn(View* __this, ::g::Android::java::lang::String** __retval)
{
    return *__retval = uCast< ::g::Android::java::lang::String*>(View::toString_IMPL_22818(__this->_subclassed, __this->_javaObject), ::TYPES[0/*Android.java.lang.String*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_22818(bool arg0, Android.Base.Primitives.ujobject arg1) :5124
void View__toString_IMPL_22818_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = View::toString_IMPL_22818(*arg0_, *arg1_);
}

jclass View::_javaClass2_;
jmethodID View::toString_22818_ID_;

// public static extern new void _Init() [static] :966
void View::_Init2()
{
    if (View::_javaClass2()) { return; }
    INIT_JNI;
    View::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/view/View"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!View::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.view.View'", 41);; }
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_22818(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :5124
uObject* View::toString_IMPL_22818(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(View::_javaClass2(),View::_Init2());
    
    uObject* result;
    CACHE_METHOD(View::toString_22818_ID(),View::_javaClass2(),"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.view.View.toString could not be cached",69);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, View::_javaClass2(), View::toString_22818_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, View::toString_22818_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// /usr/local/share/uno/Packages/Android/0.32.1/Android/android/view/$.uno
// -----------------------------------------------------------------------

// public sealed extern class WindowManagerDLRLayoutParams :23968
// {
static void WindowManagerDLRLayoutParams_build(uType* type)
{
    ::TYPES[0] = ::g::Android::java::lang::String_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(4,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::view::WindowManagerDLRLayoutParams::_javaClass3_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::view::WindowManagerDLRLayoutParams::toString_23907_ID_, uFieldFlagsStatic);
}

::g::Android::java::lang::Object_type* WindowManagerDLRLayoutParams_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(WindowManagerDLRLayoutParams);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.view.WindowManagerDLRLayoutParams", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_build_ = WindowManagerDLRLayoutParams_build;
    type->fp_toString = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::String**))WindowManagerDLRLayoutParams__toString_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    return type;
}

// public static extern new void _Init() :23972
void WindowManagerDLRLayoutParams___Init3_fn()
{
    WindowManagerDLRLayoutParams::_Init3();
}

// public override sealed Android.java.lang.String toString() :26290
void WindowManagerDLRLayoutParams__toString_fn(WindowManagerDLRLayoutParams* __this, ::g::Android::java::lang::String** __retval)
{
    return *__retval = uCast< ::g::Android::java::lang::String*>(WindowManagerDLRLayoutParams::toString_IMPL_23907(__this->_subclassed, __this->_javaObject), ::TYPES[0/*Android.java.lang.String*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_23907(bool arg0, Android.Base.Primitives.ujobject arg1) :26325
void WindowManagerDLRLayoutParams__toString_IMPL_23907_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = WindowManagerDLRLayoutParams::toString_IMPL_23907(*arg0_, *arg1_);
}

jclass WindowManagerDLRLayoutParams::_javaClass3_;
jmethodID WindowManagerDLRLayoutParams::toString_23907_ID_;

// public static extern new void _Init() [static] :23972
void WindowManagerDLRLayoutParams::_Init3()
{
    if (WindowManagerDLRLayoutParams::_javaClass3()) { return; }
    INIT_JNI;
    WindowManagerDLRLayoutParams::_javaClass3() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/view/WindowManager$LayoutParams"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!WindowManagerDLRLayoutParams::_javaClass3()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.view.WindowManager$LayoutParams'", 63);; }
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_23907(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :26325
uObject* WindowManagerDLRLayoutParams::toString_IMPL_23907(bool arg0_, jobject arg1_)
{
    INIT_JNI;
    CLASS_INIT(WindowManagerDLRLayoutParams::_javaClass3(),WindowManagerDLRLayoutParams::_Init3());
    
    uObject* result;
    CACHE_METHOD(WindowManagerDLRLayoutParams::toString_23907_ID(),WindowManagerDLRLayoutParams::_javaClass3(),"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.view.WindowManager$LayoutParams.toString could not be cached",91);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, WindowManagerDLRLayoutParams::_javaClass3(), WindowManagerDLRLayoutParams::toString_23907_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, WindowManagerDLRLayoutParams::toString_23907_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

}}}} // ::g::Android::android::view
