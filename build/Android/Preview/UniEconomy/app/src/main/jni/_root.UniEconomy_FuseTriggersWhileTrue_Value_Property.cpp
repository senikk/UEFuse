// This file was generated based on /Users/terjepedersen/Prosjekt/Fuse/UniEconomy/build/Android/Preview/cache/UniEconomy.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.UniEconomy_FuseTriggersWhileTrue_Value_Property.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Fuse.Triggers.WhileTrue.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class UniEconomy_FuseTriggersWhileTrue_Value_Property :28
// {
static void UniEconomy_FuseTriggersWhileTrue_Value_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::UX::PropertyObject_typeof();
    type->SetFields(1,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(::g::UniEconomy_FuseTriggersWhileTrue_Value_Property, _obj), 0);
}

::g::Uno::UX::Property1_type* UniEconomy_FuseTriggersWhileTrue_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(UniEconomy_FuseTriggersWhileTrue_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("UniEconomy_FuseTriggersWhileTrue_Value_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()));
    type->fp_build_ = UniEconomy_FuseTriggersWhileTrue_Value_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))UniEconomy_FuseTriggersWhileTrue_Value_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))UniEconomy_FuseTriggersWhileTrue_Value_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))UniEconomy_FuseTriggersWhileTrue_Value_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))UniEconomy_FuseTriggersWhileTrue_Value_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public UniEconomy_FuseTriggersWhileTrue_Value_Property(Fuse.Triggers.WhileTrue obj, Uno.UX.Selector name) :31
void UniEconomy_FuseTriggersWhileTrue_Value_Property__ctor_2_fn(UniEconomy_FuseTriggersWhileTrue_Value_Property* __this, ::g::Fuse::Triggers::WhileTrue* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed bool Get() :33
void UniEconomy_FuseTriggersWhileTrue_Value_Property__Get_fn(UniEconomy_FuseTriggersWhileTrue_Value_Property* __this, bool* __retval)
{
    uStackFrame __("UniEconomy_FuseTriggersWhileTrue_Value_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->Value1(), void();
}

// public UniEconomy_FuseTriggersWhileTrue_Value_Property New(Fuse.Triggers.WhileTrue obj, Uno.UX.Selector name) :31
void UniEconomy_FuseTriggersWhileTrue_Value_Property__New1_fn(::g::Fuse::Triggers::WhileTrue* obj, ::g::Uno::UX::Selector* name, UniEconomy_FuseTriggersWhileTrue_Value_Property** __retval)
{
    *__retval = UniEconomy_FuseTriggersWhileTrue_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :32
void UniEconomy_FuseTriggersWhileTrue_Value_Property__get_Object_fn(UniEconomy_FuseTriggersWhileTrue_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    uStackFrame __("UniEconomy_FuseTriggersWhileTrue_Value_Property", "get_Object()");
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(bool v, Uno.UX.IPropertyListener origin) :34
void UniEconomy_FuseTriggersWhileTrue_Value_Property__Set_fn(UniEconomy_FuseTriggersWhileTrue_Value_Property* __this, bool* v, uObject* origin)
{
    uStackFrame __("UniEconomy_FuseTriggersWhileTrue_Value_Property", "Set(bool,Uno.UX.IPropertyListener)");
    bool v_ = *v;
    uPtr(__this->_obj)->Value1(v_);
}

// public override sealed bool get_SupportsOriginSetter() :35
void UniEconomy_FuseTriggersWhileTrue_Value_Property__get_SupportsOriginSetter_fn(UniEconomy_FuseTriggersWhileTrue_Value_Property* __this, bool* __retval)
{
    uStackFrame __("UniEconomy_FuseTriggersWhileTrue_Value_Property", "get_SupportsOriginSetter()");
    return *__retval = false, void();
}

// public UniEconomy_FuseTriggersWhileTrue_Value_Property(Fuse.Triggers.WhileTrue obj, Uno.UX.Selector name) [instance] :31
void UniEconomy_FuseTriggersWhileTrue_Value_Property::ctor_2(::g::Fuse::Triggers::WhileTrue* obj, ::g::Uno::UX::Selector name)
{
    uStackFrame __("UniEconomy_FuseTriggersWhileTrue_Value_Property", ".ctor(Fuse.Triggers.WhileTrue,Uno.UX.Selector)");
    ctor_1(name);
    _obj = obj;
}

// public UniEconomy_FuseTriggersWhileTrue_Value_Property New(Fuse.Triggers.WhileTrue obj, Uno.UX.Selector name) [static] :31
UniEconomy_FuseTriggersWhileTrue_Value_Property* UniEconomy_FuseTriggersWhileTrue_Value_Property::New1(::g::Fuse::Triggers::WhileTrue* obj, ::g::Uno::UX::Selector name)
{
    UniEconomy_FuseTriggersWhileTrue_Value_Property* obj1 = (UniEconomy_FuseTriggersWhileTrue_Value_Property*)uNew(UniEconomy_FuseTriggersWhileTrue_Value_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g
