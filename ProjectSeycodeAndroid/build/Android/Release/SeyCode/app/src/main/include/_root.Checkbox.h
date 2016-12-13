// This file was generated based on /Users/niklas/Dropbox/programmierung/Fuse/SeyCode/.uno/Checkbox.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Native.IToggleViewHost.h>
#include <Fuse.Controls.ToggleControl.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.IValue-1.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct Text;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct Checkbox;}

namespace g{

// public partial sealed class Checkbox :2
// {
::g::Fuse::Controls::ToggleControl_type* Checkbox_typeof();
void Checkbox__ctor_8_fn(Checkbox* __this);
void Checkbox__InitializeUX_fn(Checkbox* __this);
void Checkbox__New5_fn(Checkbox** __retval);

struct Checkbox : ::g::Fuse::Controls::ToggleControl
{
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return Checkbox_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return Checkbox_typeof()->Init(), __selector1_; }
    uStrong< ::g::Fuse::Controls::Text*> checkbox;
    uStrong< ::g::Uno::UX::Property1*> checkbox_Value_inst;

    void ctor_8();
    void InitializeUX();
    static Checkbox* New5();
};
// }

} // ::g
