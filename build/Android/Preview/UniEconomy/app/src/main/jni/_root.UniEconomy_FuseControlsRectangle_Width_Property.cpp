// This file was generated based on /Users/terjepedersen/Prosjekt/Fuse/UniEconomy/build/Android/Preview/cache/UniEconomy.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.UniEconomy_FuseControlsRectangle_Width_Property.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Elements.Element.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class UniEconomy_FuseControlsRectangle_Width_Property :55
// {
static void UniEconomy_FuseControlsRectangle_Width_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::UX::PropertyObject_typeof();
    type->SetFields(1,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(::g::UniEconomy_FuseControlsRectangle_Width_Property, _obj), 0);
}

::g::Uno::UX::Property1_type* UniEconomy_FuseControlsRectangle_Width_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(UniEconomy_FuseControlsRectangle_Width_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("UniEconomy_FuseControlsRectangle_Width_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::Size_typeof()));
    type->fp_build_ = UniEconomy_FuseControlsRectangle_Width_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))UniEconomy_FuseControlsRectangle_Width_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))UniEconomy_FuseControlsRectangle_Width_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))UniEconomy_FuseControlsRectangle_Width_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))UniEconomy_FuseControlsRectangle_Width_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public UniEconomy_FuseControlsRectangle_Width_Property(Fuse.Controls.Rectangle obj, Uno.UX.Selector name) :58
void UniEconomy_FuseControlsRectangle_Width_Property__ctor_2_fn(UniEconomy_FuseControlsRectangle_Width_Property* __this, ::g::Fuse::Controls::Rectangle* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed Uno.UX.Size Get() :60
void UniEconomy_FuseControlsRectangle_Width_Property__Get_fn(UniEconomy_FuseControlsRectangle_Width_Property* __this, ::g::Uno::UX::Size* __retval)
{
    uStackFrame __("UniEconomy_FuseControlsRectangle_Width_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->Width(), void();
}

// public UniEconomy_FuseControlsRectangle_Width_Property New(Fuse.Controls.Rectangle obj, Uno.UX.Selector name) :58
void UniEconomy_FuseControlsRectangle_Width_Property__New1_fn(::g::Fuse::Controls::Rectangle* obj, ::g::Uno::UX::Selector* name, UniEconomy_FuseControlsRectangle_Width_Property** __retval)
{
    *__retval = UniEconomy_FuseControlsRectangle_Width_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :59
void UniEconomy_FuseControlsRectangle_Width_Property__get_Object_fn(UniEconomy_FuseControlsRectangle_Width_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    uStackFrame __("UniEconomy_FuseControlsRectangle_Width_Property", "get_Object()");
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.Size v, Uno.UX.IPropertyListener origin) :61
void UniEconomy_FuseControlsRectangle_Width_Property__Set_fn(UniEconomy_FuseControlsRectangle_Width_Property* __this, ::g::Uno::UX::Size* v, uObject* origin)
{
    uStackFrame __("UniEconomy_FuseControlsRectangle_Width_Property", "Set(Uno.UX.Size,Uno.UX.IPropertyListener)");
    ::g::Uno::UX::Size v_ = *v;
    uPtr(__this->_obj)->Width(v_);
}

// public override sealed bool get_SupportsOriginSetter() :62
void UniEconomy_FuseControlsRectangle_Width_Property__get_SupportsOriginSetter_fn(UniEconomy_FuseControlsRectangle_Width_Property* __this, bool* __retval)
{
    uStackFrame __("UniEconomy_FuseControlsRectangle_Width_Property", "get_SupportsOriginSetter()");
    return *__retval = false, void();
}

// public UniEconomy_FuseControlsRectangle_Width_Property(Fuse.Controls.Rectangle obj, Uno.UX.Selector name) [instance] :58
void UniEconomy_FuseControlsRectangle_Width_Property::ctor_2(::g::Fuse::Controls::Rectangle* obj, ::g::Uno::UX::Selector name)
{
    uStackFrame __("UniEconomy_FuseControlsRectangle_Width_Property", ".ctor(Fuse.Controls.Rectangle,Uno.UX.Selector)");
    ctor_1(name);
    _obj = obj;
}

// public UniEconomy_FuseControlsRectangle_Width_Property New(Fuse.Controls.Rectangle obj, Uno.UX.Selector name) [static] :58
UniEconomy_FuseControlsRectangle_Width_Property* UniEconomy_FuseControlsRectangle_Width_Property::New1(::g::Fuse::Controls::Rectangle* obj, ::g::Uno::UX::Selector name)
{
    UniEconomy_FuseControlsRectangle_Width_Property* obj1 = (UniEconomy_FuseControlsRectangle_Width_Property*)uNew(UniEconomy_FuseControlsRectangle_Width_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g
