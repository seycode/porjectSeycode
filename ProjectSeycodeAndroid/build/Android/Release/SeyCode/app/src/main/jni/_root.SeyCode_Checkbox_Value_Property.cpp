// This file was generated based on /Users/niklas/Dropbox/programmierung/Fuse/SeyCode/.uno/SeyCode.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Checkbox.h>
#include <_root.SeyCode_Checkbox_Value_Property.h>
#include <Fuse.Controls.ToggleControl.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class SeyCode_Checkbox_Value_Property :19
// {
static void SeyCode_Checkbox_Value_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::UX::PropertyObject_typeof();
    type->SetFields(1,
        ::g::Checkbox_typeof(), offsetof(::g::SeyCode_Checkbox_Value_Property, _obj), 0);
}

::g::Uno::UX::Property1_type* SeyCode_Checkbox_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(SeyCode_Checkbox_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("SeyCode_Checkbox_Value_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()));
    type->fp_build_ = SeyCode_Checkbox_Value_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))SeyCode_Checkbox_Value_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))SeyCode_Checkbox_Value_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))SeyCode_Checkbox_Value_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))SeyCode_Checkbox_Value_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public SeyCode_Checkbox_Value_Property(Checkbox obj, Uno.UX.Selector name) :22
void SeyCode_Checkbox_Value_Property__ctor_2_fn(SeyCode_Checkbox_Value_Property* __this, ::g::Checkbox* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed bool Get() :24
void SeyCode_Checkbox_Value_Property__Get_fn(SeyCode_Checkbox_Value_Property* __this, bool* __retval)
{
    return *__retval = uPtr(__this->_obj)->Value(), void();
}

// public SeyCode_Checkbox_Value_Property New(Checkbox obj, Uno.UX.Selector name) :22
void SeyCode_Checkbox_Value_Property__New1_fn(::g::Checkbox* obj, ::g::Uno::UX::Selector* name, SeyCode_Checkbox_Value_Property** __retval)
{
    *__retval = SeyCode_Checkbox_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :23
void SeyCode_Checkbox_Value_Property__get_Object_fn(SeyCode_Checkbox_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(bool v, Uno.UX.IPropertyListener origin) :25
void SeyCode_Checkbox_Value_Property__Set_fn(SeyCode_Checkbox_Value_Property* __this, bool* v, uObject* origin)
{
    bool v_ = *v;
    uPtr(__this->_obj)->SetValue(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :26
void SeyCode_Checkbox_Value_Property__get_SupportsOriginSetter_fn(SeyCode_Checkbox_Value_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public SeyCode_Checkbox_Value_Property(Checkbox obj, Uno.UX.Selector name) [instance] :22
void SeyCode_Checkbox_Value_Property::ctor_2(::g::Checkbox* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public SeyCode_Checkbox_Value_Property New(Checkbox obj, Uno.UX.Selector name) [static] :22
SeyCode_Checkbox_Value_Property* SeyCode_Checkbox_Value_Property::New1(::g::Checkbox* obj, ::g::Uno::UX::Selector name)
{
    SeyCode_Checkbox_Value_Property* obj1 = (SeyCode_Checkbox_Value_Property*)uNew(SeyCode_Checkbox_Value_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g
