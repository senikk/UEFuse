#include <BootstrapperImpl_Android.h>
#include <Android.Base.JNI.h>
#include <Android.Base.Types.Bridge.h>
#include <Android.android.app.Activity.h>
#include <Android.android.app.Fragment.h>
#include <Android.android.app.TaskStackBuilder.h>
#include <Android.android.content.ComponentName.h>
#include <Android.android.content.Context.h>
#include <Android.android.content.ContextWrapper.h>
#include <Android.android.content.Intent.h>
#include <Android.android.content.res.Configuration.h>
#include <Android.android.graphics.Bitmap.h>
#include <Android.android.graphics.Canvas.h>
#include <Android.android.graphics.drawable.Drawable.h>
#include <Android.android.net.http.SslError.h>
#include <Android.android.os.Build.h>
#include <Android.android.os.Bundle.h>
#include <Android.android.os.Message.h>
#include <Android.android.view.ActionMode.h>
#include <Android.android.view.ActionProvider.h>
#include <Android.android.view.ContextThemeWrapper.h>
#include <Android.android.view.KeyEvent.h>
#include <Android.android.view.MotionEvent.h>
#include <Android.android.view.View.h>
#include <Android.android.view.ViewGroup.h>
#include <Android.android.view.WindowManagerDLRLayoutParams.h>
#include <Android.android.webkit.ConsoleMessage.h>
#include <Android.android.webkit.HttpAuthHandler.h>
#include <Android.android.webkit.JsPromptResult.h>
#include <Android.android.webkit.JsResult.h>
#include <Android.android.webkit.SslErrorHandler.h>
#include <Android.android.webkit.WebChromeClient.h>
#include <Android.android.webkit.WebResourceResponse.h>
#include <Android.android.webkit.WebSettings.h>
#include <Android.android.webkit.WebView.h>
#include <Android.android.webkit.WebViewClient.h>
#include <Android.android.widget.AbsoluteLayout.h>
#include <Android.com.fuse.ExperimentalHttp.HttpRequest.h>
#include <Android.Fallbacks.Android_android_content_Context.h>
#include <Android.Fallbacks.Android_android_graphics_drawable_Drawable.h>
#include <Android.Fallbacks.Android_android_util_AttributeSet.h>
#include <Android.Fallbacks.Android_android_view_ActionMode.h>
#include <Android.Fallbacks.Android_android_view_ActionProvider.h>
#include <Android.Fallbacks.Android_android_view_ContextMenuDLRContextMenuInfo.h>
#include <Android.Fallbacks.Android_android_view_Menu.h>
#include <Android.Fallbacks.Android_android_view_MenuItem.h>
#include <Android.Fallbacks.Android_android_view_MenuItemDLROnActionExpandListener.h>
#include <Android.Fallbacks.Android_android_view_MenuItemDLROnMenuItemCli-c7e65b51.h>
#include <Android.Fallbacks.Android_android_view_SubMenu.h>
#include <Android.Fallbacks.Android_android_view_ViewGroup.h>
#include <Android.Fallbacks.Android_android_webkit_GeolocationPermissions-7fe78910.h>
#include <Android.Fallbacks.Android_android_webkit_ValueCallback.h>
#include <Android.Fallbacks.Android_android_webkit_WebChromeClientDLRCust-c4a6602d.h>
#include <Android.Fallbacks.Android_android_webkit_WebSettings.h>
#include <Android.Fallbacks.Android_android_webkit_WebStorageDLRQuotaUpdater.h>
#include <Android.Fallbacks.Android_java_lang_CharSequence.h>
#include <Android.Fallbacks.Android_java_util_Observer.h>
#include <Android.java.lang.Class.h>
#include <Android.java.lang.Object.h>
#include <Android.java.lang.String.h>
#include <Android.java.util.Observable.h>
#include <Android.Runtime.BooleanArray.h>
#include <Android.Runtime.ByteArray.h>
#include <Android.Runtime.CharArray.h>
#include <Android.Runtime.DoubleArray.h>
#include <Android.Runtime.FloatArray.h>
#include <Android.Runtime.IntArray.h>
#include <Android.Runtime.LongArray.h>
#include <Android.Runtime.ShortArray.h>
#include <Fuse.Android.Controls.JsResultHandler.h>
#include <Fuse.Android.Controls.WebChromeClient.h>
#include <Fuse.Android.Controls.WebViewClient.h>
void BootstrapperImpl() {
    ::g::Android::Base::Types::Bridge::RegisterUnoFallback("android.content.Context", 23, ::g::Android::Fallbacks::Android_android_content_Context_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("android.graphics.drawable.Drawable", 34, ::g::Android::Fallbacks::Android_android_graphics_drawable_Drawable_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("android.util.AttributeSet", 25, ::g::Android::Fallbacks::Android_android_util_AttributeSet_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("android.view.ActionMode", 23, ::g::Android::Fallbacks::Android_android_view_ActionMode_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("android.view.ActionProvider", 27, ::g::Android::Fallbacks::Android_android_view_ActionProvider_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("android.view.ContextMenu$ContextMenuInfo", 40, ::g::Android::Fallbacks::Android_android_view_ContextMenuDLRContextMenuInfo_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("android.view.Menu", 17, ::g::Android::Fallbacks::Android_android_view_Menu_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("android.view.MenuItem", 21, ::g::Android::Fallbacks::Android_android_view_MenuItem_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("android.view.MenuItem$OnActionExpandListener", 44, ::g::Android::Fallbacks::Android_android_view_MenuItemDLROnActionExpandListener_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("android.view.MenuItem$OnMenuItemClickListener", 45, ::g::Android::Fallbacks::Android_android_view_MenuItemDLROnMenuItemClickListener_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("android.view.SubMenu", 20, ::g::Android::Fallbacks::Android_android_view_SubMenu_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("android.view.ViewGroup", 22, ::g::Android::Fallbacks::Android_android_view_ViewGroup_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("android.webkit.GeolocationPermissions$Callback", 46, ::g::Android::Fallbacks::Android_android_webkit_GeolocationPermissionsDLRCallback_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("android.webkit.ValueCallback", 28, ::g::Android::Fallbacks::Android_android_webkit_ValueCallback_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("android.webkit.WebChromeClient$CustomViewCallback", 49, ::g::Android::Fallbacks::Android_android_webkit_WebChromeClientDLRCustomViewCallback_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("android.webkit.WebSettings", 26, ::g::Android::Fallbacks::Android_android_webkit_WebSettings_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("android.webkit.WebStorage$QuotaUpdater", 38, ::g::Android::Fallbacks::Android_android_webkit_WebStorageDLRQuotaUpdater_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("java.lang.CharSequence", 22, ::g::Android::Fallbacks::Android_java_lang_CharSequence_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoFallback("java.util.Observer", 18, ::g::Android::Fallbacks::Android_java_util_Observer_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("[B", 2, ::g::Android::Runtime::ByteArray_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("[C", 2, ::g::Android::Runtime::CharArray_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("[D", 2, ::g::Android::Runtime::DoubleArray_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("[F", 2, ::g::Android::Runtime::FloatArray_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("[I", 2, ::g::Android::Runtime::IntArray_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("[J", 2, ::g::Android::Runtime::LongArray_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("[S", 2, ::g::Android::Runtime::ShortArray_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("[Z", 2, ::g::Android::Runtime::BooleanArray_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.app.Activity", 20, ::g::Android::android::app::Activity_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.app.Fragment", 20, ::g::Android::android::app::Fragment_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.app.TaskStackBuilder", 28, ::g::Android::android::app::TaskStackBuilder_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.content.ComponentName", 29, ::g::Android::android::content::ComponentName_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.content.Context", 23, ::g::Android::android::content::Context_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.content.ContextWrapper", 30, ::g::Android::android::content::ContextWrapper_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.content.Intent", 22, ::g::Android::android::content::Intent_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.content.res.Configuration", 33, ::g::Android::android::content::res::Configuration_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.graphics.Bitmap", 23, ::g::Android::android::graphics::Bitmap_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.graphics.Canvas", 23, ::g::Android::android::graphics::Canvas_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.graphics.drawable.Drawable", 34, ::g::Android::android::graphics::drawable::Drawable_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.net.http.SslError", 25, ::g::Android::android::net::http::SslError_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.os.Build", 16, ::g::Android::android::os::Build_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.os.Bundle", 17, ::g::Android::android::os::Bundle_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.os.Message", 18, ::g::Android::android::os::Message_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.view.ActionMode", 23, ::g::Android::android::view::ActionMode_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.view.ActionProvider", 27, ::g::Android::android::view::ActionProvider_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.view.ContextThemeWrapper", 32, ::g::Android::android::view::ContextThemeWrapper_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.view.KeyEvent", 21, ::g::Android::android::view::KeyEvent_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.view.MotionEvent", 24, ::g::Android::android::view::MotionEvent_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.view.View", 17, ::g::Android::android::view::View_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.view.ViewGroup", 22, ::g::Android::android::view::ViewGroup_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.view.WindowManager$LayoutParams", 39, ::g::Android::android::view::WindowManagerDLRLayoutParams_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.webkit.ConsoleMessage", 29, ::g::Android::android::webkit::ConsoleMessage_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.webkit.HttpAuthHandler", 30, ::g::Android::android::webkit::HttpAuthHandler_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.webkit.JsPromptResult", 29, ::g::Android::android::webkit::JsPromptResult_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.webkit.JsResult", 23, ::g::Android::android::webkit::JsResult_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.webkit.SslErrorHandler", 30, ::g::Android::android::webkit::SslErrorHandler_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.webkit.WebChromeClient", 30, ::g::Android::android::webkit::WebChromeClient_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.webkit.WebResourceResponse", 34, ::g::Android::android::webkit::WebResourceResponse_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.webkit.WebSettings", 26, ::g::Android::android::webkit::WebSettings_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.webkit.WebView", 22, ::g::Android::android::webkit::WebView_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.webkit.WebViewClient", 28, ::g::Android::android::webkit::WebViewClient_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("android.widget.AbsoluteLayout", 29, ::g::Android::android::widget::AbsoluteLayout_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("Binding_Fuse_Android_Controls_JsResultHandler", 45, ::g::Fuse::Android::Controls::JsResultHandler_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("Binding_Fuse_Android_Controls_WebChromeClient", 45, ::g::Fuse::Android::Controls::WebChromeClient_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("Binding_Fuse_Android_Controls_WebViewClient", 43, ::g::Fuse::Android::Controls::WebViewClient_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("com.fuse.ExperimentalHttp.HttpRequest", 37, ::g::Android::com::fuse::ExperimentalHttp::HttpRequest_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("java.lang.Class", 15, ::g::Android::java::lang::Class_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("java.lang.Object", 16, ::g::Android::java::lang::Object_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("java.lang.String", 16, ::g::Android::java::lang::String_typeof());
::g::Android::Base::Types::Bridge::RegisterUnoType("java.util.Observable", 20, ::g::Android::java::util::Observable_typeof());
}
