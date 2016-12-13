// This file was generated based on /Users/niklas/Dropbox/programmierung/Fuse/SeyCode/.uno/SeyCode.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Elements.Element.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct MultiLayoutPanel;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct SeyCode_FuseControlsMultiLayoutPanel_LayoutElement_Property;}

namespace g{

// internal sealed class SeyCode_FuseControlsMultiLayoutPanel_LayoutElement_Property :64
// {
::g::Uno::UX::Property1_type* SeyCode_FuseControlsMultiLayoutPanel_LayoutElement_Property_typeof();
void SeyCode_FuseControlsMultiLayoutPanel_LayoutElement_Property__ctor_2_fn(SeyCode_FuseControlsMultiLayoutPanel_LayoutElement_Property* __this, ::g::Fuse::Controls::MultiLayoutPanel* obj, ::g::Uno::UX::Selector* name);
void SeyCode_FuseControlsMultiLayoutPanel_LayoutElement_Property__Get_fn(SeyCode_FuseControlsMultiLayoutPanel_LayoutElement_Property* __this, ::g::Fuse::Elements::Element** __retval);
void SeyCode_FuseControlsMultiLayoutPanel_LayoutElement_Property__New1_fn(::g::Fuse::Controls::MultiLayoutPanel* obj, ::g::Uno::UX::Selector* name, SeyCode_FuseControlsMultiLayoutPanel_LayoutElement_Property** __retval);
void SeyCode_FuseControlsMultiLayoutPanel_LayoutElement_Property__get_Object_fn(SeyCode_FuseControlsMultiLayoutPanel_LayoutElement_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void SeyCode_FuseControlsMultiLayoutPanel_LayoutElement_Property__Set_fn(SeyCode_FuseControlsMultiLayoutPanel_LayoutElement_Property* __this, ::g::Fuse::Elements::Element* v, uObject* origin);
void SeyCode_FuseControlsMultiLayoutPanel_LayoutElement_Property__get_SupportsOriginSetter_fn(SeyCode_FuseControlsMultiLayoutPanel_LayoutElement_Property* __this, bool* __retval);

struct SeyCode_FuseControlsMultiLayoutPanel_LayoutElement_Property : ::g::Uno::UX::Property1
{
    uStrong< ::g::Fuse::Controls::MultiLayoutPanel*> _obj;

    void ctor_2(::g::Fuse::Controls::MultiLayoutPanel* obj, ::g::Uno::UX::Selector name);
    static SeyCode_FuseControlsMultiLayoutPanel_LayoutElement_Property* New1(::g::Fuse::Controls::MultiLayoutPanel* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
