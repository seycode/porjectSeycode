// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive/0.32.14/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct Observable;}}}
namespace g{namespace Fuse{namespace Reactive{struct Observable__Subscription;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Observable.Subscription :1975
// {
struct Observable__Subscription_type : uType
{
    ::g::Uno::IDisposable interface0;
};

Observable__Subscription_type* Observable__Subscription_typeof();
void Observable__Subscription__ctor__fn(Observable__Subscription* __this, ::g::Fuse::Reactive::Observable* om, uObject* obs);
void Observable__Subscription__Dispose_fn(Observable__Subscription* __this);
void Observable__Subscription__New1_fn(::g::Fuse::Reactive::Observable* om, uObject* obs, Observable__Subscription** __retval);
void Observable__Subscription__get_Observer_fn(Observable__Subscription* __this, uObject** __retval);
void Observable__Subscription__get_Origin_fn(Observable__Subscription* __this, int* __retval);
void Observable__Subscription__SetExclusive_fn(Observable__Subscription* __this, uObject* newValue);
void Observable__Subscription__SetExclusiveIfNoValue_fn(Observable__Subscription* __this, uObject* newValue);

struct Observable__Subscription : uObject
{
    static int _counter_;
    static int& _counter() { return _counter_; }
    uStrong<uObject*> _obs;
    uStrong< ::g::Fuse::Reactive::Observable*> _om;
    int _origin;

    void ctor_(::g::Fuse::Reactive::Observable* om, uObject* obs);
    void Dispose();
    uObject* Observer();
    int Origin();
    void SetExclusive(uObject* newValue);
    void SetExclusiveIfNoValue(uObject* newValue);
    static Observable__Subscription* New1(::g::Fuse::Reactive::Observable* om, uObject* obs);
};
// }

}}} // ::g::Fuse::Reactive
