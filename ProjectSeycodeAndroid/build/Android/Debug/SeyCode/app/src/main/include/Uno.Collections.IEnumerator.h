// This file was generated based on /usr/local/share/uno/Packages/UnoCore/0.32.2/Source/Uno/Collections/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Uno{
namespace Collections{

// public abstract interface IEnumerator :711
// {
uInterfaceType* IEnumerator_typeof();

struct IEnumerator
{
    void(*fp_MoveNext)(uObject*, bool*);
    static bool MoveNext(const uInterface& __this) { bool __retval; return __this.VTable<IEnumerator>()->fp_MoveNext(__this, &__retval), __retval; }
};
// }

}}} // ::g::Uno::Collections
