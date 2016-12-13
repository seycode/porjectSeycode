// This file was generated based on /Users/niklas/Dropbox/programmierung/Fuse/SeyCode/.uno/SeyCode.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.SeyCode_FuseControlsPageControl_Active_Property.h>
#include <Fuse.Controls.NavigationControl.h>
#include <Fuse.Controls.PageControl.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class SeyCode_FuseControlsPageControl_Active_Property :73
// {
static void SeyCode_FuseControlsPageControl_Active_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::UX::PropertyObject_typeof();
    type->SetFields(1,
        ::g::Fuse::Controls::PageControl_typeof(), offsetof(::g::SeyCode_FuseControlsPageControl_Active_Property, _obj), 0);
}

::g::Uno::UX::Property1_type* SeyCode_FuseControlsPageControl_Active_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(SeyCode_FuseControlsPageControl_Active_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("SeyCode_FuseControlsPageControl_Active_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Visual_typeof()));
    type->fp_build_ = SeyCode_FuseControlsPageControl_Active_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))SeyCode_FuseControlsPageControl_Active_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))SeyCode_FuseControlsPageControl_Active_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))SeyCode_FuseControlsPageControl_Active_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))SeyCode_FuseControlsPageControl_Active_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public SeyCode_FuseControlsPageControl_Active_Property(Fuse.Controls.PageControl obj, Uno.UX.Selector name) :76
void SeyCode_FuseControlsPageControl_Active_Property__ctor_2_fn(SeyCode_FuseControlsPageControl_Active_Property* __this, ::g::Fuse::Controls::PageControl* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed Fuse.Visual Get() :78
void SeyCode_FuseControlsPageControl_Active_Property__Get_fn(SeyCode_FuseControlsPageControl_Active_Property* __this, ::g::Fuse::Visual** __retval)
{
    return *__retval = uPtr(__this->_obj)->Active(), void();
}

// public SeyCode_FuseControlsPageControl_Active_Property New(Fuse.Controls.PageControl obj, Uno.UX.Selector name) :76
void SeyCode_FuseControlsPageControl_Active_Property__New1_fn(::g::Fuse::Controls::PageControl* obj, ::g::Uno::UX::Selector* name, SeyCode_FuseControlsPageControl_Active_Property** __retval)
{
    *__retval = SeyCode_FuseControlsPageControl_Active_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :77
void SeyCode_FuseControlsPageControl_Active_Property__get_Object_fn(SeyCode_FuseControlsPageControl_Active_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Fuse.Visual v, Uno.UX.IPropertyListener origin) :79
void SeyCode_FuseControlsPageControl_Active_Property__Set_fn(SeyCode_FuseControlsPageControl_Active_Property* __this, ::g::Fuse::Visual* v, uObject* origin)
{
    uPtr(__this->_obj)->Active(v);
}

// public override sealed bool get_SupportsOriginSetter() :80
void SeyCode_FuseControlsPageControl_Active_Property__get_SupportsOriginSetter_fn(SeyCode_FuseControlsPageControl_Active_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public SeyCode_FuseControlsPageControl_Active_Property(Fuse.Controls.PageControl obj, Uno.UX.Selector name) [instance] :76
void SeyCode_FuseControlsPageControl_Active_Property::ctor_2(::g::Fuse::Controls::PageControl* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public SeyCode_FuseControlsPageControl_Active_Property New(Fuse.Controls.PageControl obj, Uno.UX.Selector name) [static] :76
SeyCode_FuseControlsPageControl_Active_Property* SeyCode_FuseControlsPageControl_Active_Property::New1(::g::Fuse::Controls::PageControl* obj, ::g::Uno::UX::Selector name)
{
    SeyCode_FuseControlsPageControl_Active_Property* obj1 = (SeyCode_FuseControlsPageControl_Active_Property*)uNew(SeyCode_FuseControlsPageControl_Active_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g
