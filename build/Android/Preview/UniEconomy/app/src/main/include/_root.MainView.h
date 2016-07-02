// This file was generated based on /Users/terjepedersen/Prosjekt/Fuse/UniEconomy/build/Android/Preview/cache/MainView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.App.h>
#include <Uno.UX.Size.h>
namespace g{namespace Fuse{namespace Controls{struct Circle;}}}
namespace g{namespace Fuse{namespace Controls{struct Grid;}}}
namespace g{namespace Fuse{namespace Controls{struct Page;}}}
namespace g{namespace Fuse{namespace Controls{struct PageControl;}}}
namespace g{namespace Fuse{namespace Controls{struct Panel;}}}
namespace g{namespace Fuse{namespace Controls{struct Rectangle;}}}
namespace g{namespace Fuse{namespace Controls{struct Text;}}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Fuse{namespace Triggers{struct WhileTrue;}}}
namespace g{namespace Fuse{struct Scaling;}}
namespace g{namespace Fuse{struct UserEvent;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct MainView;}

namespace g{

// public partial sealed class MainView :2
// {
::g::Fuse::AppBase_type* MainView_typeof();
void MainView__ctor_3_fn(MainView* __this);
void MainView__InitializeUX_fn(MainView* __this);
void MainView__New1_fn(MainView** __retval);

struct MainView : ::g::Fuse::App
{
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return MainView_typeof()->Init(), __g_static_nametable1_; }
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return MainView_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return MainView_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector10_;
    static ::g::Uno::UX::Selector& __selector10() { return MainView_typeof()->Init(), __selector10_; }
    static ::g::Uno::UX::Selector __selector11_;
    static ::g::Uno::UX::Selector& __selector11() { return MainView_typeof()->Init(), __selector11_; }
    static ::g::Uno::UX::Selector __selector12_;
    static ::g::Uno::UX::Selector& __selector12() { return MainView_typeof()->Init(), __selector12_; }
    static ::g::Uno::UX::Selector __selector13_;
    static ::g::Uno::UX::Selector& __selector13() { return MainView_typeof()->Init(), __selector13_; }
    static ::g::Uno::UX::Selector __selector14_;
    static ::g::Uno::UX::Selector& __selector14() { return MainView_typeof()->Init(), __selector14_; }
    static ::g::Uno::UX::Selector __selector15_;
    static ::g::Uno::UX::Selector& __selector15() { return MainView_typeof()->Init(), __selector15_; }
    static ::g::Uno::UX::Selector __selector16_;
    static ::g::Uno::UX::Selector& __selector16() { return MainView_typeof()->Init(), __selector16_; }
    static ::g::Uno::UX::Selector __selector17_;
    static ::g::Uno::UX::Selector& __selector17() { return MainView_typeof()->Init(), __selector17_; }
    static ::g::Uno::UX::Selector __selector18_;
    static ::g::Uno::UX::Selector& __selector18() { return MainView_typeof()->Init(), __selector18_; }
    static ::g::Uno::UX::Selector __selector19_;
    static ::g::Uno::UX::Selector& __selector19() { return MainView_typeof()->Init(), __selector19_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return MainView_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector20_;
    static ::g::Uno::UX::Selector& __selector20() { return MainView_typeof()->Init(), __selector20_; }
    static ::g::Uno::UX::Selector __selector21_;
    static ::g::Uno::UX::Selector& __selector21() { return MainView_typeof()->Init(), __selector21_; }
    static ::g::Uno::UX::Selector __selector22_;
    static ::g::Uno::UX::Selector& __selector22() { return MainView_typeof()->Init(), __selector22_; }
    static ::g::Uno::UX::Selector __selector23_;
    static ::g::Uno::UX::Selector& __selector23() { return MainView_typeof()->Init(), __selector23_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return MainView_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return MainView_typeof()->Init(), __selector4_; }
    static ::g::Uno::UX::Selector __selector5_;
    static ::g::Uno::UX::Selector& __selector5() { return MainView_typeof()->Init(), __selector5_; }
    static ::g::Uno::UX::Selector __selector6_;
    static ::g::Uno::UX::Selector& __selector6() { return MainView_typeof()->Init(), __selector6_; }
    static ::g::Uno::UX::Selector __selector7_;
    static ::g::Uno::UX::Selector& __selector7() { return MainView_typeof()->Init(), __selector7_; }
    static ::g::Uno::UX::Selector __selector8_;
    static ::g::Uno::UX::Selector& __selector8() { return MainView_typeof()->Init(), __selector8_; }
    static ::g::Uno::UX::Selector __selector9_;
    static ::g::Uno::UX::Selector& __selector9() { return MainView_typeof()->Init(), __selector9_; }
    uStrong< ::g::Fuse::Triggers::WhileTrue*> changeWidth;
    uStrong< ::g::Uno::UX::Property1*> changeWidth_Value_inst;
    uStrong< ::g::Fuse::Controls::Page*> companypage;
    uStrong< ::g::Fuse::Triggers::WhileTrue*> loadCircle;
    uStrong< ::g::Uno::UX::Property1*> loadCircle_Value_inst;
    uStrong< ::g::Fuse::Triggers::WhileTrue*> loading;
    uStrong< ::g::Uno::UX::Property1*> loading_Value_inst;
    uStrong< ::g::Fuse::Controls::Panel*> loadingButton;
    uStrong< ::g::Uno::UX::Property1*> loadingButton_Opacity_inst;
    uStrong< ::g::Fuse::Controls::Circle*> loadingCircle;
    uStrong< ::g::Uno::UX::Property1*> loadingCircle_LengthAngleDegrees_inst;
    uStrong< ::g::Uno::UX::Property1*> loadingCircle_Opacity_inst;
    uStrong< ::g::Fuse::Controls::Panel*> loadingCirclePanel;
    uStrong< ::g::Uno::UX::Property1*> loadingCirclePanel_Opacity_inst;
    uStrong< ::g::Fuse::Scaling*> loginButtonScaling;
    uStrong< ::g::Uno::UX::Property1*> loginButtonScaling_Factor_inst;
    uStrong< ::g::Fuse::Controls::Grid*> LoginView;
    uStrong< ::g::Fuse::Controls::Panel*> MainView1;
    uStrong< ::g::Uno::UX::Property1*> MainView1_IsEnabled_inst;
    uStrong< ::g::Uno::UX::Property1*> MainView1_Opacity_inst;
    uStrong< ::g::Fuse::Controls::PageControl*> pages;
    uStrong< ::g::Uno::UX::Property1*> pages_Active_inst;
    uStrong< ::g::Fuse::Controls::Rectangle*> rectNormalScale;
    uStrong< ::g::Uno::UX::Property1*> rectNormalScale_Opacity_inst;
    uStrong< ::g::Uno::UX::Property1*> rectNormalScale_Width_inst;
    uStrong< ::g::Fuse::Triggers::WhileTrue*> scaleAndFade;
    uStrong< ::g::Uno::UX::Property1*> scaleAndFade_Value_inst;
    uStrong< ::g::Fuse::Triggers::WhileTrue*> showLoggedIn;
    uStrong< ::g::Uno::UX::Property1*> showLoggedIn_Value_inst;
    uStrong< ::g::Fuse::Controls::Page*> somethingpage;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb1;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Value_inst;
    uStrong< ::g::Fuse::Controls::Text*> text;
    uStrong< ::g::Uno::UX::Property1*> text_Opacity_inst;
    uStrong< ::g::Fuse::UserEvent*> ToggleLoggedIn;

    void ctor_3();
    void InitializeUX();
    static MainView* New1();
};
// }

} // ::g
