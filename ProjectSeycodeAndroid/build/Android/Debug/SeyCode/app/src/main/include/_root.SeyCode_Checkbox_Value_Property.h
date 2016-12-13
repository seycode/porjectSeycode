// This file was generated based on /Users/niklas/Dropbox/programmierung/Fuse/SeyCode/.uno/SeyCode.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Bool.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct Checkbox;}
namespace g{struct SeyCode_Checkbox_Value_Property;}

namespace g{

// internal sealed class SeyCode_Checkbox_Value_Property :19
// {
::g::Uno::UX::Property1_type* SeyCode_Checkbox_Value_Property_typeof();
void SeyCode_Checkbox_Value_Property__ctor_2_fn(SeyCode_Checkbox_Value_Property* __this, ::g::Checkbox* obj, ::g::Uno::UX::Selector* name);
void SeyCode_Checkbox_Value_Property__Get_fn(SeyCode_Checkbox_Value_Property* __this, bool* __retval);
void SeyCode_Checkbox_Value_Property__New1_fn(::g::Checkbox* obj, ::g::Uno::UX::Selector* name, SeyCode_Checkbox_Value_Property** __retval);
void SeyCode_Checkbox_Value_Property__get_Object_fn(SeyCode_Checkbox_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void SeyCode_Checkbox_Value_Property__Set_fn(SeyCode_Checkbox_Value_Property* __this, bool* v, uObject* origin);
void SeyCode_Checkbox_Value_Property__get_SupportsOriginSetter_fn(SeyCode_Checkbox_Value_Property* __this, bool* __retval);

struct SeyCode_Checkbox_Value_Property : ::g::Uno::UX::Property1
{
    uStrong< ::g::Checkbox*> _obj;

    void ctor_2(::g::Checkbox* obj, ::g::Uno::UX::Selector name);
    static SeyCode_Checkbox_Value_Property* New1(::g::Checkbox* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
