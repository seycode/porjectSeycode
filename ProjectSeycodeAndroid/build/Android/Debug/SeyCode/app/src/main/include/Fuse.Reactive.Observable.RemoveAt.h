// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive/0.32.14/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.Observable.Operation.h>
namespace g{namespace Fuse{namespace Reactive{struct Observable;}}}
namespace g{namespace Fuse{namespace Reactive{struct Observable__RemoveAt;}}}
namespace g{namespace Fuse{namespace Reactive{struct Observable__Subscription;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// private sealed class Observable.RemoveAt :2243
// {
::g::Fuse::Reactive::Observable__Operation_type* Observable__RemoveAt_typeof();
void Observable__RemoveAt__ctor_1_fn(Observable__RemoveAt* __this, ::g::Fuse::Reactive::Observable* obs, int* index);
void Observable__RemoveAt__New1_fn(::g::Fuse::Reactive::Observable* obs, int* index, Observable__RemoveAt** __retval);
void Observable__RemoveAt__OnPerform_fn(Observable__RemoveAt* __this);
void Observable__RemoveAt__SendMessage_fn(Observable__RemoveAt* __this, ::g::Fuse::Reactive::Observable__Subscription* sub);

struct Observable__RemoveAt : ::g::Fuse::Reactive::Observable__Operation
{
    int _index;

    void ctor_1(::g::Fuse::Reactive::Observable* obs, int index);
    static Observable__RemoveAt* New1(::g::Fuse::Reactive::Observable* obs, int index);
};
// }

}}} // ::g::Fuse::Reactive
