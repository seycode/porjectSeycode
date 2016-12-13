// This file was generated based on /Users/niklas/Dropbox/programmierung/Fuse/SeyCode/.uno/SeyCode.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Visual.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct PageControl;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct SeyCode_FuseControlsPageControl_Active_Property;}

namespace g{

// internal sealed class SeyCode_FuseControlsPageControl_Active_Property :73
// {
::g::Uno::UX::Property1_type* SeyCode_FuseControlsPageControl_Active_Property_typeof();
void SeyCode_FuseControlsPageControl_Active_Property__ctor_2_fn(SeyCode_FuseControlsPageControl_Active_Property* __this, ::g::Fuse::Controls::PageControl* obj, ::g::Uno::UX::Selector* name);
void SeyCode_FuseControlsPageControl_Active_Property__Get_fn(SeyCode_FuseControlsPageControl_Active_Property* __this, ::g::Fuse::Visual** __retval);
void SeyCode_FuseControlsPageControl_Active_Property__New1_fn(::g::Fuse::Controls::PageControl* obj, ::g::Uno::UX::Selector* name, SeyCode_FuseControlsPageControl_Active_Property** __retval);
void SeyCode_FuseControlsPageControl_Active_Property__get_Object_fn(SeyCode_FuseControlsPageControl_Active_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void SeyCode_FuseControlsPageControl_Active_Property__Set_fn(SeyCode_FuseControlsPageControl_Active_Property* __this, ::g::Fuse::Visual* v, uObject* origin);
void SeyCode_FuseControlsPageControl_Active_Property__get_SupportsOriginSetter_fn(SeyCode_FuseControlsPageControl_Active_Property* __this, bool* __retval);

struct SeyCode_FuseControlsPageControl_Active_Property : ::g::Uno::UX::Property1
{
    uStrong< ::g::Fuse::Controls::PageControl*> _obj;

    void ctor_2(::g::Fuse::Controls::PageControl* obj, ::g::Uno::UX::Selector name);
    static SeyCode_FuseControlsPageControl_Active_Property* New1(::g::Fuse::Controls::PageControl* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
