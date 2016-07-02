// This file was generated based on /Users/terjepedersen/Prosjekt/Fuse/UniEconomy/build/Android/Preview/cache/UniEconomy.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Reactive{struct Each;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct UniEconomy_FuseReactiveEach_Items_Property;}

namespace g{

// internal sealed class UniEconomy_FuseReactiveEach_Items_Property :19
// {
::g::Uno::UX::Property1_type* UniEconomy_FuseReactiveEach_Items_Property_typeof();
void UniEconomy_FuseReactiveEach_Items_Property__ctor_2_fn(UniEconomy_FuseReactiveEach_Items_Property* __this, ::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector* name);
void UniEconomy_FuseReactiveEach_Items_Property__Get_fn(UniEconomy_FuseReactiveEach_Items_Property* __this, uObject** __retval);
void UniEconomy_FuseReactiveEach_Items_Property__New1_fn(::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector* name, UniEconomy_FuseReactiveEach_Items_Property** __retval);
void UniEconomy_FuseReactiveEach_Items_Property__get_Object_fn(UniEconomy_FuseReactiveEach_Items_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void UniEconomy_FuseReactiveEach_Items_Property__Set_fn(UniEconomy_FuseReactiveEach_Items_Property* __this, uObject* v, uObject* origin);
void UniEconomy_FuseReactiveEach_Items_Property__get_SupportsOriginSetter_fn(UniEconomy_FuseReactiveEach_Items_Property* __this, bool* __retval);

struct UniEconomy_FuseReactiveEach_Items_Property : ::g::Uno::UX::Property1
{
    uStrong< ::g::Fuse::Reactive::Each*> _obj;

    void ctor_2(::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector name);
    static UniEconomy_FuseReactiveEach_Items_Property* New1(::g::Fuse::Reactive::Each* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
