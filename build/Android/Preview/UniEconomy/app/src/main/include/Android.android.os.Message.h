// This file was generated based on /usr/local/share/uno/Packages/Android/0.31.1/Android/android/os/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Android.java.lang.Object.h>
#include <jni.h>
#include <Uno.IDisposable.h>
namespace g{namespace Android{namespace android{namespace os{struct Message;}}}}
namespace g{namespace Android{namespace java{namespace lang{struct String;}}}}

namespace g{
namespace Android{
namespace android{
namespace os{

// public sealed extern class Message :6616
// {
::g::Android::java::lang::Object_type* Message_typeof();
void Message___Init2_fn();
void Message__toString_fn(Message* __this, ::g::Android::java::lang::String** __retval);
void Message__toString_IMPL_13885_fn(bool* arg0_, jobject* arg1_, uObject** __retval);

struct Message : ::g::Android::java::lang::Object
{
    static jclass _javaClass2_;
    static jclass& _javaClass2() { return _javaClass2_; }
    static jmethodID toString_13885_ID_;
    static jmethodID& toString_13885_ID() { return toString_13885_ID_; }

    static void _Init2();
    static uObject* toString_IMPL_13885(bool arg0_, jobject arg1_);
};
// }

}}}} // ::g::Android::android::os
