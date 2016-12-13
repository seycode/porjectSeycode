// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive/0.32.14/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.INameListener.h>
#include <Fuse.Reactive.ContextBinding.h>
#include <Fuse.Reactive.IObserver.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Reactive{struct DataBinding;}}}
namespace g{namespace Fuse{namespace Reactive{struct ListMirror;}}}
namespace g{namespace Fuse{namespace Reactive{struct Observable__Subscription;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public class DataBinding<T> :217
// {
struct DataBinding_type : ::g::Fuse::Reactive::ContextBinding_type
{
    ::g::Fuse::Reactive::IObserver interface0;
    ::g::Fuse::INameListener interface1;
    ::g::Uno::UX::IPropertyListener interface2;
    void(*fp_PushValue)(::g::Fuse::Reactive::DataBinding*, uObject*);
};

DataBinding_type* DataBinding_typeof();
void DataBinding__ctor_2_fn(DataBinding* __this, ::g::Uno::UX::Property1* target, uString* key);
void DataBinding__Acceptor_fn(uType* __type, uObject* obj, bool* __retval);
void DataBinding__FuseINameListenerOnNameChanged_fn(DataBinding* __this, ::g::Fuse::Node* obj, ::g::Uno::UX::Selector* name);
void DataBinding__FuseReactiveIObserverOnAdd_fn(DataBinding* __this, uObject* addedValue);
void DataBinding__FuseReactiveIObserverOnInsertAt_fn(DataBinding* __this, int* index, uObject* value);
void DataBinding__FuseReactiveIObserverOnNewAll_fn(DataBinding* __this, ::g::Fuse::Reactive::ListMirror* values);
void DataBinding__FuseReactiveIObserverOnNewAt_fn(DataBinding* __this, int* index, uObject* value);
void DataBinding__FuseReactiveIObserverOnRemoveAt_fn(DataBinding* __this, int* index);
void DataBinding__FuseReactiveIObserverOnSet_fn(DataBinding* __this, uObject* newValue);
void DataBinding__New1_fn(uType* __type, ::g::Uno::UX::Property1* target, uString* key, DataBinding** __retval);
void DataBinding__NewValue_fn(DataBinding* __this, uObject* value);
void DataBinding__OnRooted_fn(DataBinding* __this);
void DataBinding__OnUnrooted_fn(DataBinding* __this);
void DataBinding__PushValue_fn(DataBinding* __this, uObject* newValue);
void DataBinding__get_Target_fn(DataBinding* __this, ::g::Uno::UX::Property1** __retval);
void DataBinding__set_Target_fn(DataBinding* __this, ::g::Uno::UX::Property1* value);
void DataBinding__ToSelector_fn(uType* __type, uObject* newValue, ::g::Uno::UX::Selector* __retval);
void DataBinding__TryPushAsMarshalledValue_fn(DataBinding* __this, uObject* newValue);
void DataBinding__TryPushAsName_fn(DataBinding* __this, uObject* newValue, bool* __retval);
void DataBinding__TryPushAsValue_fn(DataBinding* __this, uObject* newValue, bool* __retval);
void DataBinding__UnoUXIPropertyListenerOnPropertyChanged_fn(DataBinding* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop);

struct DataBinding : ::g::Fuse::Reactive::ContextBinding
{
    uStrong<uObject*> _currentValue;
    bool _hasOriginalValue;
    uTField _originalValue() { return __type->Field(this, 5); }
    uStrong< ::g::Fuse::Reactive::Observable__Subscription*> _subscription;
    uStrong< ::g::Uno::UX::Property1*> _Target;

    void ctor_2(::g::Uno::UX::Property1* target, uString* key);
    void PushValue(uObject* newValue) { (((DataBinding_type*)__type)->fp_PushValue)(this, newValue); }
    ::g::Uno::UX::Property1* Target();
    void Target(::g::Uno::UX::Property1* value);
    void TryPushAsMarshalledValue(uObject* newValue);
    bool TryPushAsName(uObject* newValue);
    bool TryPushAsValue(uObject* newValue);
    static bool Acceptor(uType* __type, uObject* obj);
    static DataBinding* New1(uType* __type, ::g::Uno::UX::Property1* target, uString* key);
    static void PushValue(DataBinding* __this, uObject* newValue) { DataBinding__PushValue_fn(__this, newValue); }
    static ::g::Uno::UX::Selector ToSelector(uType* __type, uObject* newValue);
};
// }

}}} // ::g::Fuse::Reactive
