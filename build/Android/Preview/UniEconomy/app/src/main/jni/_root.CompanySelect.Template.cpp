// This file was generated based on /Users/terjepedersen/Prosjekt/Fuse/UniEconomy/build/Android/Preview/cache/CompanySelect.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.CompanyItem.h>
#include <_root.CompanySelect.h>
#include <_root.CompanySelect.Template.h>
#include <Uno.Bool.h>
#include <Uno.Object.h>
#include <Uno.String.h>
static uType* TYPES[1];

namespace g{

// public partial sealed class CompanySelect.Template :5
// {
// static Template() :12
static void CompanySelect__Template__cctor__fn(uType* __type)
{
}

static void CompanySelect__Template_build(uType* type)
{
    ::TYPES[0] = uObject_typeof();
    type->SetFields(2,
        ::g::CompanySelect_typeof(), offsetof(::g::CompanySelect__Template, __parent1), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)CompanySelect__Template__New2_fn, 0, true, CompanySelect__Template_typeof(), 1, ::g::CompanySelect_typeof()));
}

::g::Uno::UX::Template_type* CompanySelect__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(CompanySelect__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("CompanySelect.Template", options);
    type->SetBase(::g::Uno::UX::Template_typeof());
    type->fp_build_ = CompanySelect__Template_build;
    type->fp_cctor_ = CompanySelect__Template__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))CompanySelect__Template__New1_fn;
    return type;
}

// public Template(CompanySelect parent) :8
void CompanySelect__Template__ctor_1_fn(CompanySelect__Template* __this, ::g::CompanySelect* parent)
{
    __this->ctor_1(parent);
}

// public override sealed object New() :15
void CompanySelect__Template__New1_fn(CompanySelect__Template* __this, uObject** __retval)
{
    uStackFrame __("CompanySelect.Template", "New()");
    ::g::CompanyItem* self = ::g::CompanyItem::New5();
    return *__retval = self, void();
}

// public Template New(CompanySelect parent) :8
void CompanySelect__Template__New2_fn(::g::CompanySelect* parent, CompanySelect__Template** __retval)
{
    *__retval = CompanySelect__Template::New2(parent);
}

// public Template(CompanySelect parent) [instance] :8
void CompanySelect__Template::ctor_1(::g::CompanySelect* parent)
{
    uStackFrame __("CompanySelect.Template", ".ctor(CompanySelect)");
    ctor_(NULL, false);
    __parent1 = parent;
}

// public Template New(CompanySelect parent) [static] :8
CompanySelect__Template* CompanySelect__Template::New2(::g::CompanySelect* parent)
{
    CompanySelect__Template* obj1 = (CompanySelect__Template*)uNew(CompanySelect__Template_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

} // ::g
