// This file was generated based on /usr/local/share/uno/Packages/Fuse.UserEvents/0.31.5/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Uno.UX.Selector.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct RaiseUserEvent;}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct UserEventArg;}}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct UserEvent;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class RaiseUserEvent :126
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* RaiseUserEvent_typeof();
void RaiseUserEvent__ctor_2_fn(RaiseUserEvent* __this);
void RaiseUserEvent__get_ArgList_fn(RaiseUserEvent* __this, uObject** __retval);
void RaiseUserEvent__ConvertArgs_fn(RaiseUserEvent* __this, ::g::Uno::Collections::Dictionary** __retval);
void RaiseUserEvent__get_Name_fn(RaiseUserEvent* __this, ::g::Uno::UX::Selector* __retval);
void RaiseUserEvent__set_Name_fn(RaiseUserEvent* __this, ::g::Uno::UX::Selector* value);
void RaiseUserEvent__New2_fn(RaiseUserEvent** __retval);
void RaiseUserEvent__Perform_fn(RaiseUserEvent* __this, ::g::Fuse::Node* target);

struct RaiseUserEvent : ::g::Fuse::Triggers::Actions::TriggerAction
{
    uStrong<uObject*> _args;
    uStrong< ::g::Fuse::UserEvent*> _event;
    uStrong< ::g::Fuse::Visual*> _eventTarget;
    ::g::Uno::UX::Selector _name;

    void ctor_2();
    uObject* ArgList();
    ::g::Uno::Collections::Dictionary* ConvertArgs();
    ::g::Uno::UX::Selector Name();
    void Name(::g::Uno::UX::Selector value);
    static RaiseUserEvent* New2();
};
// }

}}}} // ::g::Fuse::Triggers::Actions
