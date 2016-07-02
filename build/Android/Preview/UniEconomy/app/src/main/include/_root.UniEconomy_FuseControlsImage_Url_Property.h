// This file was generated based on /Users/terjepedersen/Prosjekt/Fuse/UniEconomy/build/Android/Preview/cache/UniEconomy.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct Image;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct UniEconomy_FuseControlsImage_Url_Property;}

namespace g{

// internal sealed class UniEconomy_FuseControlsImage_Url_Property :1
// {
::g::Uno::UX::Property1_type* UniEconomy_FuseControlsImage_Url_Property_typeof();
void UniEconomy_FuseControlsImage_Url_Property__ctor_2_fn(UniEconomy_FuseControlsImage_Url_Property* __this, ::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector* name);
void UniEconomy_FuseControlsImage_Url_Property__Get_fn(UniEconomy_FuseControlsImage_Url_Property* __this, uString** __retval);
void UniEconomy_FuseControlsImage_Url_Property__New1_fn(::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector* name, UniEconomy_FuseControlsImage_Url_Property** __retval);
void UniEconomy_FuseControlsImage_Url_Property__get_Object_fn(UniEconomy_FuseControlsImage_Url_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void UniEconomy_FuseControlsImage_Url_Property__Set_fn(UniEconomy_FuseControlsImage_Url_Property* __this, uString* v, uObject* origin);
void UniEconomy_FuseControlsImage_Url_Property__get_SupportsOriginSetter_fn(UniEconomy_FuseControlsImage_Url_Property* __this, bool* __retval);

struct UniEconomy_FuseControlsImage_Url_Property : ::g::Uno::UX::Property1
{
    uStrong< ::g::Fuse::Controls::Image*> _obj;

    void ctor_2(::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector name);
    static UniEconomy_FuseControlsImage_Url_Property* New1(::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
