// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Primitives/0.32.14/TextControls/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.TextInputControl.h>
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
namespace g{namespace Fuse{namespace Controls{struct TextEdit;}}}
namespace g{namespace Fuse{namespace Controls{struct TextInput;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public class TextInput :2071
// {
::g::Fuse::Controls::TextInputControl_type* TextInput_typeof();
void TextInput__ctor_7_fn(TextInput* __this);
void TextInput__Create_fn(::g::Fuse::Controls::TextEdit** __retval);

struct TextInput : ::g::Fuse::Controls::TextInputControl
{
    void ctor_7();
    static ::g::Fuse::Controls::TextEdit* Create();
};
// }

}}} // ::g::Fuse::Controls
