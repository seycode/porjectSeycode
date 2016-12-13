// This file was generated based on /Users/niklas/Dropbox/programmierung/Fuse/SeyCode/.uno/SeyCode.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct SeyCode_TInput_Value_Property;}
namespace g{struct TInput;}

namespace g{

// internal sealed class SeyCode_TInput_Value_Property :10
// {
::g::Uno::UX::Property1_type* SeyCode_TInput_Value_Property_typeof();
void SeyCode_TInput_Value_Property__ctor_2_fn(SeyCode_TInput_Value_Property* __this, ::g::TInput* obj, ::g::Uno::UX::Selector* name);
void SeyCode_TInput_Value_Property__Get_fn(SeyCode_TInput_Value_Property* __this, uString** __retval);
void SeyCode_TInput_Value_Property__New1_fn(::g::TInput* obj, ::g::Uno::UX::Selector* name, SeyCode_TInput_Value_Property** __retval);
void SeyCode_TInput_Value_Property__get_Object_fn(SeyCode_TInput_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void SeyCode_TInput_Value_Property__Set_fn(SeyCode_TInput_Value_Property* __this, uString* v, uObject* origin);
void SeyCode_TInput_Value_Property__get_SupportsOriginSetter_fn(SeyCode_TInput_Value_Property* __this, bool* __retval);

struct SeyCode_TInput_Value_Property : ::g::Uno::UX::Property1
{
    uStrong< ::g::TInput*> _obj;

    void ctor_2(::g::TInput* obj, ::g::Uno::UX::Selector name);
    static SeyCode_TInput_Value_Property* New1(::g::TInput* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
