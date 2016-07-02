// This file was generated based on /usr/local/share/uno/Packages/Android/0.31.1/Android/android/app/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.android.view.ContextThemeWrapper.h>
#include <Android.Base.Wrappers.IJWrapper.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace app{struct Activity;}}}}

namespace g{
namespace Android{
namespace android{
namespace app{

// public sealed extern class Activity :1266
// {
::g::Android::java::lang::Object_type* Activity_typeof();
void Activity__ctor_13_fn(Activity* __this, jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType);
void Activity__GetAppActivity_fn(Activity** __retval);
void Activity__New11_fn(jobject* obj, uType* utype, bool* hasFallbackClass, bool* resolveType, Activity** __retval);

struct Activity : ::g::Android::android::view::ContextThemeWrapper
{
    void ctor_13(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType);
    static Activity* GetAppActivity();
    static Activity* New11(jobject obj, uType* utype, bool hasFallbackClass, bool resolveType);
};
// }

}}}} // ::g::Android::android::app
