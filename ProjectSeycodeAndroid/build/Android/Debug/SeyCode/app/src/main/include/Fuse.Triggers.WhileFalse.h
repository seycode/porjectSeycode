// This file was generated based on /usr/local/share/uno/Packages/Fuse.Triggers/0.32.14/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.IPulseTrigger.h>
#include <Fuse.Triggers.IValue-1.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Triggers{struct WhileFalse;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class WhileFalse :2249
// {
::g::Fuse::Triggers::WhileValue_type* WhileFalse_typeof();
void WhileFalse__get_IsOn_fn(WhileFalse* __this, bool* __retval);

struct WhileFalse : ::g::Fuse::Triggers::WhileBool
{
};
// }

}}} // ::g::Fuse::Triggers
