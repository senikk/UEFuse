// This file was generated based on /Users/terjepedersen/Prosjekt/Fuse/UniEconomy/build/Android/Preview/cache/UniEconomy.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.UniEconomy_FuseControlsPageControl_Active_Property.h>
#include <Fuse.Controls.NavigationControl.h>
#include <Fuse.Controls.PageControl.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class UniEconomy_FuseControlsPageControl_Active_Property :46
// {
static void UniEconomy_FuseControlsPageControl_Active_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::UX::PropertyObject_typeof();
    type->SetFields(1,
        ::g::Fuse::Controls::PageControl_typeof(), offsetof(::g::UniEconomy_FuseControlsPageControl_Active_Property, _obj), 0);
}

::g::Uno::UX::Property1_type* UniEconomy_FuseControlsPageControl_Active_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(UniEconomy_FuseControlsPageControl_Active_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("UniEconomy_FuseControlsPageControl_Active_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Visual_typeof()));
    type->fp_build_ = UniEconomy_FuseControlsPageControl_Active_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))UniEconomy_FuseControlsPageControl_Active_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))UniEconomy_FuseControlsPageControl_Active_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))UniEconomy_FuseControlsPageControl_Active_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))UniEconomy_FuseControlsPageControl_Active_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public UniEconomy_FuseControlsPageControl_Active_Property(Fuse.Controls.PageControl obj, Uno.UX.Selector name) :49
void UniEconomy_FuseControlsPageControl_Active_Property__ctor_2_fn(UniEconomy_FuseControlsPageControl_Active_Property* __this, ::g::Fuse::Controls::PageControl* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed Fuse.Visual Get() :51
void UniEconomy_FuseControlsPageControl_Active_Property__Get_fn(UniEconomy_FuseControlsPageControl_Active_Property* __this, ::g::Fuse::Visual** __retval)
{
    uStackFrame __("UniEconomy_FuseControlsPageControl_Active_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->Active(), void();
}

// public UniEconomy_FuseControlsPageControl_Active_Property New(Fuse.Controls.PageControl obj, Uno.UX.Selector name) :49
void UniEconomy_FuseControlsPageControl_Active_Property__New1_fn(::g::Fuse::Controls::PageControl* obj, ::g::Uno::UX::Selector* name, UniEconomy_FuseControlsPageControl_Active_Property** __retval)
{
    *__retval = UniEconomy_FuseControlsPageControl_Active_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :50
void UniEconomy_FuseControlsPageControl_Active_Property__get_Object_fn(UniEconomy_FuseControlsPageControl_Active_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    uStackFrame __("UniEconomy_FuseControlsPageControl_Active_Property", "get_Object()");
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Fuse.Visual v, Uno.UX.IPropertyListener origin) :52
void UniEconomy_FuseControlsPageControl_Active_Property__Set_fn(UniEconomy_FuseControlsPageControl_Active_Property* __this, ::g::Fuse::Visual* v, uObject* origin)
{
    uStackFrame __("UniEconomy_FuseControlsPageControl_Active_Property", "Set(Fuse.Visual,Uno.UX.IPropertyListener)");
    uPtr(__this->_obj)->Active(v);
}

// public override sealed bool get_SupportsOriginSetter() :53
void UniEconomy_FuseControlsPageControl_Active_Property__get_SupportsOriginSetter_fn(UniEconomy_FuseControlsPageControl_Active_Property* __this, bool* __retval)
{
    uStackFrame __("UniEconomy_FuseControlsPageControl_Active_Property", "get_SupportsOriginSetter()");
    return *__retval = false, void();
}

// public UniEconomy_FuseControlsPageControl_Active_Property(Fuse.Controls.PageControl obj, Uno.UX.Selector name) [instance] :49
void UniEconomy_FuseControlsPageControl_Active_Property::ctor_2(::g::Fuse::Controls::PageControl* obj, ::g::Uno::UX::Selector name)
{
    uStackFrame __("UniEconomy_FuseControlsPageControl_Active_Property", ".ctor(Fuse.Controls.PageControl,Uno.UX.Selector)");
    ctor_1(name);
    _obj = obj;
}

// public UniEconomy_FuseControlsPageControl_Active_Property New(Fuse.Controls.PageControl obj, Uno.UX.Selector name) [static] :49
UniEconomy_FuseControlsPageControl_Active_Property* UniEconomy_FuseControlsPageControl_Active_Property::New1(::g::Fuse::Controls::PageControl* obj, ::g::Uno::UX::Selector name)
{
    UniEconomy_FuseControlsPageControl_Active_Property* obj1 = (UniEconomy_FuseControlsPageControl_Active_Property*)uNew(UniEconomy_FuseControlsPageControl_Active_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g
