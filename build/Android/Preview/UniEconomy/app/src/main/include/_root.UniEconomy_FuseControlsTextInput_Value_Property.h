// This file was generated based on /Users/terjepedersen/Prosjekt/Fuse/UniEconomy/build/Android/Preview/cache/UniEconomy.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct TextInput;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct UniEconomy_FuseControlsTextInput_Value_Property;}

namespace g{

// internal sealed class UniEconomy_FuseControlsTextInput_Value_Property :37
// {
::g::Uno::UX::Property1_type* UniEconomy_FuseControlsTextInput_Value_Property_typeof();
void UniEconomy_FuseControlsTextInput_Value_Property__ctor_2_fn(UniEconomy_FuseControlsTextInput_Value_Property* __this, ::g::Fuse::Controls::TextInput* obj, ::g::Uno::UX::Selector* name);
void UniEconomy_FuseControlsTextInput_Value_Property__Get_fn(UniEconomy_FuseControlsTextInput_Value_Property* __this, uString** __retval);
void UniEconomy_FuseControlsTextInput_Value_Property__New1_fn(::g::Fuse::Controls::TextInput* obj, ::g::Uno::UX::Selector* name, UniEconomy_FuseControlsTextInput_Value_Property** __retval);
void UniEconomy_FuseControlsTextInput_Value_Property__get_Object_fn(UniEconomy_FuseControlsTextInput_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void UniEconomy_FuseControlsTextInput_Value_Property__Set_fn(UniEconomy_FuseControlsTextInput_Value_Property* __this, uString* v, uObject* origin);
void UniEconomy_FuseControlsTextInput_Value_Property__get_SupportsOriginSetter_fn(UniEconomy_FuseControlsTextInput_Value_Property* __this, bool* __retval);

struct UniEconomy_FuseControlsTextInput_Value_Property : ::g::Uno::UX::Property1
{
    uStrong< ::g::Fuse::Controls::TextInput*> _obj;

    void ctor_2(::g::Fuse::Controls::TextInput* obj, ::g::Uno::UX::Selector name);
    static UniEconomy_FuseControlsTextInput_Value_Property* New1(::g::Fuse::Controls::TextInput* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
