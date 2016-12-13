// This file was generated based on /usr/local/share/uno/Packages/Fuse.Android/0.32.14/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
#include <Fuse.Binding.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Android{struct StatusBarConfig;}}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Android{

// public sealed class StatusBarConfig :40
// {
::g::Fuse::Node_type* StatusBarConfig_typeof();
void StatusBarConfig__SetStatusBarColor_fn(::g::Uno::Float4* color);
void StatusBarConfig__SetStatusBarColor1_fn(int* color);

struct StatusBarConfig : ::g::Fuse::Behavior
{
    static void SetStatusBarColor(::g::Uno::Float4 color);
    static void SetStatusBarColor1(int color);
};
// }

}}} // ::g::Fuse::Android
