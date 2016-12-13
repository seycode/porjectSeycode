// This file was generated based on /Users/niklas/Dropbox/programmierung/Fuse/SeyCode/.uno/SeyCode.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.SeyCode_FuseControlsMultiLayoutPanel_LayoutElement_Property.h>
#include <Fuse.Controls.MultiLayoutPanel.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class SeyCode_FuseControlsMultiLayoutPanel_LayoutElement_Property :64
// {
static void SeyCode_FuseControlsMultiLayoutPanel_LayoutElement_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::UX::PropertyObject_typeof();
    type->SetFields(1,
        ::g::Fuse::Controls::MultiLayoutPanel_typeof(), offsetof(::g::SeyCode_FuseControlsMultiLayoutPanel_LayoutElement_Property, _obj), 0);
}

::g::Uno::UX::Property1_type* SeyCode_FuseControlsMultiLayoutPanel_LayoutElement_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(SeyCode_FuseControlsMultiLayoutPanel_LayoutElement_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("SeyCode_FuseControlsMultiLayoutPanel_LayoutElement_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Element_typeof()));
    type->fp_build_ = SeyCode_FuseControlsMultiLayoutPanel_LayoutElement_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))SeyCode_FuseControlsMultiLayoutPanel_LayoutElement_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))SeyCode_FuseControlsMultiLayoutPanel_LayoutElement_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))SeyCode_FuseControlsMultiLayoutPanel_LayoutElement_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))SeyCode_FuseControlsMultiLayoutPanel_LayoutElement_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public SeyCode_FuseControlsMultiLayoutPanel_LayoutElement_Property(Fuse.Controls.MultiLayoutPanel obj, Uno.UX.Selector name) :67
void SeyCode_FuseControlsMultiLayoutPanel_LayoutElement_Property__ctor_2_fn(SeyCode_FuseControlsMultiLayoutPanel_LayoutElement_Property* __this, ::g::Fuse::Controls::MultiLayoutPanel* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed Fuse.Elements.Element Get() :69
void SeyCode_FuseControlsMultiLayoutPanel_LayoutElement_Property__Get_fn(SeyCode_FuseControlsMultiLayoutPanel_LayoutElement_Property* __this, ::g::Fuse::Elements::Element** __retval)
{
    return *__retval = uPtr(__this->_obj)->LayoutElement(), void();
}

// public SeyCode_FuseControlsMultiLayoutPanel_LayoutElement_Property New(Fuse.Controls.MultiLayoutPanel obj, Uno.UX.Selector name) :67
void SeyCode_FuseControlsMultiLayoutPanel_LayoutElement_Property__New1_fn(::g::Fuse::Controls::MultiLayoutPanel* obj, ::g::Uno::UX::Selector* name, SeyCode_FuseControlsMultiLayoutPanel_LayoutElement_Property** __retval)
{
    *__retval = SeyCode_FuseControlsMultiLayoutPanel_LayoutElement_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :68
void SeyCode_FuseControlsMultiLayoutPanel_LayoutElement_Property__get_Object_fn(SeyCode_FuseControlsMultiLayoutPanel_LayoutElement_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Fuse.Elements.Element v, Uno.UX.IPropertyListener origin) :70
void SeyCode_FuseControlsMultiLayoutPanel_LayoutElement_Property__Set_fn(SeyCode_FuseControlsMultiLayoutPanel_LayoutElement_Property* __this, ::g::Fuse::Elements::Element* v, uObject* origin)
{
    uPtr(__this->_obj)->LayoutElement(v);
}

// public override sealed bool get_SupportsOriginSetter() :71
void SeyCode_FuseControlsMultiLayoutPanel_LayoutElement_Property__get_SupportsOriginSetter_fn(SeyCode_FuseControlsMultiLayoutPanel_LayoutElement_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public SeyCode_FuseControlsMultiLayoutPanel_LayoutElement_Property(Fuse.Controls.MultiLayoutPanel obj, Uno.UX.Selector name) [instance] :67
void SeyCode_FuseControlsMultiLayoutPanel_LayoutElement_Property::ctor_2(::g::Fuse::Controls::MultiLayoutPanel* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public SeyCode_FuseControlsMultiLayoutPanel_LayoutElement_Property New(Fuse.Controls.MultiLayoutPanel obj, Uno.UX.Selector name) [static] :67
SeyCode_FuseControlsMultiLayoutPanel_LayoutElement_Property* SeyCode_FuseControlsMultiLayoutPanel_LayoutElement_Property::New1(::g::Fuse::Controls::MultiLayoutPanel* obj, ::g::Uno::UX::Selector name)
{
    SeyCode_FuseControlsMultiLayoutPanel_LayoutElement_Property* obj1 = (SeyCode_FuseControlsMultiLayoutPanel_LayoutElement_Property*)uNew(SeyCode_FuseControlsMultiLayoutPanel_LayoutElement_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g
