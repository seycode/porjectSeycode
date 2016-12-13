// This file was generated based on /Users/niklas/Dropbox/programmierung/Fuse/SeyCode/.uno/SeyCode.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct SeyCode_Tab_Icon_Property;}
namespace g{struct Tab;}

namespace g{

// internal sealed class SeyCode_Tab_Icon_Property :37
// {
::g::Uno::UX::Property1_type* SeyCode_Tab_Icon_Property_typeof();
void SeyCode_Tab_Icon_Property__ctor_2_fn(SeyCode_Tab_Icon_Property* __this, ::g::Tab* obj, ::g::Uno::UX::Selector* name);
void SeyCode_Tab_Icon_Property__Get_fn(SeyCode_Tab_Icon_Property* __this, uString** __retval);
void SeyCode_Tab_Icon_Property__New1_fn(::g::Tab* obj, ::g::Uno::UX::Selector* name, SeyCode_Tab_Icon_Property** __retval);
void SeyCode_Tab_Icon_Property__get_Object_fn(SeyCode_Tab_Icon_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void SeyCode_Tab_Icon_Property__Set_fn(SeyCode_Tab_Icon_Property* __this, uString* v, uObject* origin);
void SeyCode_Tab_Icon_Property__get_SupportsOriginSetter_fn(SeyCode_Tab_Icon_Property* __this, bool* __retval);

struct SeyCode_Tab_Icon_Property : ::g::Uno::UX::Property1
{
    uStrong< ::g::Tab*> _obj;

    void ctor_2(::g::Tab* obj, ::g::Uno::UX::Selector name);
    static SeyCode_Tab_Icon_Property* New1(::g::Tab* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
