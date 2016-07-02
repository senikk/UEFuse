// This file was generated based on /Users/terjepedersen/Prosjekt/Fuse/UniEconomy/build/Android/Preview/cache/UniEconomy.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.UniEconomy_FuseControlsImage_Url_Property.h>
#include <Fuse.Controls.Image.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class UniEconomy_FuseControlsImage_Url_Property :1
// {
static void UniEconomy_FuseControlsImage_Url_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::UX::PropertyObject_typeof();
    type->SetFields(1,
        ::g::Fuse::Controls::Image_typeof(), offsetof(::g::UniEconomy_FuseControlsImage_Url_Property, _obj), 0);
}

::g::Uno::UX::Property1_type* UniEconomy_FuseControlsImage_Url_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(UniEconomy_FuseControlsImage_Url_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("UniEconomy_FuseControlsImage_Url_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()));
    type->fp_build_ = UniEconomy_FuseControlsImage_Url_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))UniEconomy_FuseControlsImage_Url_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))UniEconomy_FuseControlsImage_Url_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))UniEconomy_FuseControlsImage_Url_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))UniEconomy_FuseControlsImage_Url_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public UniEconomy_FuseControlsImage_Url_Property(Fuse.Controls.Image obj, Uno.UX.Selector name) :4
void UniEconomy_FuseControlsImage_Url_Property__ctor_2_fn(UniEconomy_FuseControlsImage_Url_Property* __this, ::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed string Get() :6
void UniEconomy_FuseControlsImage_Url_Property__Get_fn(UniEconomy_FuseControlsImage_Url_Property* __this, uString** __retval)
{
    uStackFrame __("UniEconomy_FuseControlsImage_Url_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->Url(), void();
}

// public UniEconomy_FuseControlsImage_Url_Property New(Fuse.Controls.Image obj, Uno.UX.Selector name) :4
void UniEconomy_FuseControlsImage_Url_Property__New1_fn(::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector* name, UniEconomy_FuseControlsImage_Url_Property** __retval)
{
    *__retval = UniEconomy_FuseControlsImage_Url_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :5
void UniEconomy_FuseControlsImage_Url_Property__get_Object_fn(UniEconomy_FuseControlsImage_Url_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    uStackFrame __("UniEconomy_FuseControlsImage_Url_Property", "get_Object()");
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(string v, Uno.UX.IPropertyListener origin) :7
void UniEconomy_FuseControlsImage_Url_Property__Set_fn(UniEconomy_FuseControlsImage_Url_Property* __this, uString* v, uObject* origin)
{
    uStackFrame __("UniEconomy_FuseControlsImage_Url_Property", "Set(string,Uno.UX.IPropertyListener)");
    uPtr(__this->_obj)->Url(v);
}

// public override sealed bool get_SupportsOriginSetter() :8
void UniEconomy_FuseControlsImage_Url_Property__get_SupportsOriginSetter_fn(UniEconomy_FuseControlsImage_Url_Property* __this, bool* __retval)
{
    uStackFrame __("UniEconomy_FuseControlsImage_Url_Property", "get_SupportsOriginSetter()");
    return *__retval = false, void();
}

// public UniEconomy_FuseControlsImage_Url_Property(Fuse.Controls.Image obj, Uno.UX.Selector name) [instance] :4
void UniEconomy_FuseControlsImage_Url_Property::ctor_2(::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector name)
{
    uStackFrame __("UniEconomy_FuseControlsImage_Url_Property", ".ctor(Fuse.Controls.Image,Uno.UX.Selector)");
    ctor_1(name);
    _obj = obj;
}

// public UniEconomy_FuseControlsImage_Url_Property New(Fuse.Controls.Image obj, Uno.UX.Selector name) [static] :4
UniEconomy_FuseControlsImage_Url_Property* UniEconomy_FuseControlsImage_Url_Property::New1(::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector name)
{
    UniEconomy_FuseControlsImage_Url_Property* obj1 = (UniEconomy_FuseControlsImage_Url_Property*)uNew(UniEconomy_FuseControlsImage_Url_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g
