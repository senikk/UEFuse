// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.android.widget.AbsoluteLayout.h>
#include <Android.Base.AndroidBindingMacros.h>
#include <Android.Base.JNI.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Uno.Bool.h>
#include <Uno.Exception.h>
#include <Uno.Type.h>

namespace g{
namespace Android{
namespace android{
namespace widget{

// /usr/local/share/uno/Packages/Android/0.31.1/Android/android/widget/$.uno
// -------------------------------------------------------------------------

// public extern class AbsoluteLayout :7557
// {
static void AbsoluteLayout_build(uType* type)
{
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5);
}

::g::Android::java::lang::Object_type* AbsoluteLayout_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(AbsoluteLayout);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.widget.AbsoluteLayout", options);
    type->SetBase(::g::Android::android::view::ViewGroup_typeof());
    type->fp_build_ = AbsoluteLayout_build;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    return type;
}

// public AbsoluteLayout(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) :7562
void AbsoluteLayout__ctor_16_fn(AbsoluteLayout* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType)
{
    __this->ctor_16(*obj, utype, *hasFallbackClass, *resolveType);
}

// public AbsoluteLayout(Android.Base.Primitives.ujobject obj, Uno.Type utype, bool hasFallbackClass, bool resolveType) [instance] :7562
void AbsoluteLayout::ctor_16(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType)
{
    uStackFrame __("Android.android.widget.AbsoluteLayout", ".ctor(Android.Base.Primitives.ujobject,Uno.Type,bool,bool)");
    ctor_12(obj, utype, hasFallbackClass, resolveType);
}
// }

}}}} // ::g::Android::android::widget
