// This file was generated based on /Users/niklas/Dropbox/programmierung/Fuse/SeyCode/.uno/Tab.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.MainView.h>
#include <_root.SeyCode_FuseControlsText_Value_Property.h>
#include <_root.SeyCode_Tab_Icon_Property.h>
#include <_root.SeyCode_Tab_Text_Property.h>
#include <_root.Tab.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.PropertyBinding-1.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Font.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[4];
static uType* TYPES[7];

namespace g{

// public partial sealed class Tab :2
// {
// static Tab() :38
static void Tab__cctor_4_fn(uType* __type)
{
    Tab::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Value"*/]);
    Tab::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Icon"*/]);
    Tab::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"Text"*/]);
    Tab::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"self"*/]);
}

static void Tab_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("Icon");
    ::STRINGS[2] = uString::Const("Text");
    ::STRINGS[3] = uString::Const("self");
    ::TYPES[0] = ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[1] = ::g::Fuse::Controls::PropertyBinding_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof());
    ::TYPES[3] = ::g::Fuse::Binding_typeof();
    ::TYPES[4] = ::g::Fuse::Drawing::Brush_typeof();
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[6] = ::g::Fuse::Node_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Controls::Control_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Controls::Control_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Controls::Control_type, interface3),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Controls::Control_type, interface4),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface5),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Controls::Control_type, interface6),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Controls::Control_type, interface7),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface8),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface9),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface10),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface11),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface12));
    type->SetFields(93,
        ::g::Uno::String_typeof(), offsetof(::g::Tab, _field_Icon), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Tab, _field_Text), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Tab, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Tab, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Tab, this_Icon_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Tab, this_Text_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Tab::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Tab::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Tab::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Tab::__selector3_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Control_type* Tab_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Control_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 103;
    options.InterfaceCount = 13;
    options.ObjectSize = sizeof(Tab);
    options.TypeSize = sizeof(::g::Fuse::Controls::Control_type);
    type = (::g::Fuse::Controls::Control_type*)uClassType::New("Tab", options);
    type->SetBase(::g::Fuse::Controls::Panel_typeof());
    type->fp_build_ = Tab_build;
    type->fp_ctor_ = (void*)Tab__New4_fn;
    type->fp_cctor_ = Tab__cctor_4_fn;
    type->interface8.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface10.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface9.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface12.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface11.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface11.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface11.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface6.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface6.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface4.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface7.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface6.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface4.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface4.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface5.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::Control__OnPropertyChanged2_fn;
    type->interface6.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface6.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public Tab() :42
void Tab__ctor_7_fn(Tab* __this)
{
    __this->ctor_7();
}

// public string get_Icon() :8
void Tab__get_Icon_fn(Tab* __this, uString** __retval)
{
    *__retval = __this->Icon();
}

// public void set_Icon(string value) :9
void Tab__set_Icon_fn(Tab* __this, uString* value)
{
    __this->Icon(value);
}

// private void InitializeUX() :46
void Tab__InitializeUX_fn(Tab* __this)
{
    __this->InitializeUX();
}

// public Tab New() :42
void Tab__New4_fn(Tab** __retval)
{
    *__retval = Tab::New4();
}

// public void SetIcon(string value, Uno.UX.IPropertyListener origin) :11
void Tab__SetIcon_fn(Tab* __this, uString* value, uObject* origin)
{
    __this->SetIcon(value, origin);
}

// public void SetText(string value, Uno.UX.IPropertyListener origin) :26
void Tab__SetText_fn(Tab* __this, uString* value, uObject* origin)
{
    __this->SetText(value, origin);
}

// public string get_Text() :23
void Tab__get_Text_fn(Tab* __this, uString** __retval)
{
    *__retval = __this->Text();
}

// public void set_Text(string value) :24
void Tab__set_Text_fn(Tab* __this, uString* value)
{
    __this->Text(value);
}

::g::Uno::UX::Selector Tab::__selector0_;
::g::Uno::UX::Selector Tab::__selector1_;
::g::Uno::UX::Selector Tab::__selector2_;
::g::Uno::UX::Selector Tab::__selector3_;

// public Tab() [instance] :42
void Tab::ctor_7()
{
    ctor_6();
    InitializeUX();
}

// public string get_Icon() [instance] :8
uString* Tab::Icon()
{
    return _field_Icon;
}

// public void set_Icon(string value) [instance] :9
void Tab::Icon(uString* value)
{
    SetIcon(value, NULL);
}

// private void InitializeUX() [instance] :46
void Tab::InitializeUX()
{
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    temp_Value_inst = ::g::SeyCode_FuseControlsText_Value_Property::New1(temp, Tab::__selector0());
    this_Icon_inst = ::g::SeyCode_Tab_Icon_Property::New1(this, Tab::__selector1());
    ::g::Fuse::Controls::Text* temp1 = ::g::Fuse::Controls::Text::New3();
    temp1_Value_inst = ::g::SeyCode_FuseControlsText_Value_Property::New1(temp1, Tab::__selector0());
    this_Text_inst = ::g::SeyCode_Tab_Text_Property::New1(this, Tab::__selector2());
    ::g::Fuse::Controls::PropertyBinding* temp2 = (::g::Fuse::Controls::PropertyBinding*)::g::Fuse::Controls::PropertyBinding::New1(::TYPES[1/*Fuse.Controls.PropertyBinding<string>*/], temp_Value_inst, this_Icon_inst);
    ::g::Fuse::Controls::PropertyBinding* temp3 = (::g::Fuse::Controls::PropertyBinding*)::g::Fuse::Controls::PropertyBinding::New1(::TYPES[1/*Fuse.Controls.PropertyBinding<string>*/], temp1_Value_inst, this_Text_inst);
    ::g::Fuse::Drawing::StaticSolidColor* temp4 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.7411765f, 0.7647059f, 0.7803922f, 1.0f));
    Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 4.0f));
    ClipToBounds(false);
    Name(Tab::__selector3());
    temp->FontSize(35.0f);
    temp->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp->Alignment(10);
    temp->Font(::g::MainView::fa());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp2);
    temp1->FontSize(14.0f);
    temp1->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp1->Alignment(10);
    temp1->Y(::g::Uno::UX::Size__New1(21.0f, 1));
    temp1->Font(::g::MainView::Bold());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp3);
    Background(temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
}

// public void SetIcon(string value, Uno.UX.IPropertyListener origin) [instance] :11
void Tab::SetIcon(uString* value, uObject* origin)
{
    if (::g::Uno::String::op_Inequality(value, _field_Icon))
    {
        _field_Icon = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Icon"*/]), origin);
    }
}

// public void SetText(string value, Uno.UX.IPropertyListener origin) [instance] :26
void Tab::SetText(uString* value, uObject* origin)
{
    if (::g::Uno::String::op_Inequality(value, _field_Text))
    {
        _field_Text = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"Text"*/]), origin);
    }
}

// public string get_Text() [instance] :23
uString* Tab::Text()
{
    return _field_Text;
}

// public void set_Text(string value) [instance] :24
void Tab::Text(uString* value)
{
    SetText(value, NULL);
}

// public Tab New() [static] :42
Tab* Tab::New4()
{
    Tab* obj1 = (Tab*)uNew(Tab_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

} // ::g
