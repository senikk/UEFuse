// This file was generated based on /Users/terjepedersen/Prosjekt/Fuse/UniEconomy/build/Android/Preview/cache/MainView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.CompanySelect.h>
#include <_root.MainView.h>
#include <_root.UniEconomy_bundle.h>
#include <_root.UniEconomy_FuseControlsCircle_LengthAngleDegrees_Property.h>
#include <_root.UniEconomy_FuseControlsCircle_Opacity_Property.h>
#include <_root.UniEconomy_FuseControlsPageControl_Active_Property.h>
#include <_root.UniEconomy_FuseControlsPanel_IsEnabled_Property.h>
#include <_root.UniEconomy_FuseControlsPanel_Opacity_Property.h>
#include <_root.UniEconomy_FuseControlsRectangle_Opacity_Property.h>
#include <_root.UniEconomy_FuseControlsRectangle_Width_Property.h>
#include <_root.UniEconomy_FuseControlsText_Opacity_Property.h>
#include <_root.UniEconomy_FuseControlsTextInput_Value_Property.h>
#include <_root.UniEconomy_FuseScaling_Factor_Property.h>
#include <_root.UniEconomy_FuseTriggersWhileTrue_Value_Property.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.Cycle-1.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.Spin.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Circle.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.Page.h>
#include <Fuse.Controls.PageControl.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextInput.h>
#include <Fuse.Controls.TextInputControl.h>
#include <Fuse.Controls.Toggle.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Effects.Blur.h>
#include <Fuse.Effects.Effect.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.StretchMode.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.iOS.StatusBarConfig.h>
#include <Fuse.Layer.h>
#include <Fuse.LocalNotifications.LocalNotify.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.FuseJS.Http.h>
#include <Fuse.Reactive.FuseJS.TimerModule.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Scaling.h>
#include <Fuse.Storage.StorageModule.h>
#include <Fuse.Triggers.Actions.RaiseUserEvent.h>
#include <Fuse.Triggers.Actions.Set-1.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.IValue-1.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileTrue.h>
#include <Fuse.UserEvent.h>
#include <Fuse.Visual.h>
#include <FuseJS.Base64.h>
#include <FuseJS.Bundle.h>
#include <FuseJS.Environment.h>
#include <FuseJS.FileReaderImpl.h>
#include <FuseJS.Globals.h>
#include <FuseJS.Lifecycle.h>
#include <FuseJS.UserEvents.h>
#include <Polyfills.Window.WindowModule.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.Platform.iOS.StatusBarStyle.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[36];
static uType* TYPES[33];

namespace g{

// public partial sealed class MainView :2
// {
// static MainView() :59
static void MainView__cctor__fn(uType* __type)
{
    MainView::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 16, ::STRINGS[0/*"MainView"*/], ::STRINGS[1/*"pages"*/], ::STRINGS[2/*"companypage"*/], ::STRINGS[3/*"somethingpage"*/], ::STRINGS[4/*"loading"*/], ::STRINGS[5/*"changeWidth"*/], ::STRINGS[6/*"loadCircle"*/], ::STRINGS[7/*"scaleAndFade"*/], ::STRINGS[8/*"showLoggedIn"*/], ::STRINGS[9/*"LoginView"*/], ::STRINGS[10/*"text"*/], ::STRINGS[11/*"loadingCirc...*/], ::STRINGS[12/*"loadingCircle"*/], ::STRINGS[13/*"rectNormalS...*/], ::STRINGS[14/*"loadingButton"*/], ::STRINGS[15/*"loginButton...*/]);
    MainView::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[16/*"Active"*/]);
    MainView::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[17/*"Value"*/]);
    MainView::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[18/*"Width"*/]);
    MainView::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[19/*"Opacity"*/]);
    MainView::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[20/*"LengthAngle...*/]);
    MainView::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[21/*"Factor"*/]);
    MainView::__selector6_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[22/*"IsEnabled"*/]);
    MainView::__selector7_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[23/*"ToggleLogge...*/]);
    MainView::__selector8_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"MainView"*/]);
    MainView::__selector9_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"pages"*/]);
    MainView::__selector10_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"companypage"*/]);
    MainView::__selector11_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"somethingpage"*/]);
    MainView::__selector12_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"loading"*/]);
    MainView::__selector13_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"changeWidth"*/]);
    MainView::__selector14_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"loadCircle"*/]);
    MainView::__selector15_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[7/*"scaleAndFade"*/]);
    MainView::__selector16_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[8/*"showLoggedIn"*/]);
    MainView::__selector17_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[9/*"LoginView"*/]);
    MainView::__selector18_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[10/*"text"*/]);
    MainView::__selector19_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[11/*"loadingCirc...*/]);
    MainView::__selector20_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[12/*"loadingCircle"*/]);
    MainView::__selector21_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[13/*"rectNormalS...*/]);
    MainView::__selector22_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[14/*"loadingButton"*/]);
    MainView::__selector23_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[15/*"loginButton...*/]);
}

static void MainView_build(uType* type)
{
    ::STRINGS[0] = uString::Const("MainView");
    ::STRINGS[1] = uString::Const("pages");
    ::STRINGS[2] = uString::Const("companypage");
    ::STRINGS[3] = uString::Const("somethingpage");
    ::STRINGS[4] = uString::Const("loading");
    ::STRINGS[5] = uString::Const("changeWidth");
    ::STRINGS[6] = uString::Const("loadCircle");
    ::STRINGS[7] = uString::Const("scaleAndFade");
    ::STRINGS[8] = uString::Const("showLoggedIn");
    ::STRINGS[9] = uString::Const("LoginView");
    ::STRINGS[10] = uString::Const("text");
    ::STRINGS[11] = uString::Const("loadingCirclePanel");
    ::STRINGS[12] = uString::Const("loadingCircle");
    ::STRINGS[13] = uString::Const("rectNormalScale");
    ::STRINGS[14] = uString::Const("loadingButton");
    ::STRINGS[15] = uString::Const("loginButtonScaling");
    ::STRINGS[16] = uString::Const("Active");
    ::STRINGS[17] = uString::Const("Value");
    ::STRINGS[18] = uString::Const("Width");
    ::STRINGS[19] = uString::Const("Opacity");
    ::STRINGS[20] = uString::Const("LengthAngleDegrees");
    ::STRINGS[21] = uString::Const("Factor");
    ::STRINGS[22] = uString::Const("IsEnabled");
    ::STRINGS[23] = uString::Const("ToggleLoggedIn");
    ::STRINGS[24] = uString::Const("page");
    ::STRINGS[25] = uString::Const("logedin");
    ::STRINGS[26] = uString::Const("login");
    ::STRINGS[27] = uString::Const("username");
    ::STRINGS[28] = uString::Const("password");
    ::STRINGS[29] = uString::Const("MainView.ux");
    ::STRINGS[30] = uString::Const("Hurra side 2");
    ::STRINGS[31] = uString::Const("1*,auto,1*");
    ::STRINGS[32] = uString::Const("Logg inn");
    ::STRINGS[33] = uString::Const("auto,1*");
    ::STRINGS[34] = uString::Const("Brukernavn");
    ::STRINGS[35] = uString::Const("Passord");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Visual_typeof());
    ::TYPES[2] = ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[3] = ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::Size_typeof());
    ::TYPES[4] = ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof());
    ::TYPES[5] = ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[6] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Fuse::Visual_typeof());
    ::TYPES[7] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[8] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[9] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::UX::Size_typeof());
    ::TYPES[10] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof());
    ::TYPES[11] = ::g::Fuse::Animations::Cycle_typeof()->MakeType(::g::Uno::Float_typeof());
    ::TYPES[12] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Visual_typeof());
    ::TYPES[13] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[14] = ::g::Uno::UX::FileSource_typeof();
    ::TYPES[15] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[16] = ::g::Fuse::Node_typeof();
    ::TYPES[17] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof());
    ::TYPES[18] = ::g::Fuse::Binding_typeof();
    ::TYPES[19] = ::g::Fuse::Drawing::Brush_typeof();
    ::TYPES[20] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof());
    ::TYPES[21] = ::g::Fuse::Animations::Animator_typeof();
    ::TYPES[22] = ::g::Fuse::Visual_typeof();
    ::TYPES[23] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    ::TYPES[24] = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    ::TYPES[25] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Effects::Effect_typeof());
    ::TYPES[26] = ::g::Fuse::Effects::Effect_typeof();
    ::TYPES[27] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[28] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[29] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof());
    ::TYPES[30] = ::g::Fuse::Triggers::IValue_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[31] = uObject_typeof();
    ::TYPES[32] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof());
    type->SetFields(9,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::MainView, __g_nametable1), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(::g::MainView, changeWidth), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::MainView, changeWidth_Value_inst), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, companypage), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(::g::MainView, loadCircle), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::MainView, loadCircle_Value_inst), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(::g::MainView, loading), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::MainView, loading_Value_inst), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, loadingButton), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof()), offsetof(::g::MainView, loadingButton_Opacity_inst), 0,
        ::g::Fuse::Controls::Circle_typeof(), offsetof(::g::MainView, loadingCircle), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof()), offsetof(::g::MainView, loadingCircle_LengthAngleDegrees_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof()), offsetof(::g::MainView, loadingCircle_Opacity_inst), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, loadingCirclePanel), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof()), offsetof(::g::MainView, loadingCirclePanel_Opacity_inst), 0,
        ::g::Fuse::Scaling_typeof(), offsetof(::g::MainView, loginButtonScaling), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof()), offsetof(::g::MainView, loginButtonScaling_Factor_inst), 0,
        ::g::Fuse::Controls::Grid_typeof(), offsetof(::g::MainView, LoginView), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, MainView1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::MainView, MainView1_IsEnabled_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof()), offsetof(::g::MainView, MainView1_Opacity_inst), 0,
        ::g::Fuse::Controls::PageControl_typeof(), offsetof(::g::MainView, pages), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Visual_typeof()), offsetof(::g::MainView, pages_Active_inst), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(::g::MainView, rectNormalScale), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof()), offsetof(::g::MainView, rectNormalScale_Opacity_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::Size_typeof()), offsetof(::g::MainView, rectNormalScale_Width_inst), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(::g::MainView, scaleAndFade), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::MainView, scaleAndFade_Value_inst), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(::g::MainView, showLoggedIn), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::MainView, showLoggedIn_Value_inst), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, somethingpage), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::MainView, temp_eb1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::MainView, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::MainView, temp1_Value_inst), 0,
        ::g::Fuse::Controls::Text_typeof(), offsetof(::g::MainView, text), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof()), offsetof(::g::MainView, text_Opacity_inst), 0,
        ::g::Fuse::UserEvent_typeof(), offsetof(::g::MainView, ToggleLoggedIn), 0,
        ::g::Uno::String_typeof()->Array(), (uintptr_t)&::g::MainView::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector10_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector11_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector12_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector13_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector14_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector15_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector16_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector17_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector18_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector19_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector20_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector21_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector22_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector23_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector6_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector7_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector8_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector9_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainView__New1_fn, 0, true, MainView_typeof(), 0));
}

::g::Fuse::AppBase_type* MainView_typeof()
{
    static uSStrong< ::g::Fuse::AppBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 71;
    options.ObjectSize = sizeof(MainView);
    options.TypeSize = sizeof(::g::Fuse::AppBase_type);
    type = (::g::Fuse::AppBase_type*)uClassType::New("MainView", options);
    type->SetBase(::g::Fuse::App_typeof());
    type->fp_build_ = MainView_build;
    type->fp_ctor_ = (void*)MainView__New1_fn;
    type->fp_cctor_ = MainView__cctor__fn;
    return type;
}

// public MainView() :63
void MainView__ctor_3_fn(MainView* __this)
{
    __this->ctor_3();
}

// private void InitializeUX() :67
void MainView__InitializeUX_fn(MainView* __this)
{
    __this->InitializeUX();
}

// public MainView New() :63
void MainView__New1_fn(MainView** __retval)
{
    *__retval = MainView::New1();
}

uSStrong<uArray*> MainView::__g_static_nametable1_;
::g::Uno::UX::Selector MainView::__selector0_;
::g::Uno::UX::Selector MainView::__selector1_;
::g::Uno::UX::Selector MainView::__selector10_;
::g::Uno::UX::Selector MainView::__selector11_;
::g::Uno::UX::Selector MainView::__selector12_;
::g::Uno::UX::Selector MainView::__selector13_;
::g::Uno::UX::Selector MainView::__selector14_;
::g::Uno::UX::Selector MainView::__selector15_;
::g::Uno::UX::Selector MainView::__selector16_;
::g::Uno::UX::Selector MainView::__selector17_;
::g::Uno::UX::Selector MainView::__selector18_;
::g::Uno::UX::Selector MainView::__selector19_;
::g::Uno::UX::Selector MainView::__selector2_;
::g::Uno::UX::Selector MainView::__selector20_;
::g::Uno::UX::Selector MainView::__selector21_;
::g::Uno::UX::Selector MainView::__selector22_;
::g::Uno::UX::Selector MainView::__selector23_;
::g::Uno::UX::Selector MainView::__selector3_;
::g::Uno::UX::Selector MainView::__selector4_;
::g::Uno::UX::Selector MainView::__selector5_;
::g::Uno::UX::Selector MainView::__selector6_;
::g::Uno::UX::Selector MainView::__selector7_;
::g::Uno::UX::Selector MainView::__selector8_;
::g::Uno::UX::Selector MainView::__selector9_;

// public MainView() [instance] :63
void MainView::ctor_3()
{
    uStackFrame __("MainView", ".ctor()");
    ctor_2();
    InitializeUX();
}

// private void InitializeUX() [instance] :67
void MainView::InitializeUX()
{
    uStackFrame __("MainView", "InitializeUX()");
    ::g::Fuse::Reactive::FuseJS::TimerModule* temp2 = ::g::Fuse::Reactive::FuseJS::TimerModule::New2();
    ::g::Fuse::Reactive::FuseJS::Http* temp3 = ::g::Fuse::Reactive::FuseJS::Http::New2();
    ::g::Fuse::Storage::StorageModule* temp4 = ::g::Fuse::Storage::StorageModule::New2();
    ::g::Fuse::LocalNotifications::LocalNotify* temp5 = ::g::Fuse::LocalNotifications::LocalNotify::New2();
    ::g::Polyfills::Window::WindowModule* temp6 = ::g::Polyfills::Window::WindowModule::New3();
    ::g::FuseJS::Globals* temp7 = ::g::FuseJS::Globals::New2();
    ::g::FuseJS::Lifecycle* temp8 = ::g::FuseJS::Lifecycle::New2();
    ::g::FuseJS::Environment* temp9 = ::g::FuseJS::Environment::New2();
    ::g::FuseJS::Base64* temp10 = ::g::FuseJS::Base64::New2();
    ::g::FuseJS::Bundle* temp11 = ::g::FuseJS::Bundle::New2();
    ::g::FuseJS::FileReaderImpl* temp12 = ::g::FuseJS::FileReaderImpl::New2();
    ::g::FuseJS::UserEvents* temp13 = ::g::FuseJS::UserEvents::New2();
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, MainView::__g_static_nametable1());
    pages = ::g::Fuse::Controls::PageControl::New4();
    pages_Active_inst = ::g::UniEconomy_FuseControlsPageControl_Active_Property::New1(pages, MainView::__selector0());
    changeWidth = ::g::Fuse::Triggers::WhileTrue::New2();
    changeWidth_Value_inst = ::g::UniEconomy_FuseTriggersWhileTrue_Value_Property::New1(changeWidth, MainView::__selector1());
    loadCircle = ::g::Fuse::Triggers::WhileTrue::New2();
    loadCircle_Value_inst = ::g::UniEconomy_FuseTriggersWhileTrue_Value_Property::New1(loadCircle, MainView::__selector1());
    scaleAndFade = ::g::Fuse::Triggers::WhileTrue::New2();
    scaleAndFade_Value_inst = ::g::UniEconomy_FuseTriggersWhileTrue_Value_Property::New1(scaleAndFade, MainView::__selector1());
    showLoggedIn = ::g::Fuse::Triggers::WhileTrue::New2();
    showLoggedIn_Value_inst = ::g::UniEconomy_FuseTriggersWhileTrue_Value_Property::New1(showLoggedIn, MainView::__selector1());
    loading = ::g::Fuse::Triggers::WhileTrue::New2();
    loading_Value_inst = ::g::UniEconomy_FuseTriggersWhileTrue_Value_Property::New1(loading, MainView::__selector1());
    rectNormalScale = ::g::Fuse::Controls::Rectangle::New3();
    rectNormalScale_Width_inst = ::g::UniEconomy_FuseControlsRectangle_Width_Property::New1(rectNormalScale, MainView::__selector2());
    text = ::g::Fuse::Controls::Text::New3();
    text_Opacity_inst = ::g::UniEconomy_FuseControlsText_Opacity_Property::New1(text, MainView::__selector3());
    loadingCircle = ::g::Fuse::Controls::Circle::New3();
    loadingCircle_Opacity_inst = ::g::UniEconomy_FuseControlsCircle_Opacity_Property::New1(loadingCircle, MainView::__selector3());
    loadingCircle_LengthAngleDegrees_inst = ::g::UniEconomy_FuseControlsCircle_LengthAngleDegrees_Property::New1(loadingCircle, MainView::__selector4());
    loadingCirclePanel = ::g::Fuse::Controls::Panel::New3();
    loadingCirclePanel_Opacity_inst = ::g::UniEconomy_FuseControlsPanel_Opacity_Property::New1(loadingCirclePanel, MainView::__selector3());
    loadingButton = ::g::Fuse::Controls::Panel::New3();
    loadingButton_Opacity_inst = ::g::UniEconomy_FuseControlsPanel_Opacity_Property::New1(loadingButton, MainView::__selector3());
    rectNormalScale_Opacity_inst = ::g::UniEconomy_FuseControlsRectangle_Opacity_Property::New1(rectNormalScale, MainView::__selector3());
    loginButtonScaling = ::g::Fuse::Scaling::New2();
    loginButtonScaling_Factor_inst = ::g::UniEconomy_FuseScaling_Factor_Property::New1(loginButtonScaling, MainView::__selector5());
    MainView1 = ::g::Fuse::Controls::Panel::New3();
    MainView1_Opacity_inst = ::g::UniEconomy_FuseControlsPanel_Opacity_Property::New1(MainView1, MainView::__selector3());
    MainView1_IsEnabled_inst = ::g::UniEconomy_FuseControlsPanel_IsEnabled_Property::New1(MainView1, MainView::__selector6());
    ::g::Fuse::Controls::TextInput* temp = ::g::Fuse::Controls::TextInput::New3();
    temp_Value_inst = ::g::UniEconomy_FuseControlsTextInput_Value_Property::New1(temp, MainView::__selector1());
    ::g::Fuse::Controls::TextInput* temp1 = ::g::Fuse::Controls::TextInput::New3();
    temp1_Value_inst = ::g::UniEconomy_FuseControlsTextInput_Value_Property::New1(temp1, MainView::__selector1());
    ::g::Fuse::Reactive::JavaScript* temp14 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::Panel* temp15 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::iOS::StatusBarConfig* temp16 = ::g::Fuse::iOS::StatusBarConfig::New2();
    ::g::Fuse::Reactive::DataBinding* temp17 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[6/*Fuse.Reactive.DataBinding<Fuse.Visual>*/], pages_Active_inst, ::STRINGS[24/*"page"*/]);
    ToggleLoggedIn = ::g::Fuse::UserEvent::New2();
    ::g::Fuse::Controls::DockPanel* temp18 = ::g::Fuse::Controls::DockPanel::New4();
    companypage = ::g::Fuse::Controls::Page::New4();
    ::g::CompanySelect* temp19 = ::g::CompanySelect::New5();
    ::g::Fuse::Drawing::StaticSolidColor* temp20 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.509804f, 0.7529412f, 1.0f));
    somethingpage = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Controls::Text* temp21 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp22 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Fuse::Animations::Change* temp23 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[7/*Fuse.Animations.Change<bool>*/], changeWidth_Value_inst);
    ::g::Fuse::Animations::Change* temp24 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[7/*Fuse.Animations.Change<bool>*/], loadCircle_Value_inst);
    ::g::Fuse::Animations::Change* temp25 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[7/*Fuse.Animations.Change<bool>*/], scaleAndFade_Value_inst);
    ::g::Fuse::Animations::Change* temp26 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[7/*Fuse.Animations.Change<bool>*/], showLoggedIn_Value_inst);
    ::g::Fuse::Reactive::DataBinding* temp27 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[8/*Fuse.Reactive.DataBinding<bool>*/], loading_Value_inst, ::STRINGS[25/*"logedin"*/]);
    ::g::Fuse::Animations::Change* temp28 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[9/*Fuse.Animations.Change<Uno.UX.Size>*/], rectNormalScale_Width_inst);
    ::g::Fuse::Animations::Change* temp29 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[10/*Fuse.Animations.Change<float>*/], text_Opacity_inst);
    ::g::Fuse::Animations::Change* temp30 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[10/*Fuse.Animations.Change<float>*/], loadingCircle_Opacity_inst);
    ::g::Fuse::Animations::Spin* temp31 = ::g::Fuse::Animations::Spin::New2();
    ::g::Fuse::Animations::Cycle* temp32 = (::g::Fuse::Animations::Cycle*)::g::Fuse::Animations::Cycle::New2(::TYPES[11/*Fuse.Animations.Cycle<float>*/], loadingCircle_LengthAngleDegrees_inst);
    ::g::Fuse::Animations::Change* temp33 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[10/*Fuse.Animations.Change<float>*/], loadingCirclePanel_Opacity_inst);
    ::g::Fuse::Animations::Change* temp34 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[10/*Fuse.Animations.Change<float>*/], loadingButton_Opacity_inst);
    ::g::Fuse::Animations::Change* temp35 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[10/*Fuse.Animations.Change<float>*/], rectNormalScale_Opacity_inst);
    ::g::Fuse::Animations::Change* temp36 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[10/*Fuse.Animations.Change<float>*/], loginButtonScaling_Factor_inst);
    ::g::Fuse::Animations::Change* temp37 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[10/*Fuse.Animations.Change<float>*/], MainView1_Opacity_inst);
    ::g::Fuse::Triggers::Actions::RaiseUserEvent* temp38 = ::g::Fuse::Triggers::Actions::RaiseUserEvent::New2();
    ::g::Fuse::Animations::Change* temp39 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[7/*Fuse.Animations.Change<bool>*/], MainView1_IsEnabled_inst);
    ::g::Fuse::Triggers::Actions::Set* temp40 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[12/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], pages_Active_inst);
    LoginView = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Rectangle* temp41 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Image* temp42 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Effects::Blur* temp43 = ::g::Fuse::Effects::Blur::New2();
    ::g::Fuse::Controls::Panel* temp44 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Drawing::Stroke* temp45 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp46 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Fuse::Gestures::Clicked* temp47 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Controls::Toggle* temp48 = ::g::Fuse::Controls::Toggle::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp49 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.509804f, 0.7529412f, 1.0f));
    ::g::Fuse::Controls::Circle* temp50 = ::g::Fuse::Controls::Circle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp51 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.509804f, 0.7529412f, 1.0f));
    temp_eb1 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[26/*"login"*/]);
    ::g::Fuse::Controls::Image* temp52 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Grid* temp53 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Image* temp54 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Reactive::DataBinding* temp55 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[13/*Fuse.Reactive.DataBinding<string>*/], temp_Value_inst, ::STRINGS[27/*"username"*/]);
    ::g::Fuse::Controls::Rectangle* temp56 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp57 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Fuse::Controls::Image* temp58 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Reactive::DataBinding* temp59 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[13/*Fuse.Reactive.DataBinding<string>*/], temp1_Value_inst, ::STRINGS[28/*"password"*/]);
    ::g::Fuse::Controls::Rectangle* temp60 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp61 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp14->LineNumber(2);
    temp14->FileName(::STRINGS[29/*"MainView.ux"*/]);
    temp14->File(::g::Uno::UX::BundleFileSource::New1(::g::UniEconomy_bundle::LoginView643538e4()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), ToggleLoggedIn);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), MainView1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), loading);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), changeWidth);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), loadCircle);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), scaleAndFade);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), showLoggedIn);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), LoginView);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Bindings()), ::TYPES[17/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp17);
    temp16->Style(1);
    uPtr(ToggleLoggedIn)->Name(MainView::__selector7());
    uPtr(MainView1)->Opacity(0.0f);
    uPtr(MainView1)->IsEnabled(false);
    uPtr(MainView1)->Name(MainView::__selector8());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(MainView1)->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), pages);
    uPtr(pages)->Name(MainView::__selector9());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(pages)->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), companypage);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(pages)->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), somethingpage);
    uPtr(companypage)->Name(MainView::__selector10());
    uPtr(companypage)->Background(temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(companypage)->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp19);
    uPtr(somethingpage)->Name(MainView::__selector11());
    uPtr(somethingpage)->Background(temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(somethingpage)->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp21);
    temp21->Value(::STRINGS[30/*"Hurra side 2"*/]);
    uPtr(loading)->Name(MainView::__selector12());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loading)->Animators()), ::TYPES[20/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loading)->Animators()), ::TYPES[20/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp24);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loading)->Animators()), ::TYPES[20/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp25);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loading)->Animators()), ::TYPES[20/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp26);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loading)->Bindings()), ::TYPES[17/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp27);
    ::g::Fuse::Animations::Change__set_Value_fn(temp23, uCRef(true));
    temp23->DelayBack(0.0);
    ::g::Fuse::Animations::Change__set_Value_fn(temp24, uCRef(true));
    temp24->DelayBack(0.0);
    ::g::Fuse::Animations::Change__set_Value_fn(temp25, uCRef(true));
    temp25->DelayBack(0.0);
    temp25->Delay(1.5);
    ::g::Fuse::Animations::Change__set_Value_fn(temp26, uCRef(true));
    temp26->Delay(1.7);
    uPtr(changeWidth)->Name(MainView::__selector13());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(changeWidth)->Animators()), ::TYPES[20/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp28);
    ::g::Fuse::Animations::Change__set_Value_fn(temp28, uCRef(::g::Uno::UX::Size__New1(60.0f, 1)));
    temp28->Easing(21);
    temp28->Duration(0.5);
    temp28->DurationBack(0.0);
    uPtr(loadCircle)->Name(MainView::__selector14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loadCircle)->Animators()), ::TYPES[20/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp29);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loadCircle)->Animators()), ::TYPES[20/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp30);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loadCircle)->Animators()), ::TYPES[20/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp31);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loadCircle)->Animators()), ::TYPES[20/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp32);
    ::g::Fuse::Animations::Change__set_Value_fn(temp29, uCRef(0.0f));
    temp29->Duration(0.2);
    temp29->DurationBack(0.0);
    ::g::Fuse::Animations::Change__set_Value_fn(temp30, uCRef(1.0f));
    temp30->Duration(0.3);
    temp30->DurationBack(0.0);
    temp30->DelayBack(0.0);
    temp30->Delay(0.2);
    temp31->Frequency(2.0);
    temp31->Target(loadingCircle);
    temp32->Low(30.0f);
    temp32->High(300.0f);
    temp32->Frequency(0.7);
    uPtr(scaleAndFade)->Name(MainView::__selector15());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(scaleAndFade)->Animators()), ::TYPES[20/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp33);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(scaleAndFade)->Animators()), ::TYPES[20/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp34);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(scaleAndFade)->Animators()), ::TYPES[20/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp35);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(scaleAndFade)->Animators()), ::TYPES[20/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp36);
    ::g::Fuse::Animations::Change__set_Value_fn(temp33, uCRef(0.0f));
    temp33->Duration(0.1);
    ::g::Fuse::Animations::Change__set_Value_fn(temp34, uCRef(1.0f));
    temp34->Duration(0.01);
    ::g::Fuse::Animations::Change__set_Value_fn(temp35, uCRef(0.0f));
    temp35->Duration(0.01);
    ::g::Fuse::Animations::Change__set_Value_fn(temp36, uCRef(1.0f));
    temp36->Easing(18);
    temp36->Duration(0.7);
    temp36->DurationBack(0.0);
    temp36->Delay(0.01);
    uPtr(showLoggedIn)->Name(MainView::__selector16());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showLoggedIn)->Animators()), ::TYPES[20/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp37);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showLoggedIn)->Animators()), ::TYPES[20/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp39);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showLoggedIn)->Actions()), ::TYPES[23/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp38);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showLoggedIn)->Actions()), ::TYPES[23/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp40);
    ::g::Fuse::Animations::Change__set_Value_fn(temp37, uCRef(1.0f));
    temp37->Easing(6);
    temp37->Duration(0.65);
    temp37->DurationBack(0.35);
    temp37->DelayBack(0.3);
    temp37->Delay(0.1);
    temp38->Name(MainView::__selector7());
    ::g::Fuse::Animations::Change__set_Value_fn(temp39, uCRef(true));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp40, companypage);
    uPtr(LoginView)->Rows(::STRINGS[31/*"1*,auto,1*"*/]);
    uPtr(LoginView)->Padding(::g::Uno::Float4__New2(40.0f, 0.0f, 40.0f, 0.0f));
    uPtr(LoginView)->Name(MainView::__selector17());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(LoginView)->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp41);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(LoginView)->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp44);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(LoginView)->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp52);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(LoginView)->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp53);
    temp41->Layer(0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp42);
    temp42->StretchMode(6);
    temp42->Opacity(0.8f);
    temp42->File(::g::Uno::UX::BundleFileSource::New1(::g::UniEconomy_bundle::modalena0963598()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp42->Effects()), ::TYPES[25/*Uno.Collections.ICollection<Fuse.Effects.Effect>*/]), temp43);
    temp44->Width(::g::Uno::UX::Size__New1(150.0f, 1));
    temp44->Height(::g::Uno::UX::Size__New1(60.0f, 1));
    ::g::Fuse::Controls::Grid::SetRow(temp44, 2);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp44, uDelegate::New(::TYPES[28/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb1)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp44->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), text);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp44->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), loadingCirclePanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp44->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp47);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp44->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), rectNormalScale);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp44->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), loadingButton);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp44->Bindings()), ::TYPES[17/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb1);
    uPtr(text)->Value(::STRINGS[32/*"Logg inn"*/]);
    uPtr(text)->FontSize(18.0f);
    uPtr(text)->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    uPtr(text)->Alignment(10);
    uPtr(text)->Name(MainView::__selector18());
    uPtr(loadingCirclePanel)->Name(MainView::__selector19());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loadingCirclePanel)->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), loadingCircle);
    uPtr(loadingCircle)->StartAngleDegrees(0.0f);
    uPtr(loadingCircle)->LengthAngleDegrees(90.0f);
    uPtr(loadingCircle)->Width(::g::Uno::UX::Size__New1(70.0f, 4));
    uPtr(loadingCircle)->Height(::g::Uno::UX::Size__New1(73.0f, 4));
    uPtr(loadingCircle)->Opacity(0.0f);
    uPtr(loadingCircle)->Name(MainView::__selector20());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loadingCircle)->Strokes()), ::TYPES[29/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp45);
    temp45->Width(1.0f);
    temp45->Brush(temp46);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp47->Actions()), ::TYPES[23/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp48);
    temp48->Target((uObject*)loading);
    uPtr(rectNormalScale)->CornerRadius(::g::Uno::Float4__New2(30.0f, 30.0f, 30.0f, 30.0f));
    uPtr(rectNormalScale)->Width(::g::Uno::UX::Size__New1(300.0f, 1));
    uPtr(rectNormalScale)->Height(::g::Uno::UX::Size__New1(60.0f, 1));
    uPtr(rectNormalScale)->Name(MainView::__selector21());
    uPtr(rectNormalScale)->Fill(temp49);
    uPtr(loadingButton)->Width(::g::Uno::UX::Size__New1(1320.0f, 1));
    uPtr(loadingButton)->Height(::g::Uno::UX::Size__New1(1320.0f, 1));
    uPtr(loadingButton)->Alignment(10);
    uPtr(loadingButton)->Opacity(0.0f);
    uPtr(loadingButton)->Name(MainView::__selector22());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loadingButton)->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp50);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loadingButton)->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), loginButtonScaling);
    temp50->Fill(temp51);
    uPtr(loginButtonScaling)->Factor(0.04545f);
    uPtr(loginButtonScaling)->Name(MainView::__selector23());
    temp52->Width(::g::Uno::UX::Size__New1(150.0f, 1));
    ::g::Fuse::Controls::Grid::SetRow(temp52, 0);
    temp52->File(::g::Uno::UX::BundleFileSource::New1(::g::UniEconomy_bundle::ue54862634()));
    temp53->RowCount(2);
    temp53->Columns(::STRINGS[33/*"auto,1*"*/]);
    temp53->Height(::g::Uno::UX::Size__New1(160.0f, 1));
    temp53->Padding(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 20.0f));
    ::g::Fuse::Controls::Grid::SetRow(temp53, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp53->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp54);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp53->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp53->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp56);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp53->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp58);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp53->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp53->Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp60);
    temp54->Width(::g::Uno::UX::Size__New1(20.0f, 1));
    temp54->Height(::g::Uno::UX::Size__New1(20.0f, 1));
    temp54->Alignment(1);
    temp54->Margin(::g::Uno::Float4__New2(10.0f, 0.0f, 30.0f, 0.0f));
    ::g::Fuse::Controls::Grid::SetRow(temp54, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp54, 0);
    temp54->File(::g::Uno::UX::BundleFileSource::New1(::g::UniEconomy_bundle::user_icon18d2cbf7()));
    temp->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp->PlaceholderText(::STRINGS[34/*"Brukernavn"*/]);
    temp->PlaceholderColor(::g::Uno::Float4__New2(0.6f, 0.6f, 0.6f, 1.0f));
    temp->Alignment(9);
    ::g::Fuse::Controls::Grid::SetRow(temp, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[17/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp55);
    temp56->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp56->Alignment(12);
    ::g::Fuse::Controls::Grid::SetRow(temp56, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp56, 0);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp56, 2);
    temp56->Fill(temp57);
    temp58->Width(::g::Uno::UX::Size__New1(20.0f, 1));
    temp58->Height(::g::Uno::UX::Size__New1(20.0f, 1));
    temp58->Alignment(1);
    temp58->Margin(::g::Uno::Float4__New2(10.0f, 0.0f, 30.0f, 0.0f));
    ::g::Fuse::Controls::Grid::SetRow(temp58, 1);
    ::g::Fuse::Controls::Grid::SetColumn(temp58, 0);
    temp58->File(::g::Uno::UX::BundleFileSource::New1(::g::UniEconomy_bundle::password_icon59f9fda7()));
    temp1->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp1->PlaceholderText(::STRINGS[35/*"Passord"*/]);
    temp1->PlaceholderColor(::g::Uno::Float4__New2(0.6f, 0.6f, 0.6f, 1.0f));
    temp1->Alignment(9);
    ::g::Fuse::Controls::Grid::SetRow(temp1, 1);
    ::g::Fuse::Controls::Grid::SetColumn(temp1, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[17/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp59);
    temp60->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp60->Alignment(12);
    ::g::Fuse::Controls::Grid::SetRow(temp60, 1);
    ::g::Fuse::Controls::Grid::SetColumn(temp60, 0);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp60, 2);
    temp60->Fill(temp61);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[32/*Uno.Collections.ICollection<object>*/]), MainView1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[32/*Uno.Collections.ICollection<object>*/]), pages);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[32/*Uno.Collections.ICollection<object>*/]), companypage);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[32/*Uno.Collections.ICollection<object>*/]), somethingpage);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[32/*Uno.Collections.ICollection<object>*/]), loading);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[32/*Uno.Collections.ICollection<object>*/]), changeWidth);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[32/*Uno.Collections.ICollection<object>*/]), loadCircle);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[32/*Uno.Collections.ICollection<object>*/]), scaleAndFade);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[32/*Uno.Collections.ICollection<object>*/]), showLoggedIn);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[32/*Uno.Collections.ICollection<object>*/]), LoginView);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[32/*Uno.Collections.ICollection<object>*/]), text);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[32/*Uno.Collections.ICollection<object>*/]), loadingCirclePanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[32/*Uno.Collections.ICollection<object>*/]), loadingCircle);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[32/*Uno.Collections.ICollection<object>*/]), rectNormalScale);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[32/*Uno.Collections.ICollection<object>*/]), loadingButton);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[32/*Uno.Collections.ICollection<object>*/]), loginButtonScaling);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Node>*/]), temp15);
}

// public MainView New() [static] :63
MainView* MainView::New1()
{
    MainView* obj1 = (MainView*)uNew(MainView_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

} // ::g
