// This file was generated based on /Users/terjepedersen/Prosjekt/Fuse/UniEconomy/build/Android/Preview/cache/UniEconomy.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.UniEconomy_FuseControlsText_Value_Property.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class UniEconomy_FuseControlsText_Value_Property :10
// {
static void UniEconomy_FuseControlsText_Value_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::UX::PropertyObject_typeof();
    type->SetFields(1,
        ::g::Fuse::Controls::Text_typeof(), offsetof(::g::UniEconomy_FuseControlsText_Value_Property, _obj), 0);
}

::g::Uno::UX::Property1_type* UniEconomy_FuseControlsText_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(UniEconomy_FuseControlsText_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("UniEconomy_FuseControlsText_Value_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()));
    type->fp_build_ = UniEconomy_FuseControlsText_Value_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))UniEconomy_FuseControlsText_Value_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))UniEconomy_FuseControlsText_Value_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))UniEconomy_FuseControlsText_Value_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))UniEconomy_FuseControlsText_Value_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public UniEconomy_FuseControlsText_Value_Property(Fuse.Controls.Text obj, Uno.UX.Selector name) :13
void UniEconomy_FuseControlsText_Value_Property__ctor_2_fn(UniEconomy_FuseControlsText_Value_Property* __this, ::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed string Get() :15
void UniEconomy_FuseControlsText_Value_Property__Get_fn(UniEconomy_FuseControlsText_Value_Property* __this, uString** __retval)
{
    uStackFrame __("UniEconomy_FuseControlsText_Value_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->Value(), void();
}

// public UniEconomy_FuseControlsText_Value_Property New(Fuse.Controls.Text obj, Uno.UX.Selector name) :13
void UniEconomy_FuseControlsText_Value_Property__New1_fn(::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector* name, UniEconomy_FuseControlsText_Value_Property** __retval)
{
    *__retval = UniEconomy_FuseControlsText_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :14
void UniEconomy_FuseControlsText_Value_Property__get_Object_fn(UniEconomy_FuseControlsText_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    uStackFrame __("UniEconomy_FuseControlsText_Value_Property", "get_Object()");
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(string v, Uno.UX.IPropertyListener origin) :16
void UniEconomy_FuseControlsText_Value_Property__Set_fn(UniEconomy_FuseControlsText_Value_Property* __this, uString* v, uObject* origin)
{
    uStackFrame __("UniEconomy_FuseControlsText_Value_Property", "Set(string,Uno.UX.IPropertyListener)");
    uPtr(__this->_obj)->SetValue(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :17
void UniEconomy_FuseControlsText_Value_Property__get_SupportsOriginSetter_fn(UniEconomy_FuseControlsText_Value_Property* __this, bool* __retval)
{
    uStackFrame __("UniEconomy_FuseControlsText_Value_Property", "get_SupportsOriginSetter()");
    return *__retval = true, void();
}

// public UniEconomy_FuseControlsText_Value_Property(Fuse.Controls.Text obj, Uno.UX.Selector name) [instance] :13
void UniEconomy_FuseControlsText_Value_Property::ctor_2(::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector name)
{
    uStackFrame __("UniEconomy_FuseControlsText_Value_Property", ".ctor(Fuse.Controls.Text,Uno.UX.Selector)");
    ctor_1(name);
    _obj = obj;
}

// public UniEconomy_FuseControlsText_Value_Property New(Fuse.Controls.Text obj, Uno.UX.Selector name) [static] :13
UniEconomy_FuseControlsText_Value_Property* UniEconomy_FuseControlsText_Value_Property::New1(::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector name)
{
    UniEconomy_FuseControlsText_Value_Property* obj1 = (UniEconomy_FuseControlsText_Value_Property*)uNew(UniEconomy_FuseControlsText_Value_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g
