// This file was generated based on /usr/local/share/uno/Packages/Android/0.32.1/Android/android/view/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Uno.Object.h>

namespace g{
namespace Android{
namespace android{
namespace view{

// public abstract extern interface MenuItemDLROnMenuItemClickListener :26939
// {
uInterfaceType* MenuItemDLROnMenuItemClickListener_typeof();

struct MenuItemDLROnMenuItemClickListener
{
    void(*fp_onMenuItemClick)(uObject*, uObject*, bool*);
    static bool onMenuItemClick(const uInterface& __this, uObject* arg0) { bool __retval; return __this.VTable<MenuItemDLROnMenuItemClickListener>()->fp_onMenuItemClick(__this, arg0, &__retval), __retval; }
};
// }

}}}} // ::g::Android::android::view
