// This file was generated based on /Users/terjepedersen/Prosjekt/Fuse/UniEconomy/build/Android/Preview/cache/UniEconomy.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Visual.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct PageControl;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct UniEconomy_FuseControlsPageControl_Active_Property;}

namespace g{

// internal sealed class UniEconomy_FuseControlsPageControl_Active_Property :46
// {
::g::Uno::UX::Property1_type* UniEconomy_FuseControlsPageControl_Active_Property_typeof();
void UniEconomy_FuseControlsPageControl_Active_Property__ctor_2_fn(UniEconomy_FuseControlsPageControl_Active_Property* __this, ::g::Fuse::Controls::PageControl* obj, ::g::Uno::UX::Selector* name);
void UniEconomy_FuseControlsPageControl_Active_Property__Get_fn(UniEconomy_FuseControlsPageControl_Active_Property* __this, ::g::Fuse::Visual** __retval);
void UniEconomy_FuseControlsPageControl_Active_Property__New1_fn(::g::Fuse::Controls::PageControl* obj, ::g::Uno::UX::Selector* name, UniEconomy_FuseControlsPageControl_Active_Property** __retval);
void UniEconomy_FuseControlsPageControl_Active_Property__get_Object_fn(UniEconomy_FuseControlsPageControl_Active_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void UniEconomy_FuseControlsPageControl_Active_Property__Set_fn(UniEconomy_FuseControlsPageControl_Active_Property* __this, ::g::Fuse::Visual* v, uObject* origin);
void UniEconomy_FuseControlsPageControl_Active_Property__get_SupportsOriginSetter_fn(UniEconomy_FuseControlsPageControl_Active_Property* __this, bool* __retval);

struct UniEconomy_FuseControlsPageControl_Active_Property : ::g::Uno::UX::Property1
{
    uStrong< ::g::Fuse::Controls::PageControl*> _obj;

    void ctor_2(::g::Fuse::Controls::PageControl* obj, ::g::Uno::UX::Selector name);
    static UniEconomy_FuseControlsPageControl_Active_Property* New1(::g::Fuse::Controls::PageControl* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
