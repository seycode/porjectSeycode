// This file was generated based on /usr/local/share/uno/Packages/UnoCore/0.32.2/Source/Uno/IO/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace IO{struct Path;}}}

namespace g{
namespace Uno{
namespace IO{

// public static class Path :2186
// {
uClassType* Path_typeof();
void Path__Combine_fn(uString* a, uString* b, uString** __retval);
void Path__get_DirectorySeparatorChar_fn(uChar* __retval);
void Path__GetDirectoryName_fn(uString* filename, uString** __retval);
void Path__IsPathRooted_fn(uString* filename, bool* __retval);

struct Path : uObject
{
    static uString* Combine(uString* a, uString* b);
    static uString* GetDirectoryName(uString* filename);
    static bool IsPathRooted(uString* filename);
    static uChar DirectorySeparatorChar();
};
// }

}}} // ::g::Uno::IO
