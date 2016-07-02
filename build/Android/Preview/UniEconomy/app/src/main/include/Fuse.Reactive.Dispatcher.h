// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive/0.31.5/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.Threading.IDispatcher.h>
namespace g{namespace Fuse{namespace Reactive{struct Dispatcher;}}}
namespace g{namespace Uno{namespace Threading{struct ConcurrentQueue;}}}
namespace g{namespace Uno{namespace Threading{struct Thread;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Dispatcher :422
// {
struct Dispatcher_type : uType
{
    ::g::Uno::Threading::IDispatcher interface0;
};

Dispatcher_type* Dispatcher_typeof();
void Dispatcher__ctor__fn(Dispatcher* __this);
void Dispatcher__Invoke_fn(Dispatcher* __this, uDelegate* action);
void Dispatcher__New1_fn(Dispatcher** __retval);
void Dispatcher__Run_fn(Dispatcher* __this);
void Dispatcher__get_UIThread_fn(Dispatcher** __retval);

struct Dispatcher : uObject
{
    uStrong< ::g::Uno::Threading::ConcurrentQueue*> _actions;
    uStrong< ::g::Uno::Threading::Thread*> _dispatcherThread;
    uStrong<uDelegate*> _eachFrameCallback;
    bool _hasPauseLock;
    static uSStrong<Dispatcher*> _uiThread_;
    static uSStrong<Dispatcher*>& _uiThread() { return _uiThread_; }

    void ctor_();
    void Invoke(uDelegate* action);
    void Run();
    static Dispatcher* New1();
    static Dispatcher* UIThread();
};
// }

}}} // ::g::Fuse::Reactive
