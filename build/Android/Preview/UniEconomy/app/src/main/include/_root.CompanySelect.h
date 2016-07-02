// This file was generated based on /Users/terjepedersen/Prosjekt/Fuse/UniEconomy/build/Android/Preview/cache/CompanySelect.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct CompanySelect;}

namespace g{

// public partial sealed class CompanySelect :2
// {
::g::Fuse::Controls::Control_type* CompanySelect_typeof();
void CompanySelect__ctor_8_fn(CompanySelect* __this);
void CompanySelect__InitializeUX_fn(CompanySelect* __this);
void CompanySelect__New5_fn(CompanySelect** __retval);

struct CompanySelect : ::g::Fuse::Controls::DockPanel
{
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return CompanySelect_typeof()->Init(), __selector0_; }
    uStrong< ::g::Uno::UX::Property1*> temp_Items_inst;

    void ctor_8();
    void InitializeUX();
    static CompanySelect* New5();
};
// }

} // ::g
