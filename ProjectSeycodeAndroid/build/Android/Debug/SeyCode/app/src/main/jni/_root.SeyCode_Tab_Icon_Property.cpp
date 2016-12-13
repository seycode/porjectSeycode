// This file was generated based on /Users/niklas/Dropbox/programmierung/Fuse/SeyCode/.uno/SeyCode.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.SeyCode_Tab_Icon_Property.h>
#include <_root.Tab.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class SeyCode_Tab_Icon_Property :37
// {
static void SeyCode_Tab_Icon_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::UX::PropertyObject_typeof();
    type->SetFields(1,
        ::g::Tab_typeof(), offsetof(::g::SeyCode_Tab_Icon_Property, _obj), 0);
}

::g::Uno::UX::Property1_type* SeyCode_Tab_Icon_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(SeyCode_Tab_Icon_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("SeyCode_Tab_Icon_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()));
    type->fp_build_ = SeyCode_Tab_Icon_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))SeyCode_Tab_Icon_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))SeyCode_Tab_Icon_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))SeyCode_Tab_Icon_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))SeyCode_Tab_Icon_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public SeyCode_Tab_Icon_Property(Tab obj, Uno.UX.Selector name) :40
void SeyCode_Tab_Icon_Property__ctor_2_fn(SeyCode_Tab_Icon_Property* __this, ::g::Tab* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed string Get() :42
void SeyCode_Tab_Icon_Property__Get_fn(SeyCode_Tab_Icon_Property* __this, uString** __retval)
{
    return *__retval = uPtr(__this->_obj)->Icon(), void();
}

// public SeyCode_Tab_Icon_Property New(Tab obj, Uno.UX.Selector name) :40
void SeyCode_Tab_Icon_Property__New1_fn(::g::Tab* obj, ::g::Uno::UX::Selector* name, SeyCode_Tab_Icon_Property** __retval)
{
    *__retval = SeyCode_Tab_Icon_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :41
void SeyCode_Tab_Icon_Property__get_Object_fn(SeyCode_Tab_Icon_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(string v, Uno.UX.IPropertyListener origin) :43
void SeyCode_Tab_Icon_Property__Set_fn(SeyCode_Tab_Icon_Property* __this, uString* v, uObject* origin)
{
    uPtr(__this->_obj)->SetIcon(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :44
void SeyCode_Tab_Icon_Property__get_SupportsOriginSetter_fn(SeyCode_Tab_Icon_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public SeyCode_Tab_Icon_Property(Tab obj, Uno.UX.Selector name) [instance] :40
void SeyCode_Tab_Icon_Property::ctor_2(::g::Tab* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public SeyCode_Tab_Icon_Property New(Tab obj, Uno.UX.Selector name) [static] :40
SeyCode_Tab_Icon_Property* SeyCode_Tab_Icon_Property::New1(::g::Tab* obj, ::g::Uno::UX::Selector name)
{
    SeyCode_Tab_Icon_Property* obj1 = (SeyCode_Tab_Icon_Property*)uNew(SeyCode_Tab_Icon_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g
