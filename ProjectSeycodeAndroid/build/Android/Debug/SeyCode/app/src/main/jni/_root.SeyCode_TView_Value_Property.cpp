// This file was generated based on /Users/niklas/Dropbox/programmierung/Fuse/SeyCode/.uno/SeyCode.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.SeyCode_TView_Value_Property.h>
#include <_root.TView.h>
#include <Fuse.Controls.TextInputControl.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class SeyCode_TView_Value_Property :28
// {
static void SeyCode_TView_Value_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::UX::PropertyObject_typeof();
    type->SetFields(1,
        ::g::TView_typeof(), offsetof(::g::SeyCode_TView_Value_Property, _obj), 0);
}

::g::Uno::UX::Property1_type* SeyCode_TView_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(SeyCode_TView_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("SeyCode_TView_Value_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()));
    type->fp_build_ = SeyCode_TView_Value_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))SeyCode_TView_Value_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))SeyCode_TView_Value_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))SeyCode_TView_Value_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))SeyCode_TView_Value_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public SeyCode_TView_Value_Property(TView obj, Uno.UX.Selector name) :31
void SeyCode_TView_Value_Property__ctor_2_fn(SeyCode_TView_Value_Property* __this, ::g::TView* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed string Get() :33
void SeyCode_TView_Value_Property__Get_fn(SeyCode_TView_Value_Property* __this, uString** __retval)
{
    return *__retval = uPtr(__this->_obj)->Value(), void();
}

// public SeyCode_TView_Value_Property New(TView obj, Uno.UX.Selector name) :31
void SeyCode_TView_Value_Property__New1_fn(::g::TView* obj, ::g::Uno::UX::Selector* name, SeyCode_TView_Value_Property** __retval)
{
    *__retval = SeyCode_TView_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :32
void SeyCode_TView_Value_Property__get_Object_fn(SeyCode_TView_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(string v, Uno.UX.IPropertyListener origin) :34
void SeyCode_TView_Value_Property__Set_fn(SeyCode_TView_Value_Property* __this, uString* v, uObject* origin)
{
    uPtr(__this->_obj)->SetValue(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :35
void SeyCode_TView_Value_Property__get_SupportsOriginSetter_fn(SeyCode_TView_Value_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public SeyCode_TView_Value_Property(TView obj, Uno.UX.Selector name) [instance] :31
void SeyCode_TView_Value_Property::ctor_2(::g::TView* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public SeyCode_TView_Value_Property New(TView obj, Uno.UX.Selector name) [static] :31
SeyCode_TView_Value_Property* SeyCode_TView_Value_Property::New1(::g::TView* obj, ::g::Uno::UX::Selector name)
{
    SeyCode_TView_Value_Property* obj1 = (SeyCode_TView_Value_Property*)uNew(SeyCode_TView_Value_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g
