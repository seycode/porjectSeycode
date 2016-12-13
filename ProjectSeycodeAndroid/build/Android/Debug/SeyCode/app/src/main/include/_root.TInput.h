// This file was generated based on /Users/niklas/Dropbox/programmierung/Fuse/SeyCode/.uno/TInput.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.TextInput.h>
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
namespace g{struct TInput;}

namespace g{

// public partial sealed class TInput :2
// {
::g::Fuse::Controls::TextInputControl_type* TInput_typeof();
void TInput__ctor_8_fn(TInput* __this);
void TInput__InitializeUX_fn(TInput* __this);
void TInput__New4_fn(TInput** __retval);

struct TInput : ::g::Fuse::Controls::TextInput
{
    void ctor_8();
    void InitializeUX();
    static TInput* New4();
};
// }

} // ::g
