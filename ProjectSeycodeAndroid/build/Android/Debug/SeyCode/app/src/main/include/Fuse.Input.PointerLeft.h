// This file was generated based on /usr/local/share/uno/Packages/FuseCore/0.32.14/Input/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Input.PointerLeftArgs.h>
#include <Fuse.Input.PointerLeftHandler.h>
#include <Fuse.VisualEvent-2.h>
namespace g{namespace Fuse{namespace Input{struct PointerLeft;}}}

namespace g{
namespace Fuse{
namespace Input{

// internal sealed class PointerLeft :871
// {
::g::Fuse::VisualEvent_type* PointerLeft_typeof();
void PointerLeft__ctor_1_fn(PointerLeft* __this);
void PointerLeft__Invoke_fn(PointerLeft* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Input::PointerLeftArgs* args);
void PointerLeft__New1_fn(PointerLeft** __retval);

struct PointerLeft : ::g::Fuse::VisualEvent
{
    void ctor_1();
    static PointerLeft* New1();
};
// }

}}} // ::g::Fuse::Input
