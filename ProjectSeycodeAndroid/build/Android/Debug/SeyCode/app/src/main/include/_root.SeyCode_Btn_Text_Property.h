// This file was generated based on /Users/niklas/Dropbox/programmierung/Fuse/SeyCode/.uno/SeyCode.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct Btn;}
namespace g{struct SeyCode_Btn_Text_Property;}

namespace g{

// internal sealed class SeyCode_Btn_Text_Property :55
// {
::g::Uno::UX::Property1_type* SeyCode_Btn_Text_Property_typeof();
void SeyCode_Btn_Text_Property__ctor_2_fn(SeyCode_Btn_Text_Property* __this, ::g::Btn* obj, ::g::Uno::UX::Selector* name);
void SeyCode_Btn_Text_Property__Get_fn(SeyCode_Btn_Text_Property* __this, uString** __retval);
void SeyCode_Btn_Text_Property__New1_fn(::g::Btn* obj, ::g::Uno::UX::Selector* name, SeyCode_Btn_Text_Property** __retval);
void SeyCode_Btn_Text_Property__get_Object_fn(SeyCode_Btn_Text_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void SeyCode_Btn_Text_Property__Set_fn(SeyCode_Btn_Text_Property* __this, uString* v, uObject* origin);
void SeyCode_Btn_Text_Property__get_SupportsOriginSetter_fn(SeyCode_Btn_Text_Property* __this, bool* __retval);

struct SeyCode_Btn_Text_Property : ::g::Uno::UX::Property1
{
    uStrong< ::g::Btn*> _obj;

    void ctor_2(::g::Btn* obj, ::g::Uno::UX::Selector name);
    static SeyCode_Btn_Text_Property* New1(::g::Btn* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
