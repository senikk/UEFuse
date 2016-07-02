// This file was generated based on /Users/terjepedersen/Prosjekt/Fuse/UniEconomy/build/Android/Preview/cache/UniEconomy.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct Text;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct UniEconomy_FuseControlsText_Opacity_Property;}

namespace g{

// internal sealed class UniEconomy_FuseControlsText_Opacity_Property :64
// {
::g::Uno::UX::Property1_type* UniEconomy_FuseControlsText_Opacity_Property_typeof();
void UniEconomy_FuseControlsText_Opacity_Property__ctor_2_fn(UniEconomy_FuseControlsText_Opacity_Property* __this, ::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector* name);
void UniEconomy_FuseControlsText_Opacity_Property__Get_fn(UniEconomy_FuseControlsText_Opacity_Property* __this, float* __retval);
void UniEconomy_FuseControlsText_Opacity_Property__New1_fn(::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector* name, UniEconomy_FuseControlsText_Opacity_Property** __retval);
void UniEconomy_FuseControlsText_Opacity_Property__get_Object_fn(UniEconomy_FuseControlsText_Opacity_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void UniEconomy_FuseControlsText_Opacity_Property__Set_fn(UniEconomy_FuseControlsText_Opacity_Property* __this, float* v, uObject* origin);
void UniEconomy_FuseControlsText_Opacity_Property__get_SupportsOriginSetter_fn(UniEconomy_FuseControlsText_Opacity_Property* __this, bool* __retval);

struct UniEconomy_FuseControlsText_Opacity_Property : ::g::Uno::UX::Property1
{
    uStrong< ::g::Fuse::Controls::Text*> _obj;

    void ctor_2(::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector name);
    static UniEconomy_FuseControlsText_Opacity_Property* New1(::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
