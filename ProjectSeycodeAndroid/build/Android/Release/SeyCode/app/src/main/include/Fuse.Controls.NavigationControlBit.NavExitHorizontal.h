// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Navigation/0.32.14/.uno/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.Navigation.ExitingAnimation.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Controls{namespace NavigationControlBit{struct NavExitHorizontal;}}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace NavigationControlBit{

// public partial sealed class NavExitHorizontal :198
// {
::g::Fuse::Navigation::NavigationAnimation_type* NavExitHorizontal_typeof();
void NavExitHorizontal__ctor_7_fn(NavExitHorizontal* __this);
void NavExitHorizontal__InitializeUX_fn(NavExitHorizontal* __this);
void NavExitHorizontal__New3_fn(NavExitHorizontal** __retval);

struct NavExitHorizontal : ::g::Fuse::Navigation::ExitingAnimation
{
    void ctor_7();
    void InitializeUX();
    static NavExitHorizontal* New3();
};
// }

}}}} // ::g::Fuse::Controls::NavigationControlBit
