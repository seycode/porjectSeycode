// This file was generated based on /usr/local/share/uno/Packages/UnoCore/0.32.2/Source/Uno/Exceptions/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Exception.h>
namespace g{namespace Uno{struct NotSupportedException;}}

namespace g{
namespace Uno{

// public sealed class NotSupportedException :282
// {
::g::Uno::Exception_type* NotSupportedException_typeof();
void NotSupportedException__ctor_3_fn(NotSupportedException* __this);
void NotSupportedException__New4_fn(NotSupportedException** __retval);

struct NotSupportedException : ::g::Uno::Exception
{
    void ctor_3();
    static NotSupportedException* New4();
};
// }

}} // ::g::Uno
