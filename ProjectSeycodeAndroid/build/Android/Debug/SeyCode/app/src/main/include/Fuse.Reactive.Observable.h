// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive/0.32.14/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.ListMirror.h>
#include <Fuse.Scripting.IArray.h>
namespace g{namespace Fuse{namespace Reactive{struct Observable;}}}
namespace g{namespace Fuse{namespace Reactive{struct Observable__Operation;}}}
namespace g{namespace Fuse{namespace Reactive{struct Observable__Subscription;}}}
namespace g{namespace Fuse{namespace Reactive{struct ThreadWorker;}}}
namespace g{namespace Fuse{namespace Scripting{struct Function;}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal sealed class Observable :1956
// {
::g::Fuse::Reactive::ListMirror_type* Observable_typeof();
void Observable__ctor_2_fn(Observable* __this, ::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj);
void Observable__Create_fn(::g::Fuse::Reactive::ThreadWorker* worker, Observable** __retval);
void Observable__get_IsUnsubscribed_fn(Observable* __this, bool* __retval);
void Observable__get_Item_fn(Observable* __this, int* index, uObject** __retval);
void Observable__get_Length_fn(Observable* __this, int* __retval);
void Observable__New1_fn(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj, Observable** __retval);
void Observable__get_Object_fn(Observable* __this, ::g::Fuse::Scripting::Object** __retval);
void Observable__ObserveChange_fn(Observable* __this, uArray* args, uObject** __retval);
void Observable__RemoveSubscriber_fn(Observable* __this);
void Observable__SetValue_fn(Observable* __this, int* index, uObject* value);
void Observable__Subscribe_fn(Observable* __this, uObject* observer, Observable__Subscription** __retval);
void Observable__Unsubscribe_fn(Observable* __this);
void Observable__UnsubscribeValues_fn(Observable* __this);

struct Observable : ::g::Fuse::Reactive::ListMirror
{
    bool _isUnsubscribed;
    uStrong< ::g::Fuse::Scripting::Object*> _observable;
    uStrong< ::g::Fuse::Scripting::Function*> _observeChange;
    uStrong< ::g::Uno::Collections::List*> _observers;
    uStrong< ::g::Uno::Collections::List*> _operationLog;
    uStrong< ::g::Uno::Collections::List*> _values;
    uStrong< ::g::Fuse::Reactive::ThreadWorker*> _worker;

    void ctor_2(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj);
    bool IsUnsubscribed();
    ::g::Fuse::Scripting::Object* Object();
    uObject* ObserveChange(uArray* args);
    void RemoveSubscriber();
    void SetValue(int index, uObject* value);
    Observable__Subscription* Subscribe(uObject* observer);
    void UnsubscribeValues();
    static Observable* Create(::g::Fuse::Reactive::ThreadWorker* worker);
    static Observable* New1(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Scripting::Object* obj);
};
// }

}}} // ::g::Fuse::Reactive
