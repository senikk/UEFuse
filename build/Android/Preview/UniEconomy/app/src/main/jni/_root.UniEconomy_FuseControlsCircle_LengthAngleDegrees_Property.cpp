// This file was generated based on /Users/terjepedersen/Prosjekt/Fuse/UniEconomy/build/Android/Preview/cache/UniEconomy.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.UniEconomy_FuseControlsCircle_LengthAngleDegrees_Property.h>
#include <Fuse.Controls.Circle.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class UniEconomy_FuseControlsCircle_LengthAngleDegrees_Property :82
// {
static void UniEconomy_FuseControlsCircle_LengthAngleDegrees_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::UX::PropertyObject_typeof();
    type->SetFields(1,
        ::g::Fuse::Controls::Circle_typeof(), offsetof(::g::UniEconomy_FuseControlsCircle_LengthAngleDegrees_Property, _obj), 0);
}

::g::Uno::UX::Property1_type* UniEconomy_FuseControlsCircle_LengthAngleDegrees_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(UniEconomy_FuseControlsCircle_LengthAngleDegrees_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("UniEconomy_FuseControlsCircle_LengthAngleDegrees_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof()));
    type->fp_build_ = UniEconomy_FuseControlsCircle_LengthAngleDegrees_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))UniEconomy_FuseControlsCircle_LengthAngleDegrees_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))UniEconomy_FuseControlsCircle_LengthAngleDegrees_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))UniEconomy_FuseControlsCircle_LengthAngleDegrees_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))UniEconomy_FuseControlsCircle_LengthAngleDegrees_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public UniEconomy_FuseControlsCircle_LengthAngleDegrees_Property(Fuse.Controls.Circle obj, Uno.UX.Selector name) :85
void UniEconomy_FuseControlsCircle_LengthAngleDegrees_Property__ctor_2_fn(UniEconomy_FuseControlsCircle_LengthAngleDegrees_Property* __this, ::g::Fuse::Controls::Circle* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed float Get() :87
void UniEconomy_FuseControlsCircle_LengthAngleDegrees_Property__Get_fn(UniEconomy_FuseControlsCircle_LengthAngleDegrees_Property* __this, float* __retval)
{
    uStackFrame __("UniEconomy_FuseControlsCircle_LengthAngleDegrees_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->LengthAngleDegrees(), void();
}

// public UniEconomy_FuseControlsCircle_LengthAngleDegrees_Property New(Fuse.Controls.Circle obj, Uno.UX.Selector name) :85
void UniEconomy_FuseControlsCircle_LengthAngleDegrees_Property__New1_fn(::g::Fuse::Controls::Circle* obj, ::g::Uno::UX::Selector* name, UniEconomy_FuseControlsCircle_LengthAngleDegrees_Property** __retval)
{
    *__retval = UniEconomy_FuseControlsCircle_LengthAngleDegrees_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :86
void UniEconomy_FuseControlsCircle_LengthAngleDegrees_Property__get_Object_fn(UniEconomy_FuseControlsCircle_LengthAngleDegrees_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    uStackFrame __("UniEconomy_FuseControlsCircle_LengthAngleDegrees_Property", "get_Object()");
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float v, Uno.UX.IPropertyListener origin) :88
void UniEconomy_FuseControlsCircle_LengthAngleDegrees_Property__Set_fn(UniEconomy_FuseControlsCircle_LengthAngleDegrees_Property* __this, float* v, uObject* origin)
{
    uStackFrame __("UniEconomy_FuseControlsCircle_LengthAngleDegrees_Property", "Set(float,Uno.UX.IPropertyListener)");
    float v_ = *v;
    uPtr(__this->_obj)->LengthAngleDegrees(v_);
}

// public override sealed bool get_SupportsOriginSetter() :89
void UniEconomy_FuseControlsCircle_LengthAngleDegrees_Property__get_SupportsOriginSetter_fn(UniEconomy_FuseControlsCircle_LengthAngleDegrees_Property* __this, bool* __retval)
{
    uStackFrame __("UniEconomy_FuseControlsCircle_LengthAngleDegrees_Property", "get_SupportsOriginSetter()");
    return *__retval = false, void();
}

// public UniEconomy_FuseControlsCircle_LengthAngleDegrees_Property(Fuse.Controls.Circle obj, Uno.UX.Selector name) [instance] :85
void UniEconomy_FuseControlsCircle_LengthAngleDegrees_Property::ctor_2(::g::Fuse::Controls::Circle* obj, ::g::Uno::UX::Selector name)
{
    uStackFrame __("UniEconomy_FuseControlsCircle_LengthAngleDegrees_Property", ".ctor(Fuse.Controls.Circle,Uno.UX.Selector)");
    ctor_1(name);
    _obj = obj;
}

// public UniEconomy_FuseControlsCircle_LengthAngleDegrees_Property New(Fuse.Controls.Circle obj, Uno.UX.Selector name) [static] :85
UniEconomy_FuseControlsCircle_LengthAngleDegrees_Property* UniEconomy_FuseControlsCircle_LengthAngleDegrees_Property::New1(::g::Fuse::Controls::Circle* obj, ::g::Uno::UX::Selector name)
{
    UniEconomy_FuseControlsCircle_LengthAngleDegrees_Property* obj1 = (UniEconomy_FuseControlsCircle_LengthAngleDegrees_Property*)uNew(UniEconomy_FuseControlsCircle_LengthAngleDegrees_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g
