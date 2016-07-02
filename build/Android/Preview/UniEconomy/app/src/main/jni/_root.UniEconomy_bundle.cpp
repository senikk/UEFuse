// This file was generated based on /Users/terjepedersen/Prosjekt/Fuse/UniEconomy/UniEconomy.unoproj.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.UniEconomy_bundle.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.String.h>
static uString* STRINGS[6];

namespace g{

// public static generated class UniEconomy_bundle :0
// {
// static UniEconomy_bundle() :0
static void UniEconomy_bundle__cctor__fn(uType* __type)
{
    UniEconomy_bundle::LoginView643538e4_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"UniEconomy"*/]))->GetFile(::STRINGS[1/*"loginview-1...*/]);
    UniEconomy_bundle::modalena0963598_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"UniEconomy"*/]))->GetFile(::STRINGS[2/*"modalen-704...*/]);
    UniEconomy_bundle::password_icon59f9fda7_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"UniEconomy"*/]))->GetFile(::STRINGS[3/*"password_ic...*/]);
    UniEconomy_bundle::ue54862634_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"UniEconomy"*/]))->GetFile(::STRINGS[4/*"ue-a48315b7...*/]);
    UniEconomy_bundle::user_icon18d2cbf7_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"UniEconomy"*/]))->GetFile(::STRINGS[5/*"user_icon-3...*/]);
}

static void UniEconomy_bundle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("UniEconomy");
    ::STRINGS[1] = uString::Const("loginview-1290c5a9.js");
    ::STRINGS[2] = uString::Const("modalen-704df99d.jpg");
    ::STRINGS[3] = uString::Const("password_icon-865788ec.png");
    ::STRINGS[4] = uString::Const("ue-a48315b7.png");
    ::STRINGS[5] = uString::Const("user_icon-368617bc.png");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::UniEconomy_bundle::LoginView643538e4_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::UniEconomy_bundle::modalena0963598_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::UniEconomy_bundle::password_icon59f9fda7_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::UniEconomy_bundle::ue54862634_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::UniEconomy_bundle::user_icon18d2cbf7_, uFieldFlagsStatic);
    type->Reflection.SetFields(5,
        new uField("LoginView643538e4", 0),
        new uField("modalena0963598", 1),
        new uField("password_icon59f9fda7", 2),
        new uField("ue54862634", 3),
        new uField("user_icon18d2cbf7", 4));
}

uClassType* UniEconomy_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("UniEconomy_bundle", options);
    type->fp_build_ = UniEconomy_bundle_build;
    type->fp_cctor_ = UniEconomy_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> UniEconomy_bundle::LoginView643538e4_;
uSStrong< ::g::Uno::IO::BundleFile*> UniEconomy_bundle::modalena0963598_;
uSStrong< ::g::Uno::IO::BundleFile*> UniEconomy_bundle::password_icon59f9fda7_;
uSStrong< ::g::Uno::IO::BundleFile*> UniEconomy_bundle::ue54862634_;
uSStrong< ::g::Uno::IO::BundleFile*> UniEconomy_bundle::user_icon18d2cbf7_;
// }

} // ::g
