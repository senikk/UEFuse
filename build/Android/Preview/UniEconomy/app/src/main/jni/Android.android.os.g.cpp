// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.android.os.Build.h>
#include <Android.android.os.Bundle.h>
#include <Android.android.os.Message.h>
#include <Android.Base.AndroidBindingMacros.h>
#include <Android.Base.JNI.h>
#include <Android.Base.Primitives.jfieldID.h>
#include <Android.Base.Primitives.jmethodID.h>
#include <Android.Base.Primitives.ujclass.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.java.lang.String.h>
#include <Uno.Bool.h>
#include <Uno.Exception.h>
static uType* TYPES[1];

namespace g{
namespace Android{
namespace android{
namespace os{

// /usr/local/share/uno/Packages/Android/0.31.1/Android/android/os/$.uno
// ---------------------------------------------------------------------

// public sealed extern class Build :2666
// {
static void Build_build(uType* type)
{
    ::TYPES[0] = ::g::Android::java::lang::String_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::os::Build::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::os::Build::MODEL_13483_ID_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jfieldID_typeof(), (uintptr_t)&::g::Android::android::os::Build::SERIAL_13487_ID_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(3,
        new uFunction("_Init", NULL, (void*)Build___Init2_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("get_MODEL", NULL, (void*)Build__get_MODEL_fn, 0, true, ::g::Android::java::lang::String_typeof(), 0),
        new uFunction("get_SERIAL", NULL, (void*)Build__get_SERIAL_fn, 0, true, ::g::Android::java::lang::String_typeof(), 0));
}

::g::Android::java::lang::Object_type* Build_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Build);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.os.Build", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_build_ = Build_build;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    return type;
}

// public static extern new void _Init() :2670
void Build___Init2_fn()
{
    Build::_Init2();
}

// public static Android.java.lang.String get_MODEL() :2845
void Build__get_MODEL_fn(::g::Android::java::lang::String** __retval)
{
    *__retval = Build::MODEL();
}

// public static Android.java.lang.String get_SERIAL() :2913
void Build__get_SERIAL_fn(::g::Android::java::lang::String** __retval)
{
    *__retval = Build::SERIAL();
}

jclass Build::_javaClass2_;
jfieldID Build::MODEL_13483_ID_;
jfieldID Build::SERIAL_13487_ID_;

// public static extern new void _Init() [static] :2670
void Build::_Init2()
{
    uStackFrame __("Android.android.os.Build", "_Init()");
    if (Build::_javaClass2()) { return; }
    INIT_JNI;
    Build::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/os/Build"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!Build::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.os.Build'", 40);; }
}

// public static Android.java.lang.String get_MODEL() [static] :2845
::g::Android::java::lang::String* Build::MODEL()
{
    uStackFrame __("Android.android.os.Build", "get_MODEL()");
    INIT_JNI;
    CLASS_INIT(Build::_javaClass2(),Build::_Init2());
    if (::uEnterCriticalIfNull(&Build::MODEL_13483_ID())) {;
    CACHE_FIELD(Build::MODEL_13483_ID(),Build::_javaClass2(),"MODEL","Ljava/lang/String;",GetStaticFieldID,"Id for field Build.MODEL could not be cached",44);
    ::uExitCritical();;
    };
    ::g::Android::java::lang::String* result;;
    NEW_UNO(U_JNIVAR->GetStaticObjectField(Build::_javaClass2(), Build::MODEL_13483_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);;
    return uCast< ::g::Android::java::lang::String*>(result, ::TYPES[0/*Android.java.lang.String*/]);
}

// public static Android.java.lang.String get_SERIAL() [static] :2913
::g::Android::java::lang::String* Build::SERIAL()
{
    uStackFrame __("Android.android.os.Build", "get_SERIAL()");
    INIT_JNI;
    CLASS_INIT(Build::_javaClass2(),Build::_Init2());
    if (::uEnterCriticalIfNull(&Build::SERIAL_13487_ID())) {;
    CACHE_FIELD(Build::SERIAL_13487_ID(),Build::_javaClass2(),"SERIAL","Ljava/lang/String;",GetStaticFieldID,"Id for field Build.SERIAL could not be cached",45);
    ::uExitCritical();;
    };
    ::g::Android::java::lang::String* result;;
    NEW_UNO(U_JNIVAR->GetStaticObjectField(Build::_javaClass2(), Build::SERIAL_13487_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);;
    return uCast< ::g::Android::java::lang::String*>(result, ::TYPES[0/*Android.java.lang.String*/]);
}
// }

// /usr/local/share/uno/Packages/Android/0.31.1/Android/android/os/$.uno
// ---------------------------------------------------------------------

// public sealed extern class Bundle :3069
// {
static void Bundle_build(uType* type)
{
    ::TYPES[0] = ::g::Android::java::lang::String_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::os::Bundle::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::os::Bundle::toString_13587_ID_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(2,
        new uFunction("_Init", NULL, (void*)Bundle___Init2_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("toString_IMPL_13587", NULL, (void*)Bundle__toString_IMPL_13587_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()));
}

::g::Android::java::lang::Object_type* Bundle_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Bundle);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.os.Bundle", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_build_ = Bundle_build;
    type->fp_toString = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::String**))Bundle__toString_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    return type;
}

// public static extern new void _Init() :3073
void Bundle___Init2_fn()
{
    Bundle::_Init2();
}

// public override sealed Android.java.lang.String toString() :3683
void Bundle__toString_fn(Bundle* __this, ::g::Android::java::lang::String** __retval)
{
    uStackFrame __("Android.android.os.Bundle", "toString()");
    return *__retval = uCast< ::g::Android::java::lang::String*>(Bundle::toString_IMPL_13587(__this->_subclassed, __this->_javaObject), ::TYPES[0/*Android.java.lang.String*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_13587(bool arg0, Android.Base.Primitives.ujobject arg1) :3949
void Bundle__toString_IMPL_13587_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Bundle::toString_IMPL_13587(*arg0_, *arg1_);
}

jclass Bundle::_javaClass2_;
jmethodID Bundle::toString_13587_ID_;

// public static extern new void _Init() [static] :3073
void Bundle::_Init2()
{
    uStackFrame __("Android.android.os.Bundle", "_Init()");
    if (Bundle::_javaClass2()) { return; }
    INIT_JNI;
    Bundle::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/os/Bundle"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!Bundle::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.os.Bundle'", 41);; }
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_13587(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :3949
uObject* Bundle::toString_IMPL_13587(bool arg0_, jobject arg1_)
{
    uStackFrame __("Android.android.os.Bundle", "toString_IMPL_13587(bool,Android.Base.Primitives.ujobject)");
    INIT_JNI;
    CLASS_INIT(Bundle::_javaClass2(),Bundle::_Init2());
    
    uObject* result;
    CACHE_METHOD(Bundle::toString_13587_ID(),Bundle::_javaClass2(),"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.os.Bundle.toString could not be cached",69);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, Bundle::_javaClass2(), Bundle::toString_13587_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Bundle::toString_13587_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

// /usr/local/share/uno/Packages/Android/0.31.1/Android/android/os/$.uno
// ---------------------------------------------------------------------

// public sealed extern class Message :6616
// {
static void Message_build(uType* type)
{
    ::TYPES[0] = ::g::Android::java::lang::String_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::java::lang::Object_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::java::lang::Object_type, interface1));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Android::android::os::Message::_javaClass2_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&::g::Android::android::os::Message::toString_13885_ID_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(2,
        new uFunction("_Init", NULL, (void*)Message___Init2_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("toString_IMPL_13885", NULL, (void*)Message__toString_IMPL_13885_fn, 0, true, ::g::Android::Base::Wrappers::IJWrapper_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Android::Base::Primitives::ujobject_typeof()));
}

::g::Android::java::lang::Object_type* Message_typeof()
{
    static uSStrong< ::g::Android::java::lang::Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Message);
    options.TypeSize = sizeof(::g::Android::java::lang::Object_type);
    type = (::g::Android::java::lang::Object_type*)uClassType::New("Android.android.os.Message", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_build_ = Message_build;
    type->fp_toString = (void(*)(::g::Android::java::lang::Object*, ::g::Android::java::lang::String**))Message__toString_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    return type;
}

// public static extern new void _Init() :6620
void Message___Init2_fn()
{
    Message::_Init2();
}

// public override sealed Android.java.lang.String toString() :6889
void Message__toString_fn(Message* __this, ::g::Android::java::lang::String** __retval)
{
    uStackFrame __("Android.android.os.Message", "toString()");
    return *__retval = uCast< ::g::Android::java::lang::String*>(Message::toString_IMPL_13885(__this->_subclassed, __this->_javaObject), ::TYPES[0/*Android.java.lang.String*/]), void();
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_13885(bool arg0, Android.Base.Primitives.ujobject arg1) :6963
void Message__toString_IMPL_13885_fn(bool* arg0_, jobject* arg1_, uObject** __retval)
{
    *__retval = Message::toString_IMPL_13885(*arg0_, *arg1_);
}

jclass Message::_javaClass2_;
jmethodID Message::toString_13885_ID_;

// public static extern new void _Init() [static] :6620
void Message::_Init2()
{
    uStackFrame __("Android.android.os.Message", "_Init()");
    if (Message::_javaClass2()) { return; }
    INIT_JNI;
    Message::_javaClass2() = NEW_GLOBAL_REF(jclass,LOAD_SYS_CLASS("android/os/Message"));
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    if (!Message::_javaClass2()) { THROW_UNO_EXCEPTION("Unable to cache class 'android.os.Message'", 42);; }
}

// public static extern Android.Base.Wrappers.IJWrapper toString_IMPL_13885(bool arg0, Android.Base.Primitives.ujobject arg1) [static] :6963
uObject* Message::toString_IMPL_13885(bool arg0_, jobject arg1_)
{
    uStackFrame __("Android.android.os.Message", "toString_IMPL_13885(bool,Android.Base.Primitives.ujobject)");
    INIT_JNI;
    CLASS_INIT(Message::_javaClass2(),Message::_Init2());
    
    uObject* result;
    CACHE_METHOD(Message::toString_13885_ID(),Message::_javaClass2(),"toString","()Ljava/lang/String;",GetMethodID,"Id for fallback method android.os.Message.toString could not be cached",70);
    if (arg0_) {
        NEW_UNO(U_JNIVAR->CallNonvirtualObjectMethod(arg1_, Message::_javaClass2(), Message::toString_13885_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    else
    {
        NEW_UNO(U_JNIVAR->CallObjectMethod(arg1_, Message::toString_13885_ID()),result,::g::Android::java::lang::String_typeof(),::g::Android::java::lang::String*,false,true);
    }
    ::g::Android::Base::JNI::CheckException1(U_JNIVAR);
    return result;
}
// }

}}}} // ::g::Android::android::os
