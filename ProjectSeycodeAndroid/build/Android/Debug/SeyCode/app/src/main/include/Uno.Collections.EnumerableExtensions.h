// This file was generated based on /usr/local/share/uno/Packages/Uno.Collections/0.32.1/Extensions/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Collections{struct EnumerableExtensions;}}}

namespace g{
namespace Uno{
namespace Collections{

// public static class EnumerableExtensions :27
// {
uClassType* EnumerableExtensions_typeof();
void EnumerableExtensions__First_fn(uType* __type, uObject* self, uTRef __retval);
void EnumerableExtensions__FirstOrDefault_fn(uType* __type, uObject* self, uTRef __retval);
void EnumerableExtensions__IndexOf_fn(uType* __type, uObject* self, void* element, int* __retval);
void EnumerableExtensions__ToArray_fn(uType* __type, uObject* self, uArray** __retval);

struct EnumerableExtensions : uObject
{
    template<class T>
    static T First(uType* __type, uObject* self) { T __retval; return EnumerableExtensions__First_fn(__type, self, &__retval), __retval; }
    template<class T>
    static T FirstOrDefault(uType* __type, uObject* self) { T __retval; return EnumerableExtensions__FirstOrDefault_fn(__type, self, &__retval), __retval; }
    template<class T>
    static int IndexOf(uType* __type, uObject* self, T element) { int __retval; return EnumerableExtensions__IndexOf_fn(__type, self, uConstrain(__type->U(0), element), &__retval), __retval; }
    static uArray* ToArray(uType* __type, uObject* self);
};
// }

}}} // ::g::Uno::Collections
