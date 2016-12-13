// This file was generated based on /Users/niklas/Dropbox/programmierung/Fuse/SeyCode/.uno/TView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.TextView.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.IValue-1.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.String.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{struct TView;}

namespace g{

// public partial sealed class TView :2
// {
::g::Fuse::Controls::TextInputControl_type* TView_typeof();
void TView__ctor_8_fn(TView* __this);
void TView__InitializeUX_fn(TView* __this);
void TView__New4_fn(TView** __retval);

struct TView : ::g::Fuse::Controls::TextView
{
    void ctor_8();
    void InitializeUX();
    static TView* New4();
};
// }

} // ::g
