// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Primitives/0.31.5/.uno/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Fuse{namespace Controls{struct Button;}}}
namespace g{namespace Fuse{namespace Controls{struct Button__Template1;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public partial sealed class Button.Template1 :102
// {
::g::Uno::UX::Template_type* Button__Template1_typeof();
void Button__Template1__ctor_1_fn(Button__Template1* __this, ::g::Fuse::Controls::Button* parent);
void Button__Template1__New1_fn(Button__Template1* __this, uObject** __retval);
void Button__Template1__New2_fn(::g::Fuse::Controls::Button* parent, Button__Template1** __retval);

struct Button__Template1 : ::g::Uno::UX::Template
{
    uStrong< ::g::Fuse::Controls::Button*> __parent1;

    void ctor_1(::g::Fuse::Controls::Button* parent);
    static Button__Template1* New2(::g::Fuse::Controls::Button* parent);
};
// }

}}} // ::g::Fuse::Controls
