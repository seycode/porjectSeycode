// This file was generated based on /Users/niklas/Dropbox/programmierung/Fuse/SeyCode/.uno/Tab.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct Tab;}

namespace g{

// public partial sealed class Tab :2
// {
::g::Fuse::Controls::Control_type* Tab_typeof();
void Tab__ctor_7_fn(Tab* __this);
void Tab__get_Icon_fn(Tab* __this, uString** __retval);
void Tab__set_Icon_fn(Tab* __this, uString* value);
void Tab__InitializeUX_fn(Tab* __this);
void Tab__New4_fn(Tab** __retval);
void Tab__SetIcon_fn(Tab* __this, uString* value, uObject* origin);
void Tab__SetText_fn(Tab* __this, uString* value, uObject* origin);
void Tab__get_Text_fn(Tab* __this, uString** __retval);
void Tab__set_Text_fn(Tab* __this, uString* value);

struct Tab : ::g::Fuse::Controls::Panel
{
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return Tab_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return Tab_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return Tab_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return Tab_typeof()->Init(), __selector3_; }
    uStrong<uString*> _field_Icon;
    uStrong<uString*> _field_Text;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> this_Icon_inst;
    uStrong< ::g::Uno::UX::Property1*> this_Text_inst;

    void ctor_7();
    uString* Icon();
    void Icon(uString* value);
    void InitializeUX();
    void SetIcon(uString* value, uObject* origin);
    void SetText(uString* value, uObject* origin);
    uString* Text();
    void Text(uString* value);
    static Tab* New4();
};
// }

} // ::g
