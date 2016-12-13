// This file was generated based on /Users/niklas/Dropbox/programmierung/Fuse/SeyCode/SeyCode.unoproj.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.SeyCode_bundle.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.String.h>
static uString* STRINGS[8];

namespace g{

// public static generated class SeyCode_bundle :0
// {
// static SeyCode_bundle() :0
static void SeyCode_bundle__cctor__fn(uType* __type)
{
    SeyCode_bundle::fontawesomewebfont1493feaa_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"SeyCode"*/]))->GetFile(::STRINGS[1/*"fontawesome...*/]);
    SeyCode_bundle::main2c0fd58a_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"SeyCode"*/]))->GetFile(::STRINGS[2/*"main-c87dab...*/]);
    SeyCode_bundle::md5c1116da5_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"SeyCode"*/]))->GetFile(::STRINGS[3/*"md5-61601aa...*/]);
    SeyCode_bundle::UbuntuBolddb8aedcb_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"SeyCode"*/]))->GetFile(::STRINGS[4/*"ubuntu-bold...*/]);
    SeyCode_bundle::UbuntuLightc0600858_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"SeyCode"*/]))->GetFile(::STRINGS[5/*"ubuntu-ligh...*/]);
    SeyCode_bundle::UbuntuLightitalicf2a78388_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"SeyCode"*/]))->GetFile(::STRINGS[6/*"ubuntu-ligh...*/]);
    SeyCode_bundle::UbuntuMediumbe415a3b_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"SeyCode"*/]))->GetFile(::STRINGS[7/*"ubuntu-medi...*/]);
}

static void SeyCode_bundle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("SeyCode");
    ::STRINGS[1] = uString::Const("fontawesome-webfont-ba2cacf7.ttf");
    ::STRINGS[2] = uString::Const("main-c87dab97.js");
    ::STRINGS[3] = uString::Const("md5-61601aa0.js");
    ::STRINGS[4] = uString::Const("ubuntu-bold-cb7ae518.ttf");
    ::STRINGS[5] = uString::Const("ubuntu-light-0155de53.ttf");
    ::STRINGS[6] = uString::Const("ubuntu-lightitalic-48ef5043.ttf");
    ::STRINGS[7] = uString::Const("ubuntu-medium-ceed2748.ttf");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::SeyCode_bundle::fontawesomewebfont1493feaa_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::SeyCode_bundle::main2c0fd58a_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::SeyCode_bundle::md5c1116da5_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::SeyCode_bundle::UbuntuBolddb8aedcb_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::SeyCode_bundle::UbuntuLightc0600858_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::SeyCode_bundle::UbuntuLightitalicf2a78388_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::SeyCode_bundle::UbuntuMediumbe415a3b_, uFieldFlagsStatic);
}

uClassType* SeyCode_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("SeyCode_bundle", options);
    type->fp_build_ = SeyCode_bundle_build;
    type->fp_cctor_ = SeyCode_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> SeyCode_bundle::fontawesomewebfont1493feaa_;
uSStrong< ::g::Uno::IO::BundleFile*> SeyCode_bundle::main2c0fd58a_;
uSStrong< ::g::Uno::IO::BundleFile*> SeyCode_bundle::md5c1116da5_;
uSStrong< ::g::Uno::IO::BundleFile*> SeyCode_bundle::UbuntuBolddb8aedcb_;
uSStrong< ::g::Uno::IO::BundleFile*> SeyCode_bundle::UbuntuLightc0600858_;
uSStrong< ::g::Uno::IO::BundleFile*> SeyCode_bundle::UbuntuLightitalicf2a78388_;
uSStrong< ::g::Uno::IO::BundleFile*> SeyCode_bundle::UbuntuMediumbe415a3b_;
// }

} // ::g
