// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Primitives/0.32.14/.uno/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.UX.Template.h>
namespace g{namespace Fuse{namespace Controls{struct Switch;}}}
namespace g{namespace Fuse{namespace Controls{struct Switch__Template;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public partial sealed class Switch.Template :427
// {
::g::Uno::UX::Template_type* Switch__Template_typeof();
void Switch__Template__New1_fn(Switch__Template* __this, uObject** __retval);

struct Switch__Template : ::g::Uno::UX::Template
{
    uStrong< ::g::Fuse::Controls::Switch*> __parent1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return Switch__Template_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return Switch__Template_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return Switch__Template_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return Switch__Template_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return Switch__Template_typeof()->Init(), __selector4_; }
    static ::g::Uno::UX::Selector __selector5_;
    static ::g::Uno::UX::Selector& __selector5() { return Switch__Template_typeof()->Init(), __selector5_; }
    static ::g::Uno::UX::Selector __selector6_;
    static ::g::Uno::UX::Selector& __selector6() { return Switch__Template_typeof()->Init(), __selector6_; }
    static ::g::Uno::UX::Selector __selector7_;
    static ::g::Uno::UX::Selector& __selector7() { return Switch__Template_typeof()->Init(), __selector7_; }
    uStrong< ::g::Uno::UX::Property1*> strokeColor_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> swipe_IsActive_inst;
    uStrong< ::g::Uno::UX::Property1*> switch_thumb_shadow_Distance_inst;
    uStrong< ::g::Uno::UX::Property1*> switch_thumb_shadow_Size_inst;
    uStrong< ::g::Uno::UX::Property1*> switch_thumb_stroke_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> this1_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> thumbFill_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> trackFill_Color_inst;
};
// }

}}} // ::g::Fuse::Controls
