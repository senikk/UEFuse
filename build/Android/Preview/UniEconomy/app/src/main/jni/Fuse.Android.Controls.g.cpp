// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.android.app.Activity.h>
#include <Android.android.content.Context.h>
#include <Android.android.graphics.Bitmap.h>
#include <Android.android.webkit.WebChromeClient.h>
#include <Android.android.webkit.WebSettings.h>
#include <Android.android.webkit.WebView.h>
#include <Android.android.webkit.WebViewClient.h>
#include <Android.Base.JNI.h>
#include <Android.Base.Primitives.jmethodID.h>
#include <Android.Base.Primitives.ujclass.h>
#include <Android.Base.Primitives.ujlong.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Primitives.ujvalue.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.java.lang.Object.h>
#include <Android.java.lang.String.h>
#include <Android.java.util.Observable.h>
#include <Android.java.util.Observer.h>
#include <Android.Runtime.UnoHelper.h>
#include <Fuse.Android.Controls.JsResultHandler.h>
#include <Fuse.Android.Controls.WebChromeClient.h>
#include <Fuse.Android.Controls.WebView.h>
#include <Fuse.Android.Controls.WebViewClient.h>
#include <Fuse.Controls.Native.Android.View.h>
#include <Fuse.Controls.WebView.h>
#include <Fuse.Navigation.HistoryChangedHandler.h>
#include <Java.Object.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.ValueChangedArgs-1.h>
#include <Uno.UX.ValueChangedHandler-1.h>
//~
JNFUN(jboolean,Binding_Fuse_Android_Controls_WebViewClient__shouldOverrideUrlLoading24355,jlong ujPtr, jobject arg0, jobject arg1, jlong arg2, jlong arg3) {
    INITCALLBACK(uPtr,::g::Android::android::webkit::WebViewClient*);
    JARG_TO_UNO(arg2,::g::Android::android::webkit::WebView*,((::g::Android::android::webkit::WebView*)::g::Android::Base::Wrappers::JWrapper::New2(arg0, (uType*)::g::Android::android::webkit::WebView_typeof(), false, true, true)));
    JARG_TO_UNO(arg3,::g::Android::java::lang::String*,((::g::Android::java::lang::String*)::g::Android::Base::Wrappers::JWrapper::New2(arg1, (uType*)::g::Android::java::lang::String_typeof(), false, true, true)));
    JTRY
    return (jboolean)uPtr->shouldOverrideUrlLoading(tmparg2, tmparg3);
    JCATCH
}
JNFUN(void,Binding_Fuse_Android_Controls_JsResultHandler__update38392,jlong ujPtr, jobject arg0, jobject arg1, jlong arg2, jlong arg3) {
    INITCALLBACK(uPtr,uObject*);
    JARG_TO_UNO(arg2,::g::Android::java::util::Observable*,((::g::Android::java::util::Observable*)::g::Android::Base::Wrappers::JWrapper::New2(arg0, (uType*)::g::Android::java::util::Observable_typeof(), false, true, true)));
    JARG_TO_UNO(arg3,::g::Android::java::lang::Object*,((::g::Android::java::lang::Object*)::g::Android::Base::Wrappers::JWrapper::New2(arg1, (uType*)::g::Android::java::lang::Object_typeof(), false, true, true)));
    JTRY
    ::g::Android::java::util::Observer::update(uInterface(uPtr, ::g::Android::java::util::Observer_typeof()), tmparg2, tmparg3);
    JCATCH
}
JNFUN(void,Binding_Fuse_Android_Controls_WebChromeClient__onProgressChanged24000,jlong ujPtr, jobject arg0, jint arg1, jlong arg2, jlong arg3) {
    INITCALLBACK(uPtr,::g::Android::android::webkit::WebChromeClient*);
    JARG_TO_UNO(arg2,::g::Android::android::webkit::WebView*,((::g::Android::android::webkit::WebView*)::g::Android::Base::Wrappers::JWrapper::New2(arg0, (uType*)::g::Android::android::webkit::WebView_typeof(), false, true, true)));
    JTRY
    uPtr->onProgressChanged(tmparg2, ((int)arg1));
    JCATCH
}
JNFUN(void,Binding_Fuse_Android_Controls_WebViewClient__onPageFinished24357,jlong ujPtr, jobject arg0, jobject arg1, jlong arg2, jlong arg3) {
    INITCALLBACK(uPtr,::g::Android::android::webkit::WebViewClient*);
    JARG_TO_UNO(arg2,::g::Android::android::webkit::WebView*,((::g::Android::android::webkit::WebView*)::g::Android::Base::Wrappers::JWrapper::New2(arg0, (uType*)::g::Android::android::webkit::WebView_typeof(), false, true, true)));
    JARG_TO_UNO(arg3,::g::Android::java::lang::String*,((::g::Android::java::lang::String*)::g::Android::Base::Wrappers::JWrapper::New2(arg1, (uType*)::g::Android::java::lang::String_typeof(), false, true, true)));
    JTRY
    uPtr->onPageFinished(tmparg2, tmparg3);
    JCATCH
}
JNFUN(void,Binding_Fuse_Android_Controls_WebViewClient__onPageStarted24356,jlong ujPtr, jobject arg0, jobject arg1, jobject arg2, jlong arg3, jlong arg4, jlong arg5) {
    INITCALLBACK(uPtr,::g::Android::android::webkit::WebViewClient*);
    JARG_TO_UNO(arg3,::g::Android::android::webkit::WebView*,((::g::Android::android::webkit::WebView*)::g::Android::Base::Wrappers::JWrapper::New2(arg0, (uType*)::g::Android::android::webkit::WebView_typeof(), false, true, true)));
    JARG_TO_UNO(arg4,::g::Android::java::lang::String*,((::g::Android::java::lang::String*)::g::Android::Base::Wrappers::JWrapper::New2(arg1, (uType*)::g::Android::java::lang::String_typeof(), false, true, true)));
    JARG_TO_UNO(arg5,::g::Android::android::graphics::Bitmap*,((::g::Android::android::graphics::Bitmap*)::g::Android::Base::Wrappers::JWrapper::New2(arg2, (uType*)::g::Android::android::graphics::Bitmap_typeof(), false, true, true)));
    JTRY
    uPtr->onPageStarted(tmparg3, tmparg4, tmparg5);
    JCATCH
}
static uString* STRINGS[14];
static uType* TYPES[15];

namespace g{
namespace Fuse{
namespace Android{
namespace Controls{

// /usr/local/share/uno/Packages/Fuse.Controls.WebView/0.31.5/Android/$.uno
// ------------------------------------------------------------------------

// internal sealed extern class JsResultHandler :23
// {
static void JsResultHandler_build(uType* type)
{
    ::STRINGS[0] = uString::Const("com.Bindings.Binding_Fuse_Android_Controls_JsResultHandler");
    ::STRINGS[1] = uString::Const("<init>");
    ::STRINGS[2] = uString::Const("(J)V");
    ::STRINGS[3] = uString::Const(".forceNotifyObservers( eval('");
    ::STRINGS[4] = uString::Const("') );");
    ::TYPES[0] = ::g::Uno::Delegate_typeof();
    ::TYPES[1] = ::g::Android::java::lang::String_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(JsResultHandler_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(JsResultHandler_type, interface1),
        ::g::Android::java::util::Observer_typeof(), offsetof(JsResultHandler_type, interface2));
    type->SetFields(5,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Android::Controls::JsResultHandler, _name), 0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Fuse::Android::Controls::JsResultHandler, Callback), 0,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Fuse::Android::Controls::JsResultHandler::_javaClass2_, uFieldFlagsStatic);
}

JsResultHandler_type* JsResultHandler_typeof()
{
    static uSStrong<JsResultHandler_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(JsResultHandler);
    options.TypeSize = sizeof(JsResultHandler_type);
    type = (JsResultHandler_type*)uClassType::New("Fuse.Android.Controls.JsResultHandler", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_build_ = JsResultHandler_build;
    type->interface2.fp_update = (void(*)(uObject*, ::g::Android::java::util::Observable*, ::g::Android::java::lang::Object*))JsResultHandler__update_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    return type;
}

// public JsResultHandler(string name, Uno.Action<string> callback) :28
void JsResultHandler__ctor_5_fn(JsResultHandler* __this, uString* name, uDelegate* callback)
{
    __this->ctor_5(name, callback);
}

// public string getExpr(string js) :44
void JsResultHandler__getExpr_fn(JsResultHandler* __this, uString* js, uString** __retval)
{
    *__retval = __this->getExpr(js);
}

// public string get_Name() :41
void JsResultHandler__get_Name_fn(JsResultHandler* __this, uString** __retval)
{
    *__retval = __this->Name();
}

// public JsResultHandler New(string name, Uno.Action<string> callback) :28
void JsResultHandler__New5_fn(uString* name, uDelegate* callback, JsResultHandler** __retval)
{
    *__retval = JsResultHandler::New5(name, callback);
}

// public void update(Android.java.util.Observable observable, Android.java.lang.Object data) :34
void JsResultHandler__update_fn(JsResultHandler* __this, ::g::Android::java::util::Observable* observable, ::g::Android::java::lang::Object* data)
{
    __this->update(observable, data);
}

jclass JsResultHandler::_javaClass2_;

// public JsResultHandler(string name, Uno.Action<string> callback) [instance] :28
void JsResultHandler::ctor_5(uString* name, uDelegate* callback)
{
    uStackFrame __("Fuse.Android.Controls.JsResultHandler", ".ctor(string,Uno.Action<string>)");

    if (!_subclassed)
    {
        _subclassed = true;
        _javaClassName = ::STRINGS[0/*"com.Binding...*/];
    }

    ctor_4(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);

    if (::g::Android::Base::Primitives::ujclass::op_Equality(JsResultHandler::_javaClass2_, ::g::Android::Base::Primitives::ujclass::Null()))
    {
        JsResultHandler::_javaClass2_ = ::g::Android::Base::JNI::LocalToGlobalRef(::g::Android::Base::JNI::LoadClass3(::STRINGS[0/*"com.Binding...*/], false));
        JniHelper jni;
        BEGIN_REG_MTD(1);
        REG_MTD(0,"__n_update","(JLjava/util/Observable;Ljava/lang/Object;JJ)V",Binding_Fuse_Android_Controls_JsResultHandler__update38392);
        COMMIT_REG_MTD(JsResultHandler::_javaClass2_);
    }

    jclass tmpCls = ::g::Android::Base::JNI::LoadClass3(_javaClassName, false);
    jmethodID mtd = ::g::Android::Base::JNI::GetMethodID(tmpCls, ::STRINGS[1/*"<init>"*/], ::STRINGS[2/*"(J)V"*/]);
    jobject tmp = ::g::Android::Base::JNI::NewObject1(tmpCls, mtd, ::g::Android::Base::Primitives::ujvalue::op_Implicit7((jlong)this->__weakptr));
    ::g::Android::Base::JNI::CheckException();
    _javaObject = ::g::Android::Base::JNI::LocalToGlobalRef1(tmp);
    ::g::Android::Base::JNI::DeleteLocalRef(tmpCls);
    _name = name;
    Callback = callback;
}

// public string getExpr(string js) [instance] :44
uString* JsResultHandler::getExpr(uString* js)
{
    uStackFrame __("Fuse.Android.Controls.JsResultHandler", "getExpr(string)");
    return ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(Name(), ::STRINGS[3/*".forceNotif...*/]), js), ::STRINGS[4/*"') );"*/]);
}

// public string get_Name() [instance] :41
uString* JsResultHandler::Name()
{
    uStackFrame __("Fuse.Android.Controls.JsResultHandler", "get_Name()");
    return _name;
}

// public void update(Android.java.util.Observable observable, Android.java.lang.Object data) [instance] :34
void JsResultHandler::update(::g::Android::java::util::Observable* observable, ::g::Android::java::lang::Object* data)
{
    uStackFrame __("Fuse.Android.Controls.JsResultHandler", "update(Android.java.util.Observable,Android.java.lang.Object)");

    if (::g::Uno::Delegate::op_Inequality(Callback, NULL))
        uPtr(Callback)->InvokeVoid(::g::Android::java::lang::String::op_Implicit(uCast< ::g::Android::java::lang::String*>(data, ::TYPES[1/*Android.java.lang.String*/])));
}

// public JsResultHandler New(string name, Uno.Action<string> callback) [static] :28
JsResultHandler* JsResultHandler::New5(uString* name, uDelegate* callback)
{
    JsResultHandler* obj1 = (JsResultHandler*)uNew(JsResultHandler_typeof());
    obj1->ctor_5(name, callback);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.WebView/0.31.5/Android/$.uno
// ------------------------------------------------------------------------

// internal sealed extern class WebChromeClient :249
// {
static void WebChromeClient_build(uType* type)
{
    ::STRINGS[5] = uString::Const("com.Bindings.Binding_Fuse_Android_Controls_WebChromeClient");
    ::STRINGS[1] = uString::Const("<init>");
    ::STRINGS[2] = uString::Const("(J)V");
    ::TYPES[0] = ::g::Uno::Delegate_typeof();
    ::TYPES[2] = uObject_typeof();
    ::TYPES[3] = ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::Double_typeof());
    ::TYPES[4] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof());
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::android::webkit::WebChromeClient_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::android::webkit::WebChromeClient_type, interface1));
    type->SetFields(5,
        ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof()), offsetof(::g::Fuse::Android::Controls::WebChromeClient, ProgressChanged1), 0,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Fuse::Android::Controls::WebChromeClient::_javaClass3_, uFieldFlagsStatic);
}

::g::Android::android::webkit::WebChromeClient_type* WebChromeClient_typeof()
{
    static uSStrong< ::g::Android::android::webkit::WebChromeClient_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(WebChromeClient);
    options.TypeSize = sizeof(::g::Android::android::webkit::WebChromeClient_type);
    type = (::g::Android::android::webkit::WebChromeClient_type*)uClassType::New("Fuse.Android.Controls.WebChromeClient", options);
    type->SetBase(::g::Android::android::webkit::WebChromeClient_typeof());
    type->fp_build_ = WebChromeClient_build;
    type->fp_ctor_ = (void*)WebChromeClient__New7_fn;
    type->fp_onProgressChanged = (void(*)(::g::Android::android::webkit::WebChromeClient*, ::g::Android::android::webkit::WebView*, int*))WebChromeClient__onProgressChanged_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    return type;
}

// public generated WebChromeClient() :249
void WebChromeClient__ctor_7_fn(WebChromeClient* __this)
{
    __this->ctor_7();
}

// public generated WebChromeClient New() :249
void WebChromeClient__New7_fn(WebChromeClient** __retval)
{
    *__retval = WebChromeClient::New7();
}

// public override sealed void onProgressChanged(Android.android.webkit.WebView arg0, int arg1) :254
void WebChromeClient__onProgressChanged_fn(WebChromeClient* __this, ::g::Android::android::webkit::WebView* arg0, int* arg1)
{
    uStackFrame __("Fuse.Android.Controls.WebChromeClient", "onProgressChanged(Android.android.webkit.WebView,int)");
    int arg1_ = *arg1;
    ::g::Uno::UX::ValueChangedArgs* ret2;
    ::g::Android::android::webkit::WebChromeClient__onProgressChanged_fn(__this, arg0, uCRef<int>(arg1_));

    if (::g::Uno::Delegate::op_Inequality(__this->ProgressChanged1, NULL))
        uPtr(__this->ProgressChanged1)->Invoke(2, __this, (::g::Uno::UX::ValueChangedArgs__New2_fn(::TYPES[3/*Uno.UX.ValueChangedArgs<double>*/], uCRef((double)uPtr(arg0)->getProgress() / 100.0), &ret2), ret2));
}

// public generated void add_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) :252
void WebChromeClient__add_ProgressChanged_fn(WebChromeClient* __this, uDelegate* value)
{
    __this->add_ProgressChanged(value);
}

// public generated void remove_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) :252
void WebChromeClient__remove_ProgressChanged_fn(WebChromeClient* __this, uDelegate* value)
{
    __this->remove_ProgressChanged(value);
}

jclass WebChromeClient::_javaClass3_;

// public generated WebChromeClient() [instance] :249
void WebChromeClient::ctor_7()
{
    uStackFrame __("Fuse.Android.Controls.WebChromeClient", ".ctor()");

    if (!_subclassed)
    {
        _subclassed = true;
        _javaClassName = ::STRINGS[5/*"com.Binding...*/];
    }

    ctor_6(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);

    if (::g::Android::Base::Primitives::ujclass::op_Equality(WebChromeClient::_javaClass3_, ::g::Android::Base::Primitives::ujclass::Null()))
    {
        WebChromeClient::_javaClass3_ = ::g::Android::Base::JNI::LocalToGlobalRef(::g::Android::Base::JNI::LoadClass3(::STRINGS[5/*"com.Binding...*/], false));
        JniHelper jni;
        BEGIN_REG_MTD(1);
        REG_MTD(0,"__n_onProgressChanged","(JLandroid/webkit/WebView;IJJ)V",Binding_Fuse_Android_Controls_WebChromeClient__onProgressChanged24000);
        COMMIT_REG_MTD(WebChromeClient::_javaClass3_);
    }

    jclass tmpCls = ::g::Android::Base::JNI::LoadClass3(_javaClassName, false);
    jmethodID mtd = ::g::Android::Base::JNI::GetMethodID(tmpCls, ::STRINGS[1/*"<init>"*/], ::STRINGS[2/*"(J)V"*/]);
    jobject tmp = ::g::Android::Base::JNI::NewObject1(tmpCls, mtd, ::g::Android::Base::Primitives::ujvalue::op_Implicit7((jlong)this->__weakptr));
    ::g::Android::Base::JNI::CheckException();
    _javaObject = ::g::Android::Base::JNI::LocalToGlobalRef1(tmp);
    ::g::Android::Base::JNI::DeleteLocalRef(tmpCls);
}

// public generated void add_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) [instance] :252
void WebChromeClient::add_ProgressChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Android.Controls.WebChromeClient", "add_ProgressChanged(Uno.UX.ValueChangedHandler<double>)");
    ProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ProgressChanged1, value), ::TYPES[4/*Uno.UX.ValueChangedHandler<double>*/]);
}

// public generated void remove_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) [instance] :252
void WebChromeClient::remove_ProgressChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Android.Controls.WebChromeClient", "remove_ProgressChanged(Uno.UX.ValueChangedHandler<double>)");
    ProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ProgressChanged1, value), ::TYPES[4/*Uno.UX.ValueChangedHandler<double>*/]);
}

// public generated WebChromeClient New() [static] :249
WebChromeClient* WebChromeClient::New7()
{
    WebChromeClient* obj1 = (WebChromeClient*)uNew(WebChromeClient_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.WebView/0.31.5/Android/$.uno
// ------------------------------------------------------------------------

// public sealed extern class WebView :49
// {
static void WebView_build(uType* type)
{
    ::STRINGS[6] = uString::Const("FuseJSHandler");
    ::STRINGS[7] = uString::Const("javascript:");
    ::STRINGS[8] = uString::Const("");
    ::STRINGS[9] = uString::Const("text/html");
    ::STRINGS[10] = uString::Const("UTF-8");
    ::STRINGS[11] = uString::Const("utf-8");
    ::STRINGS[12] = uString::Const("about:blank");
    ::TYPES[5] = ::g::Java::Object_typeof();
    ::TYPES[6] = ::g::Android::java::util::Observer_typeof();
    ::TYPES[7] = ::g::Android::android::webkit::WebViewClient_typeof();
    ::TYPES[8] = ::g::Android::android::webkit::WebChromeClient_typeof();
    ::TYPES[9] = ::g::Android::java::lang::Object_typeof();
    ::TYPES[10] = ::g::Fuse::Controls::IWebView_typeof();
    ::TYPES[11] = ::g::Android::android::content::Context_typeof();
    ::TYPES[12] = ::g::Uno::Exception_typeof();
    ::TYPES[0] = ::g::Uno::Delegate_typeof();
    ::TYPES[2] = uObject_typeof();
    ::TYPES[13] = ::g::Fuse::Navigation::HistoryChangedHandler_typeof();
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(WebView_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(WebView_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(WebView_type, interface2),
        ::g::Fuse::Controls::IWebView_typeof(), offsetof(WebView_type, interface3),
        ::g::Fuse::Triggers::IProgress_typeof(), offsetof(WebView_type, interface4),
        ::g::Fuse::Navigation::IBaseNavigation_typeof(), offsetof(WebView_type, interface5),
        ::g::Fuse::Controls::ISourceReceiver_typeof(), offsetof(WebView_type, interface6));
    type->SetFields(6,
        ::g::Android::android::webkit::WebView_typeof(), offsetof(::g::Fuse::Android::Controls::WebView, _androidWebView), 0,
        ::g::Uno::UX::FileSource_typeof(), offsetof(::g::Fuse::Android::Controls::WebView, _file), 0,
        ::g::Fuse::Android::Controls::JsResultHandler_typeof(), offsetof(::g::Fuse::Android::Controls::WebView, _resultHandler), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Android::Controls::WebView, _source), 0,
        ::g::Fuse::Android::Controls::WebChromeClient_typeof(), offsetof(::g::Fuse::Android::Controls::WebView, _webChromeClient), 0,
        ::g::Fuse::Android::Controls::WebViewClient_typeof(), offsetof(::g::Fuse::Android::Controls::WebView, _webViewClient), 0,
        ::g::Fuse::Controls::WebView_typeof(), offsetof(::g::Fuse::Android::Controls::WebView, _webViewHost), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Android::Controls::WebView, _BaseUrl), 0,
        ::g::Fuse::Navigation::HistoryChangedHandler_typeof(), offsetof(::g::Fuse::Android::Controls::WebView, HistoryChanged1), 0);
    type->Reflection.SetFunctions(32,
        new uFunction("get_BaseUrl", NULL, (void*)WebView__get_BaseUrl_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_BaseUrl", NULL, (void*)WebView__set_BaseUrl_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("add_BeginLoading", NULL, (void*)WebView__add_BeginLoading_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("remove_BeginLoading", NULL, (void*)WebView__remove_BeginLoading_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("get_CanGoBack", NULL, (void*)WebView__get_CanGoBack_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_CanGoForward", NULL, (void*)WebView__get_CanGoForward_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("Create", NULL, (void*)WebView__Create_fn, 0, true, WebView_typeof(), 1, ::g::Fuse::Controls::WebView_typeof()),
        new uFunction("get_DocumentTitle", NULL, (void*)WebView__get_DocumentTitle_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("Eval", NULL, (void*)WebView__Eval_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("Eval", NULL, (void*)WebView__Eval1_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof())),
        new uFunction("get_File", NULL, (void*)WebView__get_File_fn, 0, false, ::g::Uno::UX::FileSource_typeof(), 0),
        new uFunction("set_File", NULL, (void*)WebView__set_File_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::FileSource_typeof()),
        new uFunction("GoBack", NULL, (void*)WebView__GoBack_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("GoForward", NULL, (void*)WebView__GoForward_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("add_HistoryChanged", NULL, (void*)WebView__add_HistoryChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Navigation::HistoryChangedHandler_typeof()),
        new uFunction("remove_HistoryChanged", NULL, (void*)WebView__remove_HistoryChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Navigation::HistoryChangedHandler_typeof()),
        new uFunction("LoadHtml", NULL, (void*)WebView__LoadHtml_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("LoadHtml", NULL, (void*)WebView__LoadHtml1_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction("LoadUrl", NULL, (void*)WebView__LoadUrl_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("add_PageLoaded", NULL, (void*)WebView__add_PageLoaded_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("remove_PageLoaded", NULL, (void*)WebView__remove_PageLoaded_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("get_Progress", NULL, (void*)WebView__get_Progress_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("add_ProgressChanged", NULL, (void*)WebView__add_ProgressChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof())),
        new uFunction("remove_ProgressChanged", NULL, (void*)WebView__remove_ProgressChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof())),
        new uFunction("Reload", NULL, (void*)WebView__Reload_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_Source", NULL, (void*)WebView__get_Source_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Source", NULL, (void*)WebView__set_Source_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("Stop", NULL, (void*)WebView__Stop_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_Url", NULL, (void*)WebView__get_Url_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Url", NULL, (void*)WebView__set_Url_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("add_UrlChanged", NULL, (void*)WebView__add_UrlChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("remove_UrlChanged", NULL, (void*)WebView__remove_UrlChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()));
}

WebView_type* WebView_typeof()
{
    static uSStrong<WebView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 15;
    options.InterfaceCount = 7;
    options.ObjectSize = sizeof(WebView);
    options.TypeSize = sizeof(WebView_type);
    type = (WebView_type*)uClassType::New("Fuse.Android.Controls.WebView", options);
    type->SetBase(::g::Fuse::Controls::Native::Android::LeafView_typeof());
    type->fp_build_ = WebView_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::Android::View*))WebView__Dispose_fn;
    type->interface3.fp_Eval1 = (void(*)(uObject*, uString*, uDelegate*))WebView__Eval1_fn;
    type->interface3.fp_Eval = (void(*)(uObject*, uString*))WebView__Eval_fn;
    type->interface3.fp_LoadHtml = (void(*)(uObject*, uString*))WebView__LoadHtml_fn;
    type->interface3.fp_LoadHtml1 = (void(*)(uObject*, uString*, uString*))WebView__LoadHtml1_fn;
    type->interface3.fp_LoadUrl = (void(*)(uObject*, uString*))WebView__LoadUrl_fn;
    type->interface3.fp_Stop = (void(*)(uObject*))WebView__Stop_fn;
    type->interface3.fp_Reload = (void(*)(uObject*))WebView__Reload_fn;
    type->interface3.fp_get_BaseUrl = (void(*)(uObject*, uString**))WebView__get_BaseUrl_fn;
    type->interface3.fp_set_BaseUrl = (void(*)(uObject*, uString*))WebView__set_BaseUrl_fn;
    type->interface3.fp_get_Url = (void(*)(uObject*, uString**))WebView__get_Url_fn;
    type->interface3.fp_set_Url = (void(*)(uObject*, uString*))WebView__set_Url_fn;
    type->interface3.fp_get_DocumentTitle = (void(*)(uObject*, uString**))WebView__get_DocumentTitle_fn;
    type->interface3.fp_get_File = (void(*)(uObject*, ::g::Uno::UX::FileSource**))WebView__get_File_fn;
    type->interface3.fp_set_File = (void(*)(uObject*, ::g::Uno::UX::FileSource*))WebView__set_File_fn;
    type->interface3.fp_add_PageLoaded = (void(*)(uObject*, uDelegate*))WebView__add_PageLoaded_fn;
    type->interface3.fp_remove_PageLoaded = (void(*)(uObject*, uDelegate*))WebView__remove_PageLoaded_fn;
    type->interface3.fp_add_BeginLoading = (void(*)(uObject*, uDelegate*))WebView__add_BeginLoading_fn;
    type->interface3.fp_remove_BeginLoading = (void(*)(uObject*, uDelegate*))WebView__remove_BeginLoading_fn;
    type->interface3.fp_add_UrlChanged = (void(*)(uObject*, uDelegate*))WebView__add_UrlChanged_fn;
    type->interface3.fp_remove_UrlChanged = (void(*)(uObject*, uDelegate*))WebView__remove_UrlChanged_fn;
    type->interface4.fp_get_Progress = (void(*)(uObject*, double*))WebView__get_Progress_fn;
    type->interface4.fp_add_ProgressChanged = (void(*)(uObject*, uDelegate*))WebView__add_ProgressChanged_fn;
    type->interface4.fp_remove_ProgressChanged = (void(*)(uObject*, uDelegate*))WebView__remove_ProgressChanged_fn;
    type->interface5.fp_GoForward = (void(*)(uObject*))WebView__GoForward_fn;
    type->interface5.fp_GoBack = (void(*)(uObject*))WebView__GoBack_fn;
    type->interface5.fp_get_CanGoBack = (void(*)(uObject*, bool*))WebView__get_CanGoBack_fn;
    type->interface5.fp_get_CanGoForward = (void(*)(uObject*, bool*))WebView__get_CanGoForward_fn;
    type->interface5.fp_add_HistoryChanged = (void(*)(uObject*, uDelegate*))WebView__add_HistoryChanged_fn;
    type->interface5.fp_remove_HistoryChanged = (void(*)(uObject*, uDelegate*))WebView__remove_HistoryChanged_fn;
    type->interface6.fp_get_Source = (void(*)(uObject*, uString**))WebView__get_Source_fn;
    type->interface6.fp_set_Source = (void(*)(uObject*, uString*))WebView__set_Source_fn;
    type->interface2.fp_Measure = (void(*)(uObject*, ::g::Fuse::LayoutParams*, float*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::LeafView__Measure_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__Hide_fn;
    type->interface0.fp_BringToFront = (void(*)(uObject*))::g::Fuse::Controls::Native::Android::View__BringToFront_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::Android::View__set_Transform_fn;
    type->interface0.fp_set_Position = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Position_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::Android::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::Android::View__set_Opacity_fn;
    type->interface0.fp_set_IsEnabled = (void(*)(uObject*, bool*))::g::Fuse::Controls::Native::Android::View__set_IsEnabled_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))WebView__Dispose_fn;
    return type;
}

// private WebView(Fuse.Controls.WebView webViewHost, Android.android.webkit.WebView webView) :76
void WebView__ctor_2_fn(WebView* __this, ::g::Fuse::Controls::WebView* webViewHost, ::g::Android::android::webkit::WebView* webView)
{
    __this->ctor_2(webViewHost, webView);
}

// public generated string get_BaseUrl() :107
void WebView__get_BaseUrl_fn(WebView* __this, uString** __retval)
{
    *__retval = __this->BaseUrl();
}

// public generated void set_BaseUrl(string value) :107
void WebView__set_BaseUrl_fn(WebView* __this, uString* value)
{
    __this->BaseUrl(value);
}

// public void add_BeginLoading(Uno.EventHandler value) :197
void WebView__add_BeginLoading_fn(WebView* __this, uDelegate* value)
{
    __this->add_BeginLoading(value);
}

// public void remove_BeginLoading(Uno.EventHandler value) :198
void WebView__remove_BeginLoading_fn(WebView* __this, uDelegate* value)
{
    __this->remove_BeginLoading(value);
}

// public bool get_CanGoBack() :129
void WebView__get_CanGoBack_fn(WebView* __this, bool* __retval)
{
    *__retval = __this->CanGoBack();
}

// public bool get_CanGoForward() :134
void WebView__get_CanGoForward_fn(WebView* __this, bool* __retval)
{
    *__retval = __this->CanGoForward();
}

// public static Fuse.Android.Controls.WebView Create(Fuse.Controls.WebView webViewHost) :62
void WebView__Create_fn(::g::Fuse::Controls::WebView* webViewHost, WebView** __retval)
{
    *__retval = WebView::Create(webViewHost);
}

// public override sealed void Dispose() :68
void WebView__Dispose_fn(WebView* __this)
{
    uStackFrame __("Fuse.Android.Controls.WebView", "Dispose()");
    uPtr(__this->_webViewHost)->WebViewClient(NULL);
    __this->_webViewHost = NULL;
    ::g::Fuse::Controls::Native::Android::View__Dispose_fn(__this);
}

// public string get_DocumentTitle() :124
void WebView__get_DocumentTitle_fn(WebView* __this, uString** __retval)
{
    *__retval = __this->DocumentTitle();
}

// public void Eval(string js) :101
void WebView__Eval_fn(WebView* __this, uString* js)
{
    __this->Eval(js);
}

// public void Eval(string js, Uno.Action<string> resultHandler) :95
void WebView__Eval1_fn(WebView* __this, uString* js, uDelegate* resultHandler)
{
    __this->Eval1(js, resultHandler);
}

// public Uno.UX.FileSource get_File() :222
void WebView__get_File_fn(WebView* __this, ::g::Uno::UX::FileSource** __retval)
{
    *__retval = __this->File();
}

// public void set_File(Uno.UX.FileSource value) :223
void WebView__set_File_fn(WebView* __this, ::g::Uno::UX::FileSource* value)
{
    __this->File(value);
}

// public void GoBack() :137
void WebView__GoBack_fn(WebView* __this)
{
    __this->GoBack();
}

// public void GoForward() :142
void WebView__GoForward_fn(WebView* __this)
{
    __this->GoForward();
}

// public generated void add_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) :162
void WebView__add_HistoryChanged_fn(WebView* __this, uDelegate* value)
{
    __this->add_HistoryChanged(value);
}

// public generated void remove_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) :162
void WebView__remove_HistoryChanged_fn(WebView* __this, uDelegate* value)
{
    __this->remove_HistoryChanged(value);
}

// private void LoadFile(Uno.UX.FileSource file) :235
void WebView__LoadFile_fn(WebView* __this, ::g::Uno::UX::FileSource* file)
{
    __this->LoadFile(file);
}

// public void LoadHtml(string html) :157
void WebView__LoadHtml_fn(WebView* __this, uString* html)
{
    __this->LoadHtml(html);
}

// public void LoadHtml(string html, string baseUrl) :172
void WebView__LoadHtml1_fn(WebView* __this, uString* html, uString* baseUrl)
{
    __this->LoadHtml1(html, baseUrl);
}

// private void LoadHTML(string html) :231
void WebView__LoadHTML_fn(WebView* __this, uString* html)
{
    __this->LoadHTML(html);
}

// public void LoadUrl(string url) :181
void WebView__LoadUrl_fn(WebView* __this, uString* url)
{
    __this->LoadUrl(url);
}

// private WebView New(Fuse.Controls.WebView webViewHost, Android.android.webkit.WebView webView) :76
void WebView__New1_fn(::g::Fuse::Controls::WebView* webViewHost, ::g::Android::android::webkit::WebView* webView, WebView** __retval)
{
    *__retval = WebView::New1(webViewHost, webView);
}

// private void OnHistoryChanged() :164
void WebView__OnHistoryChanged_fn(WebView* __this)
{
    __this->OnHistoryChanged();
}

// public void add_PageLoaded(Uno.EventHandler value) :209
void WebView__add_PageLoaded_fn(WebView* __this, uDelegate* value)
{
    __this->add_PageLoaded(value);
}

// public void remove_PageLoaded(Uno.EventHandler value) :210
void WebView__remove_PageLoaded_fn(WebView* __this, uDelegate* value)
{
    __this->remove_PageLoaded(value);
}

// public double get_Progress() :192
void WebView__get_Progress_fn(WebView* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// public void add_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) :215
void WebView__add_ProgressChanged_fn(WebView* __this, uDelegate* value)
{
    __this->add_ProgressChanged(value);
}

// public void remove_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) :216
void WebView__remove_ProgressChanged_fn(WebView* __this, uDelegate* value)
{
    __this->remove_ProgressChanged(value);
}

// public void Reload() :147
void WebView__Reload_fn(WebView* __this)
{
    __this->Reload();
}

// public string get_Source() :112
void WebView__get_Source_fn(WebView* __this, uString** __retval)
{
    *__retval = __this->Source();
}

// public void set_Source(string value) :113
void WebView__set_Source_fn(WebView* __this, uString* value)
{
    __this->Source(value);
}

// public void Stop() :152
void WebView__Stop_fn(WebView* __this)
{
    __this->Stop();
}

// public string get_Url() :118
void WebView__get_Url_fn(WebView* __this, uString** __retval)
{
    *__retval = __this->Url();
}

// public void set_Url(string value) :119
void WebView__set_Url_fn(WebView* __this, uString* value)
{
    __this->Url(value);
}

// public void add_UrlChanged(Uno.EventHandler value) :203
void WebView__add_UrlChanged_fn(WebView* __this, uDelegate* value)
{
    __this->add_UrlChanged(value);
}

// public void remove_UrlChanged(Uno.EventHandler value) :204
void WebView__remove_UrlChanged_fn(WebView* __this, uDelegate* value)
{
    __this->remove_UrlChanged(value);
}

// private WebView(Fuse.Controls.WebView webViewHost, Android.android.webkit.WebView webView) [instance] :76
void WebView::ctor_2(::g::Fuse::Controls::WebView* webViewHost, ::g::Android::android::webkit::WebView* webView)
{
    uStackFrame __("Fuse.Android.Controls.WebView", ".ctor(Fuse.Controls.WebView,Android.android.webkit.WebView)");
    ctor_1(webView);
    _webViewHost = webViewHost;
    _androidWebView = webView;
    ::g::Android::Runtime::UnoHelper::Init();
    _resultHandler = ::g::Fuse::Android::Controls::JsResultHandler::New5(::STRINGS[6/*"FuseJSHandler"*/], NULL);
    ::g::Android::java::util::Observable* obs = ::g::Android::Runtime::UnoHelper::MakeJSObservable((uObject*)_resultHandler);
    _webChromeClient = ::g::Fuse::Android::Controls::WebChromeClient::New7();
    _webViewClient = ::g::Fuse::Android::Controls::WebViewClient::New7();
    uPtr(_androidWebView)->setWebViewClient(_webViewClient);
    uPtr(_androidWebView)->setWebChromeClient(_webChromeClient);
    uPtr(uPtr(_androidWebView)->getSettings())->setJavaScriptEnabled(true);
    uPtr(uPtr(_androidWebView)->getSettings())->setDomStorageEnabled(true);
    uPtr(_androidWebView)->addJavascriptInterface(obs, ::g::Android::java::lang::String::op_Implicit1(uPtr(_resultHandler)->Name()));
    uPtr(_webViewHost)->WebViewClient((uObject*)this);
}

// public generated string get_BaseUrl() [instance] :107
uString* WebView::BaseUrl()
{
    uStackFrame __("Fuse.Android.Controls.WebView", "get_BaseUrl()");
    return _BaseUrl;
}

// public generated void set_BaseUrl(string value) [instance] :107
void WebView::BaseUrl(uString* value)
{
    uStackFrame __("Fuse.Android.Controls.WebView", "set_BaseUrl(string)");
    _BaseUrl = value;
}

// public void add_BeginLoading(Uno.EventHandler value) [instance] :197
void WebView::add_BeginLoading(uDelegate* value)
{
    uStackFrame __("Fuse.Android.Controls.WebView", "add_BeginLoading(Uno.EventHandler)");
    uPtr(_webViewClient)->add_PageStarted(value);
}

// public void remove_BeginLoading(Uno.EventHandler value) [instance] :198
void WebView::remove_BeginLoading(uDelegate* value)
{
    uStackFrame __("Fuse.Android.Controls.WebView", "remove_BeginLoading(Uno.EventHandler)");
    uPtr(_webViewClient)->remove_PageStarted(value);
}

// public bool get_CanGoBack() [instance] :129
bool WebView::CanGoBack()
{
    uStackFrame __("Fuse.Android.Controls.WebView", "get_CanGoBack()");
    return uPtr(_androidWebView)->canGoBack();
}

// public bool get_CanGoForward() [instance] :134
bool WebView::CanGoForward()
{
    uStackFrame __("Fuse.Android.Controls.WebView", "get_CanGoForward()");
    return uPtr(_androidWebView)->canGoForward();
}

// public string get_DocumentTitle() [instance] :124
uString* WebView::DocumentTitle()
{
    uStackFrame __("Fuse.Android.Controls.WebView", "get_DocumentTitle()");
    return ::g::Android::java::lang::String::op_Implicit(uPtr(_androidWebView)->getTitle());
}

// public void Eval(string js) [instance] :101
void WebView::Eval(uString* js)
{
    uStackFrame __("Fuse.Android.Controls.WebView", "Eval(string)");
    uPtr(_resultHandler)->Callback = NULL;
    uPtr(_androidWebView)->loadUrl(::g::Android::java::lang::String::op_Implicit1(::g::Uno::String::op_Addition2(::STRINGS[7/*"javascript:"*/], js)));
}

// public void Eval(string js, Uno.Action<string> resultHandler) [instance] :95
void WebView::Eval1(uString* js, uDelegate* resultHandler)
{
    uStackFrame __("Fuse.Android.Controls.WebView", "Eval(string,Uno.Action<string>)");
    uPtr(_resultHandler)->Callback = resultHandler;
    uPtr(_androidWebView)->loadUrl(::g::Android::java::lang::String::op_Implicit1(::g::Uno::String::op_Addition2(::STRINGS[7/*"javascript:"*/], uPtr(_resultHandler)->getExpr(js))));
}

// public Uno.UX.FileSource get_File() [instance] :222
::g::Uno::UX::FileSource* WebView::File()
{
    uStackFrame __("Fuse.Android.Controls.WebView", "get_File()");
    return _file;
}

// public void set_File(Uno.UX.FileSource value) [instance] :223
void WebView::File(::g::Uno::UX::FileSource* value)
{
    uStackFrame __("Fuse.Android.Controls.WebView", "set_File(Uno.UX.FileSource)");
    _file = value;

    if (_file != NULL)
        LoadFile(_file);
}

// public void GoBack() [instance] :137
void WebView::GoBack()
{
    uStackFrame __("Fuse.Android.Controls.WebView", "GoBack()");
    uPtr(_androidWebView)->goBack();
}

// public void GoForward() [instance] :142
void WebView::GoForward()
{
    uStackFrame __("Fuse.Android.Controls.WebView", "GoForward()");
    uPtr(_androidWebView)->goForward();
}

// public generated void add_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) [instance] :162
void WebView::add_HistoryChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Android.Controls.WebView", "add_HistoryChanged(Fuse.Navigation.HistoryChangedHandler)");
    HistoryChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(HistoryChanged1, value), ::TYPES[13/*Fuse.Navigation.HistoryChangedHandler*/]);
}

// public generated void remove_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) [instance] :162
void WebView::remove_HistoryChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Android.Controls.WebView", "remove_HistoryChanged(Fuse.Navigation.HistoryChangedHandler)");
    HistoryChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(HistoryChanged1, value), ::TYPES[13/*Fuse.Navigation.HistoryChangedHandler*/]);
}

// private void LoadFile(Uno.UX.FileSource file) [instance] :235
void WebView::LoadFile(::g::Uno::UX::FileSource* file)
{
    uStackFrame __("Fuse.Android.Controls.WebView", "LoadFile(Uno.UX.FileSource)");
    uString* data = ::STRINGS[8/*""*/];

    {
        const auto __finally_fun = [&]()
        {
            LoadHTML(data);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        try
        {
            data = uPtr(file)->ReadAllText();
        }
        catch (const uThrowable& __t)
        {
            ::g::Uno::Exception* e = __t.Exception;
            data = uPtr(e)->ToString();
        }
    }
}

// public void LoadHtml(string html) [instance] :157
void WebView::LoadHtml(uString* html)
{
    uStackFrame __("Fuse.Android.Controls.WebView", "LoadHtml(string)");
    uString* ind1;
    LoadHtml1(html, (ind1 = BaseUrl(), (ind1 != NULL) ? ind1 : ::STRINGS[8/*""*/]));
}

// public void LoadHtml(string html, string baseUrl) [instance] :172
void WebView::LoadHtml1(uString* html, uString* baseUrl)
{
    uStackFrame __("Fuse.Android.Controls.WebView", "LoadHtml(string,string)");
    uString* ind2;

    if (::g::Uno::String::op_Equality(html, NULL) || ::g::Uno::String::op_Equality(html, ::STRINGS[8/*""*/]))
        return;

    uPtr(_androidWebView)->loadDataWithBaseURL(::g::Android::java::lang::String::op_Implicit1((ind2 = (baseUrl != NULL) ? baseUrl : (uString*)BaseUrl(), (ind2 != NULL) ? ind2 : ::STRINGS[8/*""*/])), ::g::Android::java::lang::String::op_Implicit1(html), ::g::Android::java::lang::String::op_Implicit1(::STRINGS[9/*"text/html"*/]), ::g::Android::java::lang::String::op_Implicit1(::STRINGS[10/*"UTF-8"*/]), NULL);
    OnHistoryChanged();
}

// private void LoadHTML(string html) [instance] :231
void WebView::LoadHTML(uString* html)
{
    uStackFrame __("Fuse.Android.Controls.WebView", "LoadHTML(string)");
    uPtr(_androidWebView)->loadDataWithBaseURL(NULL, ::g::Android::java::lang::String::op_Implicit1(html), ::g::Android::java::lang::String::op_Implicit1(::STRINGS[9/*"text/html"*/]), ::g::Android::java::lang::String::op_Implicit1(::STRINGS[11/*"utf-8"*/]), NULL);
}

// public void LoadUrl(string url) [instance] :181
void WebView::LoadUrl(uString* url)
{
    uStackFrame __("Fuse.Android.Controls.WebView", "LoadUrl(string)");

    if (::g::Uno::String::op_Equality(url, NULL) || ::g::Uno::String::op_Equality(url, ::STRINGS[8/*""*/]))
        url = ::STRINGS[12/*"about:blank"*/];

    uPtr(_androidWebView)->loadUrl(::g::Android::java::lang::String::op_Implicit1(url));
    OnHistoryChanged();
}

// private void OnHistoryChanged() [instance] :164
void WebView::OnHistoryChanged()
{
    uStackFrame __("Fuse.Android.Controls.WebView", "OnHistoryChanged()");

    if (::g::Uno::Delegate::op_Inequality(HistoryChanged1, NULL))
        uPtr(HistoryChanged1)->InvokeVoid(_webViewHost);
}

// public void add_PageLoaded(Uno.EventHandler value) [instance] :209
void WebView::add_PageLoaded(uDelegate* value)
{
    uStackFrame __("Fuse.Android.Controls.WebView", "add_PageLoaded(Uno.EventHandler)");
    uPtr(_webViewClient)->add_PageLoaded(value);
}

// public void remove_PageLoaded(Uno.EventHandler value) [instance] :210
void WebView::remove_PageLoaded(uDelegate* value)
{
    uStackFrame __("Fuse.Android.Controls.WebView", "remove_PageLoaded(Uno.EventHandler)");
    uPtr(_webViewClient)->remove_PageLoaded(value);
}

// public double get_Progress() [instance] :192
double WebView::Progress()
{
    uStackFrame __("Fuse.Android.Controls.WebView", "get_Progress()");
    return (double)uPtr(_androidWebView)->getProgress() / 100.0;
}

// public void add_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) [instance] :215
void WebView::add_ProgressChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Android.Controls.WebView", "add_ProgressChanged(Uno.UX.ValueChangedHandler<double>)");
    uPtr(_webChromeClient)->add_ProgressChanged(value);
}

// public void remove_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) [instance] :216
void WebView::remove_ProgressChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Android.Controls.WebView", "remove_ProgressChanged(Uno.UX.ValueChangedHandler<double>)");
    uPtr(_webChromeClient)->remove_ProgressChanged(value);
}

// public void Reload() [instance] :147
void WebView::Reload()
{
    uStackFrame __("Fuse.Android.Controls.WebView", "Reload()");
    uPtr(_androidWebView)->reload();
}

// public string get_Source() [instance] :112
uString* WebView::Source()
{
    uStackFrame __("Fuse.Android.Controls.WebView", "get_Source()");
    return _source;
}

// public void set_Source(string value) [instance] :113
void WebView::Source(uString* value)
{
    uStackFrame __("Fuse.Android.Controls.WebView", "set_Source(string)");
    LoadHtml(_source = value);
}

// public void Stop() [instance] :152
void WebView::Stop()
{
    uStackFrame __("Fuse.Android.Controls.WebView", "Stop()");
    uPtr(_androidWebView)->stopLoading();
}

// public string get_Url() [instance] :118
uString* WebView::Url()
{
    uStackFrame __("Fuse.Android.Controls.WebView", "get_Url()");
    return ::g::Android::java::lang::String::op_Implicit(uPtr(_androidWebView)->getUrl());
}

// public void set_Url(string value) [instance] :119
void WebView::Url(uString* value)
{
    uStackFrame __("Fuse.Android.Controls.WebView", "set_Url(string)");
    LoadUrl(value);
}

// public void add_UrlChanged(Uno.EventHandler value) [instance] :203
void WebView::add_UrlChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Android.Controls.WebView", "add_UrlChanged(Uno.EventHandler)");
    uPtr(_webViewClient)->add_UrlChanged(value);
}

// public void remove_UrlChanged(Uno.EventHandler value) [instance] :204
void WebView::remove_UrlChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Android.Controls.WebView", "remove_UrlChanged(Uno.EventHandler)");
    uPtr(_webViewClient)->remove_UrlChanged(value);
}

// public static Fuse.Android.Controls.WebView Create(Fuse.Controls.WebView webViewHost) [static] :62
WebView* WebView::Create(::g::Fuse::Controls::WebView* webViewHost)
{
    uStackFrame __("Fuse.Android.Controls.WebView", "Create(Fuse.Controls.WebView)");
    ::g::Android::android::webkit::WebView* x = ::g::Android::android::webkit::WebView::New13(::g::Android::android::app::Activity::GetAppActivity());
    return WebView::New1(webViewHost, x);
}

// private WebView New(Fuse.Controls.WebView webViewHost, Android.android.webkit.WebView webView) [static] :76
WebView* WebView::New1(::g::Fuse::Controls::WebView* webViewHost, ::g::Android::android::webkit::WebView* webView)
{
    WebView* obj3 = (WebView*)uNew(WebView_typeof());
    obj3->ctor_2(webViewHost, webView);
    return obj3;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.WebView/0.31.5/Android/$.uno
// ------------------------------------------------------------------------

// internal sealed extern class WebViewClient :262
// {
static void WebViewClient_build(uType* type)
{
    ::STRINGS[13] = uString::Const("com.Bindings.Binding_Fuse_Android_Controls_WebViewClient");
    ::STRINGS[1] = uString::Const("<init>");
    ::STRINGS[2] = uString::Const("(J)V");
    ::TYPES[0] = ::g::Uno::Delegate_typeof();
    ::TYPES[2] = uObject_typeof();
    ::TYPES[14] = ::g::Uno::EventHandler_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::android::webkit::WebViewClient_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::android::webkit::WebViewClient_type, interface1));
    type->SetFields(5,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Android::Controls::WebViewClient, loadingFinished), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Android::Controls::WebViewClient, redirect), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Android::Controls::WebViewClient, PageLoaded1), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Android::Controls::WebViewClient, PageStarted1), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Android::Controls::WebViewClient, UrlChanged1), 0,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Fuse::Android::Controls::WebViewClient::_javaClass3_, uFieldFlagsStatic);
}

::g::Android::android::webkit::WebViewClient_type* WebViewClient_typeof()
{
    static uSStrong< ::g::Android::android::webkit::WebViewClient_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 11;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(WebViewClient);
    options.TypeSize = sizeof(::g::Android::android::webkit::WebViewClient_type);
    type = (::g::Android::android::webkit::WebViewClient_type*)uClassType::New("Fuse.Android.Controls.WebViewClient", options);
    type->SetBase(::g::Android::android::webkit::WebViewClient_typeof());
    type->fp_build_ = WebViewClient_build;
    type->fp_ctor_ = (void*)WebViewClient__New7_fn;
    type->fp_onPageFinished = (void(*)(::g::Android::android::webkit::WebViewClient*, ::g::Android::android::webkit::WebView*, ::g::Android::java::lang::String*))WebViewClient__onPageFinished_fn;
    type->fp_onPageStarted = (void(*)(::g::Android::android::webkit::WebViewClient*, ::g::Android::android::webkit::WebView*, ::g::Android::java::lang::String*, ::g::Android::android::graphics::Bitmap*))WebViewClient__onPageStarted_fn;
    type->fp_shouldOverrideUrlLoading = (void(*)(::g::Android::android::webkit::WebViewClient*, ::g::Android::android::webkit::WebView*, ::g::Android::java::lang::String*, bool*))WebViewClient__shouldOverrideUrlLoading_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    return type;
}

// public WebViewClient() :272
void WebViewClient__ctor_7_fn(WebViewClient* __this)
{
    __this->ctor_7();
}

// public WebViewClient New() :272
void WebViewClient__New7_fn(WebViewClient** __retval)
{
    *__retval = WebViewClient::New7();
}

// public override sealed void onPageFinished(Android.android.webkit.WebView view, Android.java.lang.String url) :304
void WebViewClient__onPageFinished_fn(WebViewClient* __this, ::g::Android::android::webkit::WebView* view, ::g::Android::java::lang::String* url)
{
    uStackFrame __("Fuse.Android.Controls.WebViewClient", "onPageFinished(Android.android.webkit.WebView,Android.java.lang.String)");

    if (::g::Uno::Delegate::op_Inequality(__this->UrlChanged1, NULL))
        uPtr(__this->UrlChanged1)->Invoke(2, __this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());

    if (!__this->redirect)
        __this->loadingFinished = true;

    if (__this->loadingFinished && !__this->redirect)
    {
        __this->loadingFinished = true;

        if (::g::Uno::Delegate::op_Inequality(__this->PageLoaded1, NULL))
            uPtr(__this->PageLoaded1)->Invoke(2, __this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
    }
    else
        __this->redirect = false;
}

// public override sealed void onPageStarted(Android.android.webkit.WebView view, Android.java.lang.String url, Android.android.graphics.Bitmap favIcon) :294
void WebViewClient__onPageStarted_fn(WebViewClient* __this, ::g::Android::android::webkit::WebView* view, ::g::Android::java::lang::String* url, ::g::Android::android::graphics::Bitmap* favIcon)
{
    uStackFrame __("Fuse.Android.Controls.WebViewClient", "onPageStarted(Android.android.webkit.WebView,Android.java.lang.String,Android.android.graphics.Bitmap)");

    if (__this->loadingFinished)
    {
        if (::g::Uno::Delegate::op_Inequality(__this->PageStarted1, NULL))
            uPtr(__this->PageStarted1)->Invoke(2, __this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
    }

    __this->loadingFinished = false;
}

// public generated void add_PageLoaded(Uno.EventHandler value) :265
void WebViewClient__add_PageLoaded_fn(WebViewClient* __this, uDelegate* value)
{
    __this->add_PageLoaded(value);
}

// public generated void remove_PageLoaded(Uno.EventHandler value) :265
void WebViewClient__remove_PageLoaded_fn(WebViewClient* __this, uDelegate* value)
{
    __this->remove_PageLoaded(value);
}

// public generated void add_PageStarted(Uno.EventHandler value) :266
void WebViewClient__add_PageStarted_fn(WebViewClient* __this, uDelegate* value)
{
    __this->add_PageStarted(value);
}

// public generated void remove_PageStarted(Uno.EventHandler value) :266
void WebViewClient__remove_PageStarted_fn(WebViewClient* __this, uDelegate* value)
{
    __this->remove_PageStarted(value);
}

// public override sealed bool shouldOverrideUrlLoading(Android.android.webkit.WebView view, Android.java.lang.String url) :278
void WebViewClient__shouldOverrideUrlLoading_fn(WebViewClient* __this, ::g::Android::android::webkit::WebView* view, ::g::Android::java::lang::String* url, bool* __retval)
{
    uStackFrame __("Fuse.Android.Controls.WebViewClient", "shouldOverrideUrlLoading(Android.android.webkit.WebView,Android.java.lang.String)");

    if (!__this->loadingFinished)
        __this->redirect = true;
    else
    {
        if (::g::Uno::Delegate::op_Inequality(__this->PageStarted1, NULL))
            uPtr(__this->PageStarted1)->Invoke(2, __this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
    }

    __this->loadingFinished = false;
    uPtr(view)->loadUrl(url);
    return *__retval = true, void();
}

// public generated void add_UrlChanged(Uno.EventHandler value) :267
void WebViewClient__add_UrlChanged_fn(WebViewClient* __this, uDelegate* value)
{
    __this->add_UrlChanged(value);
}

// public generated void remove_UrlChanged(Uno.EventHandler value) :267
void WebViewClient__remove_UrlChanged_fn(WebViewClient* __this, uDelegate* value)
{
    __this->remove_UrlChanged(value);
}

jclass WebViewClient::_javaClass3_;

// public WebViewClient() [instance] :272
void WebViewClient::ctor_7()
{
    uStackFrame __("Fuse.Android.Controls.WebViewClient", ".ctor()");

    if (!_subclassed)
    {
        _subclassed = true;
        _javaClassName = ::STRINGS[13/*"com.Binding...*/];
    }

    ctor_6(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);

    if (::g::Android::Base::Primitives::ujclass::op_Equality(WebViewClient::_javaClass3_, ::g::Android::Base::Primitives::ujclass::Null()))
    {
        WebViewClient::_javaClass3_ = ::g::Android::Base::JNI::LocalToGlobalRef(::g::Android::Base::JNI::LoadClass3(::STRINGS[13/*"com.Binding...*/], false));
        JniHelper jni;
        BEGIN_REG_MTD(3);
        REG_MTD(0,"__n_shouldOverrideUrlLoading","(JLandroid/webkit/WebView;Ljava/lang/String;JJ)Z",Binding_Fuse_Android_Controls_WebViewClient__shouldOverrideUrlLoading24355);
        REG_MTD(1,"__n_onPageStarted","(JLandroid/webkit/WebView;Ljava/lang/String;Landroid/graphics/Bitmap;JJJ)V",Binding_Fuse_Android_Controls_WebViewClient__onPageStarted24356);
        REG_MTD(2,"__n_onPageFinished","(JLandroid/webkit/WebView;Ljava/lang/String;JJ)V",Binding_Fuse_Android_Controls_WebViewClient__onPageFinished24357);
        COMMIT_REG_MTD(WebViewClient::_javaClass3_);
    }

    jclass tmpCls = ::g::Android::Base::JNI::LoadClass3(_javaClassName, false);
    jmethodID mtd = ::g::Android::Base::JNI::GetMethodID(tmpCls, ::STRINGS[1/*"<init>"*/], ::STRINGS[2/*"(J)V"*/]);
    jobject tmp = ::g::Android::Base::JNI::NewObject1(tmpCls, mtd, ::g::Android::Base::Primitives::ujvalue::op_Implicit7((jlong)this->__weakptr));
    ::g::Android::Base::JNI::CheckException();
    _javaObject = ::g::Android::Base::JNI::LocalToGlobalRef1(tmp);
    ::g::Android::Base::JNI::DeleteLocalRef(tmpCls);
    loadingFinished = true;
    redirect = false;
}

// public generated void add_PageLoaded(Uno.EventHandler value) [instance] :265
void WebViewClient::add_PageLoaded(uDelegate* value)
{
    uStackFrame __("Fuse.Android.Controls.WebViewClient", "add_PageLoaded(Uno.EventHandler)");
    PageLoaded1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(PageLoaded1, value), ::TYPES[14/*Uno.EventHandler*/]);
}

// public generated void remove_PageLoaded(Uno.EventHandler value) [instance] :265
void WebViewClient::remove_PageLoaded(uDelegate* value)
{
    uStackFrame __("Fuse.Android.Controls.WebViewClient", "remove_PageLoaded(Uno.EventHandler)");
    PageLoaded1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(PageLoaded1, value), ::TYPES[14/*Uno.EventHandler*/]);
}

// public generated void add_PageStarted(Uno.EventHandler value) [instance] :266
void WebViewClient::add_PageStarted(uDelegate* value)
{
    uStackFrame __("Fuse.Android.Controls.WebViewClient", "add_PageStarted(Uno.EventHandler)");
    PageStarted1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(PageStarted1, value), ::TYPES[14/*Uno.EventHandler*/]);
}

// public generated void remove_PageStarted(Uno.EventHandler value) [instance] :266
void WebViewClient::remove_PageStarted(uDelegate* value)
{
    uStackFrame __("Fuse.Android.Controls.WebViewClient", "remove_PageStarted(Uno.EventHandler)");
    PageStarted1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(PageStarted1, value), ::TYPES[14/*Uno.EventHandler*/]);
}

// public generated void add_UrlChanged(Uno.EventHandler value) [instance] :267
void WebViewClient::add_UrlChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Android.Controls.WebViewClient", "add_UrlChanged(Uno.EventHandler)");
    UrlChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(UrlChanged1, value), ::TYPES[14/*Uno.EventHandler*/]);
}

// public generated void remove_UrlChanged(Uno.EventHandler value) [instance] :267
void WebViewClient::remove_UrlChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Android.Controls.WebViewClient", "remove_UrlChanged(Uno.EventHandler)");
    UrlChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(UrlChanged1, value), ::TYPES[14/*Uno.EventHandler*/]);
}

// public WebViewClient New() [static] :272
WebViewClient* WebViewClient::New7()
{
    WebViewClient* obj1 = (WebViewClient*)uNew(WebViewClient_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

}}}} // ::g::Fuse::Android::Controls
