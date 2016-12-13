// This file was generated based on /usr/local/share/uno/Packages/FuseCore/0.32.14/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Diagnostic;}}
namespace g{namespace Fuse{struct Diagnostics__ReportAction;}}

namespace g{
namespace Fuse{

// private sealed class Diagnostics.ReportAction :626
// {
uType* Diagnostics__ReportAction_typeof();
void Diagnostics__ReportAction__ctor__fn(Diagnostics__ReportAction* __this);
void Diagnostics__ReportAction__New1_fn(Diagnostics__ReportAction** __retval);
void Diagnostics__ReportAction__Post_fn(Diagnostics__ReportAction* __this);

struct Diagnostics__ReportAction : uObject
{
    uStrong< ::g::Fuse::Diagnostic*> Diagnostic;

    void ctor_();
    void Post();
    static Diagnostics__ReportAction* New1();
};
// }

}} // ::g::Fuse
