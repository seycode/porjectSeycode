// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Platform.iOS.StatusBarStyle.h>

namespace g{
namespace Uno{
namespace Platform{
namespace iOS{

// /usr/local/share/uno/Packages/UnoCore/0.32.2/Source/Uno/Platform/$.uno
// ----------------------------------------------------------------------

// public enum StatusBarStyle :343
uEnumType* StatusBarStyle_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Platform.iOS.StatusBarStyle", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Dark", 0LL,
        "Light", 1LL);
    return type;
}

}}}} // ::g::Uno::Platform::iOS
