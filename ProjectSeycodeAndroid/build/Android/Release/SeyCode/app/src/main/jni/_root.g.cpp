// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseBasicTheme_BasicBackButton_IsEnabled_Property.h>
#include <_root.FuseBasicTheme_BasicBackButton_Text_Property.h>
#include <_root.FuseBasicTheme_BasicButton_Opacity_Property.h>
#include <_root.FuseBasicTheme_BasicButton_Text_Property.h>
#include <_root.FuseBasicTheme_BasicTextInput_TextColor_Property.h>
#include <_root.FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property.h>
#include <_root.FuseBasicTheme_FuseControlsCircle_Opacity_Property.h>
#include <_root.FuseBasicTheme_FuseControlsRectangle_Height_Property.h>
#include <_root.FuseBasicTheme_FuseControlsRectangle_Width_Property.h>
#include <_root.FuseBasicTheme_FuseControlsText_TextColor_Property.h>
#include <_root.FuseBasicTheme_FuseControlsText_Value_Property.h>
#include <_root.FuseBasicTheme_FuseDrawingSolidColor_Color_Property.h>
#include <_root.FuseBasicTheme_FuseDrawingStroke_Width_Property.h>
#include <_root.FuseBasicTheme_FuseEffectsDropShadow_Color_Property.h>
#include <_root.FuseBasicTheme_FuseTranslation_X_Property.h>
#include <_root.FuseControls_bundle.h>
#include <_root.FuseControlsNative_bundle.h>
#include <_root.FuseControlsNavigation_FuseControlsCircle_Color_Property.h>
#include <_root.FuseControlsPrimitives_FuseControlsBackButton_Text_Property.h>
#include <_root.FuseControlsPrimitives_FuseControlsButton_Text_Property.h>
#include <_root.FuseControlsPrimitives_FuseControlsCircle_Fill_Property.h>
#include <_root.FuseControlsPrimitives_FuseControlsCircle_Opacity_Property.h>
#include <_root.FuseControlsPrimitives_FuseControlsRectangle_Fill_Property.h>
#include <_root.FuseControlsPrimitives_FuseControlsSwitch_Value_Property.h>
#include <_root.FuseControlsPrimitives_FuseControlsText_Opacity_Property.h>
#include <_root.FuseControlsPrimitives_FuseControlsText_TextColor_Property.h>
#include <_root.FuseControlsPrimitives_FuseControlsText_Value_Property.h>
#include <_root.FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property.h>
#include <_root.FuseControlsPrimitives_FuseDrawingStroke_Brush_Property.h>
#include <_root.FuseControlsPrimitives_FuseDrawingStroke_Color_Property.h>
#include <_root.FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property.h>
#include <_root.FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property.h>
#include <_root.FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property.h>
#include <_root.FuseControlsScrollView_FuseControlsScrollView_KeepFocusIn-6bd5dc84.h>
#include <_root.FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property.h>
#include <_root.FuseControlsScrollView_FuseControlsScrollViewDefaultScrol-1b5cf626.h>
#include <_root.FuseControlsScrollView_FuseControlsScrollViewDefaultTrigg-ef72dbb9.h>
#include <_root.FuseControlsVideo_bundle.h>
#include <_root.FuseCore_bundle.h>
#include <_root.FuseDrawing_bundle.h>
#include <_root.FuseDrawingPrimitives_bundle.h>
#include <_root.FuseEffects_bundle.h>
#include <_root.FuseElements_bundle.h>
#include <_root.FuseEntities_bundle.h>
#include <_root.FuseReactive_bundle.h>
#include <Basic.BackButton.h>
#include <Basic.Button.h>
#include <Basic.TextInput.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Controls.BackButton.h>
#include <Fuse.Controls.Button.h>
#include <Fuse.Controls.ButtonBase.h>
#include <Fuse.Controls.Circle.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.ScrollView.DefaultScroller.h>
#include <Fuse.Controls.ScrollView.DefaultTrigger.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.ScrollViewBase.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.Switch.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextInputControl.h>
#include <Fuse.Controls.ToggleControl.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Effects.DropShadow.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Scroller.h>
#include <Fuse.Gestures.SwipeGesture.h>
#include <Fuse.Translation.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Int.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <Uno.String.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[141];
static uType* TYPES[2];

namespace g{

// /usr/local/share/uno/Packages/Fuse.BasicTheme/0.32.14/.uno/$.uno
// ----------------------------------------------------------------

// internal sealed class FuseBasicTheme_BasicBackButton_IsEnabled_Property :751
// {
static void FuseBasicTheme_BasicBackButton_IsEnabled_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::UX::PropertyObject_typeof();
    type->SetFields(1,
        ::g::Basic::BackButton_typeof(), offsetof(::g::FuseBasicTheme_BasicBackButton_IsEnabled_Property, _obj), 0);
}

::g::Uno::UX::Property1_type* FuseBasicTheme_BasicBackButton_IsEnabled_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseBasicTheme_BasicBackButton_IsEnabled_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseBasicTheme_BasicBackButton_IsEnabled_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()));
    type->fp_build_ = FuseBasicTheme_BasicBackButton_IsEnabled_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseBasicTheme_BasicBackButton_IsEnabled_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseBasicTheme_BasicBackButton_IsEnabled_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseBasicTheme_BasicBackButton_IsEnabled_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseBasicTheme_BasicBackButton_IsEnabled_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public override sealed bool Get() :756
void FuseBasicTheme_BasicBackButton_IsEnabled_Property__Get_fn(FuseBasicTheme_BasicBackButton_IsEnabled_Property* __this, bool* __retval)
{
    return *__retval = uPtr(__this->_obj)->IsEnabled(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :755
void FuseBasicTheme_BasicBackButton_IsEnabled_Property__get_Object_fn(FuseBasicTheme_BasicBackButton_IsEnabled_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(bool v, Uno.UX.IPropertyListener origin) :757
void FuseBasicTheme_BasicBackButton_IsEnabled_Property__Set_fn(FuseBasicTheme_BasicBackButton_IsEnabled_Property* __this, bool* v, uObject* origin)
{
    bool v_ = *v;
    uPtr(__this->_obj)->IsEnabled(v_);
}

// public override sealed bool get_SupportsOriginSetter() :758
void FuseBasicTheme_BasicBackButton_IsEnabled_Property__get_SupportsOriginSetter_fn(FuseBasicTheme_BasicBackButton_IsEnabled_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}
// }

// /usr/local/share/uno/Packages/Fuse.BasicTheme/0.32.14/.uno/$.uno
// ----------------------------------------------------------------

// internal sealed class FuseBasicTheme_BasicBackButton_Text_Property :733
// {
static void FuseBasicTheme_BasicBackButton_Text_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::UX::PropertyObject_typeof();
    type->SetFields(1,
        ::g::Basic::BackButton_typeof(), offsetof(::g::FuseBasicTheme_BasicBackButton_Text_Property, _obj), 0);
}

::g::Uno::UX::Property1_type* FuseBasicTheme_BasicBackButton_Text_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseBasicTheme_BasicBackButton_Text_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseBasicTheme_BasicBackButton_Text_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()));
    type->fp_build_ = FuseBasicTheme_BasicBackButton_Text_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseBasicTheme_BasicBackButton_Text_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseBasicTheme_BasicBackButton_Text_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseBasicTheme_BasicBackButton_Text_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseBasicTheme_BasicBackButton_Text_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public override sealed string Get() :738
void FuseBasicTheme_BasicBackButton_Text_Property__Get_fn(FuseBasicTheme_BasicBackButton_Text_Property* __this, uString** __retval)
{
    return *__retval = uPtr(__this->_obj)->Text(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :737
void FuseBasicTheme_BasicBackButton_Text_Property__get_Object_fn(FuseBasicTheme_BasicBackButton_Text_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(string v, Uno.UX.IPropertyListener origin) :739
void FuseBasicTheme_BasicBackButton_Text_Property__Set_fn(FuseBasicTheme_BasicBackButton_Text_Property* __this, uString* v, uObject* origin)
{
    uPtr(__this->_obj)->SetText(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :740
void FuseBasicTheme_BasicBackButton_Text_Property__get_SupportsOriginSetter_fn(FuseBasicTheme_BasicBackButton_Text_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}
// }

// /usr/local/share/uno/Packages/Fuse.BasicTheme/0.32.14/.uno/$.uno
// ----------------------------------------------------------------

// internal sealed class FuseBasicTheme_BasicButton_Opacity_Property :760
// {
static void FuseBasicTheme_BasicButton_Opacity_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::UX::PropertyObject_typeof();
    type->SetFields(1,
        ::g::Basic::Button_typeof(), offsetof(::g::FuseBasicTheme_BasicButton_Opacity_Property, _obj), 0);
}

::g::Uno::UX::Property1_type* FuseBasicTheme_BasicButton_Opacity_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseBasicTheme_BasicButton_Opacity_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseBasicTheme_BasicButton_Opacity_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof()));
    type->fp_build_ = FuseBasicTheme_BasicButton_Opacity_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseBasicTheme_BasicButton_Opacity_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseBasicTheme_BasicButton_Opacity_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseBasicTheme_BasicButton_Opacity_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseBasicTheme_BasicButton_Opacity_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public override sealed float Get() :765
void FuseBasicTheme_BasicButton_Opacity_Property__Get_fn(FuseBasicTheme_BasicButton_Opacity_Property* __this, float* __retval)
{
    return *__retval = uPtr(__this->_obj)->Opacity(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :764
void FuseBasicTheme_BasicButton_Opacity_Property__get_Object_fn(FuseBasicTheme_BasicButton_Opacity_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float v, Uno.UX.IPropertyListener origin) :766
void FuseBasicTheme_BasicButton_Opacity_Property__Set_fn(FuseBasicTheme_BasicButton_Opacity_Property* __this, float* v, uObject* origin)
{
    float v_ = *v;
    uPtr(__this->_obj)->SetOpacity(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :767
void FuseBasicTheme_BasicButton_Opacity_Property__get_SupportsOriginSetter_fn(FuseBasicTheme_BasicButton_Opacity_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}
// }

// /usr/local/share/uno/Packages/Fuse.BasicTheme/0.32.14/.uno/$.uno
// ----------------------------------------------------------------

// internal sealed class FuseBasicTheme_BasicButton_Text_Property :742
// {
static void FuseBasicTheme_BasicButton_Text_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::UX::PropertyObject_typeof();
    type->SetFields(1,
        ::g::Basic::Button_typeof(), offsetof(::g::FuseBasicTheme_BasicButton_Text_Property, _obj), 0);
}

::g::Uno::UX::Property1_type* FuseBasicTheme_BasicButton_Text_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseBasicTheme_BasicButton_Text_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseBasicTheme_BasicButton_Text_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()));
    type->fp_build_ = FuseBasicTheme_BasicButton_Text_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseBasicTheme_BasicButton_Text_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseBasicTheme_BasicButton_Text_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseBasicTheme_BasicButton_Text_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseBasicTheme_BasicButton_Text_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public override sealed string Get() :747
void FuseBasicTheme_BasicButton_Text_Property__Get_fn(FuseBasicTheme_BasicButton_Text_Property* __this, uString** __retval)
{
    return *__retval = uPtr(__this->_obj)->Text(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :746
void FuseBasicTheme_BasicButton_Text_Property__get_Object_fn(FuseBasicTheme_BasicButton_Text_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(string v, Uno.UX.IPropertyListener origin) :748
void FuseBasicTheme_BasicButton_Text_Property__Set_fn(FuseBasicTheme_BasicButton_Text_Property* __this, uString* v, uObject* origin)
{
    uPtr(__this->_obj)->SetText(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :749
void FuseBasicTheme_BasicButton_Text_Property__get_SupportsOriginSetter_fn(FuseBasicTheme_BasicButton_Text_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}
// }

// /usr/local/share/uno/Packages/Fuse.BasicTheme/0.32.14/.uno/$.uno
// ----------------------------------------------------------------

// internal sealed class FuseBasicTheme_BasicTextInput_TextColor_Property :805
// {
static void FuseBasicTheme_BasicTextInput_TextColor_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::UX::PropertyObject_typeof();
    type->SetFields(1,
        ::g::Basic::TextInput_typeof(), offsetof(::g::FuseBasicTheme_BasicTextInput_TextColor_Property, _obj), 0);
}

::g::Uno::UX::Property1_type* FuseBasicTheme_BasicTextInput_TextColor_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseBasicTheme_BasicTextInput_TextColor_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseBasicTheme_BasicTextInput_TextColor_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof()));
    type->fp_build_ = FuseBasicTheme_BasicTextInput_TextColor_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseBasicTheme_BasicTextInput_TextColor_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseBasicTheme_BasicTextInput_TextColor_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseBasicTheme_BasicTextInput_TextColor_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseBasicTheme_BasicTextInput_TextColor_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public override sealed float4 Get() :810
void FuseBasicTheme_BasicTextInput_TextColor_Property__Get_fn(FuseBasicTheme_BasicTextInput_TextColor_Property* __this, ::g::Uno::Float4* __retval)
{
    return *__retval = uPtr(__this->_obj)->TextColor(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :809
void FuseBasicTheme_BasicTextInput_TextColor_Property__get_Object_fn(FuseBasicTheme_BasicTextInput_TextColor_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float4 v, Uno.UX.IPropertyListener origin) :811
void FuseBasicTheme_BasicTextInput_TextColor_Property__Set_fn(FuseBasicTheme_BasicTextInput_TextColor_Property* __this, ::g::Uno::Float4* v, uObject* origin)
{
    ::g::Uno::Float4 v_ = *v;
    uPtr(__this->_obj)->TextColor(v_);
}

// public override sealed bool get_SupportsOriginSetter() :812
void FuseBasicTheme_BasicTextInput_TextColor_Property__get_SupportsOriginSetter_fn(FuseBasicTheme_BasicTextInput_TextColor_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}
// }

// /usr/local/share/uno/Packages/Fuse.BasicTheme/0.32.14/.uno/$.uno
// ----------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property :724
// {
static void FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::UX::PropertyObject_typeof();
    type->SetFields(1,
        ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float4_typeof()), offsetof(::g::FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property, _obj), 0);
}

::g::Uno::UX::Property1_type* FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof()));
    type->fp_build_ = FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public override sealed float4 Get() :729
void FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property__Get_fn(FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property* __this, ::g::Uno::Float4* __retval)
{
    ::g::Uno::Float4 ret2;
    return *__retval = (::g::Fuse::Animations::Change__get_Value_fn(uPtr(__this->_obj), &ret2), ret2), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :728
void FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property__get_Object_fn(FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float4 v, Uno.UX.IPropertyListener origin) :730
void FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property__Set_fn(FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property* __this, ::g::Uno::Float4* v, uObject* origin)
{
    ::g::Uno::Float4 v_ = *v;
    ::g::Fuse::Animations::Change__set_Value_fn(uPtr(__this->_obj), uCRef(v_));
}

// public override sealed bool get_SupportsOriginSetter() :731
void FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property__get_SupportsOriginSetter_fn(FuseBasicTheme_FuseAnimationsChangefloat4_Value_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}
// }

// /usr/local/share/uno/Packages/Fuse.BasicTheme/0.32.14/.uno/$.uno
// ----------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseControlsCircle_Opacity_Property :787
// {
static void FuseBasicTheme_FuseControlsCircle_Opacity_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::UX::PropertyObject_typeof();
    type->SetFields(1,
        ::g::Fuse::Controls::Circle_typeof(), offsetof(::g::FuseBasicTheme_FuseControlsCircle_Opacity_Property, _obj), 0);
}

::g::Uno::UX::Property1_type* FuseBasicTheme_FuseControlsCircle_Opacity_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseControlsCircle_Opacity_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseBasicTheme_FuseControlsCircle_Opacity_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof()));
    type->fp_build_ = FuseBasicTheme_FuseControlsCircle_Opacity_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseBasicTheme_FuseControlsCircle_Opacity_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseBasicTheme_FuseControlsCircle_Opacity_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseBasicTheme_FuseControlsCircle_Opacity_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseBasicTheme_FuseControlsCircle_Opacity_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public override sealed float Get() :792
void FuseBasicTheme_FuseControlsCircle_Opacity_Property__Get_fn(FuseBasicTheme_FuseControlsCircle_Opacity_Property* __this, float* __retval)
{
    return *__retval = uPtr(__this->_obj)->Opacity(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :791
void FuseBasicTheme_FuseControlsCircle_Opacity_Property__get_Object_fn(FuseBasicTheme_FuseControlsCircle_Opacity_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float v, Uno.UX.IPropertyListener origin) :793
void FuseBasicTheme_FuseControlsCircle_Opacity_Property__Set_fn(FuseBasicTheme_FuseControlsCircle_Opacity_Property* __this, float* v, uObject* origin)
{
    float v_ = *v;
    uPtr(__this->_obj)->SetOpacity(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :794
void FuseBasicTheme_FuseControlsCircle_Opacity_Property__get_SupportsOriginSetter_fn(FuseBasicTheme_FuseControlsCircle_Opacity_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}
// }

// /usr/local/share/uno/Packages/Fuse.BasicTheme/0.32.14/.uno/$.uno
// ----------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseControlsRectangle_Height_Property :814
// {
static void FuseBasicTheme_FuseControlsRectangle_Height_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::UX::PropertyObject_typeof();
    type->SetFields(1,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(::g::FuseBasicTheme_FuseControlsRectangle_Height_Property, _obj), 0);
}

::g::Uno::UX::Property1_type* FuseBasicTheme_FuseControlsRectangle_Height_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseControlsRectangle_Height_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseBasicTheme_FuseControlsRectangle_Height_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::Size_typeof()));
    type->fp_build_ = FuseBasicTheme_FuseControlsRectangle_Height_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseBasicTheme_FuseControlsRectangle_Height_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseBasicTheme_FuseControlsRectangle_Height_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseBasicTheme_FuseControlsRectangle_Height_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseBasicTheme_FuseControlsRectangle_Height_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public override sealed Uno.UX.Size Get() :819
void FuseBasicTheme_FuseControlsRectangle_Height_Property__Get_fn(FuseBasicTheme_FuseControlsRectangle_Height_Property* __this, ::g::Uno::UX::Size* __retval)
{
    return *__retval = uPtr(__this->_obj)->Height(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :818
void FuseBasicTheme_FuseControlsRectangle_Height_Property__get_Object_fn(FuseBasicTheme_FuseControlsRectangle_Height_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.Size v, Uno.UX.IPropertyListener origin) :820
void FuseBasicTheme_FuseControlsRectangle_Height_Property__Set_fn(FuseBasicTheme_FuseControlsRectangle_Height_Property* __this, ::g::Uno::UX::Size* v, uObject* origin)
{
    ::g::Uno::UX::Size v_ = *v;
    uPtr(__this->_obj)->Height(v_);
}

// public override sealed bool get_SupportsOriginSetter() :821
void FuseBasicTheme_FuseControlsRectangle_Height_Property__get_SupportsOriginSetter_fn(FuseBasicTheme_FuseControlsRectangle_Height_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}
// }

// /usr/local/share/uno/Packages/Fuse.BasicTheme/0.32.14/.uno/$.uno
// ----------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseControlsRectangle_Width_Property :769
// {
static void FuseBasicTheme_FuseControlsRectangle_Width_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::UX::PropertyObject_typeof();
    type->SetFields(1,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(::g::FuseBasicTheme_FuseControlsRectangle_Width_Property, _obj), 0);
}

::g::Uno::UX::Property1_type* FuseBasicTheme_FuseControlsRectangle_Width_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseControlsRectangle_Width_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseBasicTheme_FuseControlsRectangle_Width_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::Size_typeof()));
    type->fp_build_ = FuseBasicTheme_FuseControlsRectangle_Width_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseBasicTheme_FuseControlsRectangle_Width_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseBasicTheme_FuseControlsRectangle_Width_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseBasicTheme_FuseControlsRectangle_Width_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseBasicTheme_FuseControlsRectangle_Width_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public override sealed Uno.UX.Size Get() :774
void FuseBasicTheme_FuseControlsRectangle_Width_Property__Get_fn(FuseBasicTheme_FuseControlsRectangle_Width_Property* __this, ::g::Uno::UX::Size* __retval)
{
    return *__retval = uPtr(__this->_obj)->Width(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :773
void FuseBasicTheme_FuseControlsRectangle_Width_Property__get_Object_fn(FuseBasicTheme_FuseControlsRectangle_Width_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.Size v, Uno.UX.IPropertyListener origin) :775
void FuseBasicTheme_FuseControlsRectangle_Width_Property__Set_fn(FuseBasicTheme_FuseControlsRectangle_Width_Property* __this, ::g::Uno::UX::Size* v, uObject* origin)
{
    ::g::Uno::UX::Size v_ = *v;
    uPtr(__this->_obj)->Width(v_);
}

// public override sealed bool get_SupportsOriginSetter() :776
void FuseBasicTheme_FuseControlsRectangle_Width_Property__get_SupportsOriginSetter_fn(FuseBasicTheme_FuseControlsRectangle_Width_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}
// }

// /usr/local/share/uno/Packages/Fuse.BasicTheme/0.32.14/.uno/$.uno
// ----------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseControlsText_TextColor_Property :697
// {
static void FuseBasicTheme_FuseControlsText_TextColor_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::UX::PropertyObject_typeof();
    type->SetFields(1,
        ::g::Fuse::Controls::Text_typeof(), offsetof(::g::FuseBasicTheme_FuseControlsText_TextColor_Property, _obj), 0);
}

::g::Uno::UX::Property1_type* FuseBasicTheme_FuseControlsText_TextColor_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseControlsText_TextColor_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseBasicTheme_FuseControlsText_TextColor_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof()));
    type->fp_build_ = FuseBasicTheme_FuseControlsText_TextColor_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseBasicTheme_FuseControlsText_TextColor_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseBasicTheme_FuseControlsText_TextColor_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseBasicTheme_FuseControlsText_TextColor_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseBasicTheme_FuseControlsText_TextColor_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public override sealed float4 Get() :702
void FuseBasicTheme_FuseControlsText_TextColor_Property__Get_fn(FuseBasicTheme_FuseControlsText_TextColor_Property* __this, ::g::Uno::Float4* __retval)
{
    return *__retval = uPtr(__this->_obj)->TextColor(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :701
void FuseBasicTheme_FuseControlsText_TextColor_Property__get_Object_fn(FuseBasicTheme_FuseControlsText_TextColor_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float4 v, Uno.UX.IPropertyListener origin) :703
void FuseBasicTheme_FuseControlsText_TextColor_Property__Set_fn(FuseBasicTheme_FuseControlsText_TextColor_Property* __this, ::g::Uno::Float4* v, uObject* origin)
{
    ::g::Uno::Float4 v_ = *v;
    uPtr(__this->_obj)->TextColor(v_);
}

// public override sealed bool get_SupportsOriginSetter() :704
void FuseBasicTheme_FuseControlsText_TextColor_Property__get_SupportsOriginSetter_fn(FuseBasicTheme_FuseControlsText_TextColor_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}
// }

// /usr/local/share/uno/Packages/Fuse.BasicTheme/0.32.14/.uno/$.uno
// ----------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseControlsText_Value_Property :688
// {
static void FuseBasicTheme_FuseControlsText_Value_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::UX::PropertyObject_typeof();
    type->SetFields(1,
        ::g::Fuse::Controls::Text_typeof(), offsetof(::g::FuseBasicTheme_FuseControlsText_Value_Property, _obj), 0);
}

::g::Uno::UX::Property1_type* FuseBasicTheme_FuseControlsText_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseControlsText_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseBasicTheme_FuseControlsText_Value_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()));
    type->fp_build_ = FuseBasicTheme_FuseControlsText_Value_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseBasicTheme_FuseControlsText_Value_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseBasicTheme_FuseControlsText_Value_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseBasicTheme_FuseControlsText_Value_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseBasicTheme_FuseControlsText_Value_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public override sealed string Get() :693
void FuseBasicTheme_FuseControlsText_Value_Property__Get_fn(FuseBasicTheme_FuseControlsText_Value_Property* __this, uString** __retval)
{
    return *__retval = uPtr(__this->_obj)->Value(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :692
void FuseBasicTheme_FuseControlsText_Value_Property__get_Object_fn(FuseBasicTheme_FuseControlsText_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(string v, Uno.UX.IPropertyListener origin) :694
void FuseBasicTheme_FuseControlsText_Value_Property__Set_fn(FuseBasicTheme_FuseControlsText_Value_Property* __this, uString* v, uObject* origin)
{
    uPtr(__this->_obj)->SetValue(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :695
void FuseBasicTheme_FuseControlsText_Value_Property__get_SupportsOriginSetter_fn(FuseBasicTheme_FuseControlsText_Value_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}
// }

// /usr/local/share/uno/Packages/Fuse.BasicTheme/0.32.14/.uno/$.uno
// ----------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseDrawingSolidColor_Color_Property :706
// {
static void FuseBasicTheme_FuseDrawingSolidColor_Color_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::UX::PropertyObject_typeof();
    type->SetFields(1,
        ::g::Fuse::Drawing::SolidColor_typeof(), offsetof(::g::FuseBasicTheme_FuseDrawingSolidColor_Color_Property, _obj), 0);
}

::g::Uno::UX::Property1_type* FuseBasicTheme_FuseDrawingSolidColor_Color_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseDrawingSolidColor_Color_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseBasicTheme_FuseDrawingSolidColor_Color_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof()));
    type->fp_build_ = FuseBasicTheme_FuseDrawingSolidColor_Color_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseBasicTheme_FuseDrawingSolidColor_Color_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseBasicTheme_FuseDrawingSolidColor_Color_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseBasicTheme_FuseDrawingSolidColor_Color_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseBasicTheme_FuseDrawingSolidColor_Color_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public override sealed float4 Get() :711
void FuseBasicTheme_FuseDrawingSolidColor_Color_Property__Get_fn(FuseBasicTheme_FuseDrawingSolidColor_Color_Property* __this, ::g::Uno::Float4* __retval)
{
    return *__retval = uPtr(__this->_obj)->Color(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :710
void FuseBasicTheme_FuseDrawingSolidColor_Color_Property__get_Object_fn(FuseBasicTheme_FuseDrawingSolidColor_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float4 v, Uno.UX.IPropertyListener origin) :712
void FuseBasicTheme_FuseDrawingSolidColor_Color_Property__Set_fn(FuseBasicTheme_FuseDrawingSolidColor_Color_Property* __this, ::g::Uno::Float4* v, uObject* origin)
{
    ::g::Uno::Float4 v_ = *v;
    uPtr(__this->_obj)->SetColor1(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :713
void FuseBasicTheme_FuseDrawingSolidColor_Color_Property__get_SupportsOriginSetter_fn(FuseBasicTheme_FuseDrawingSolidColor_Color_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}
// }

// /usr/local/share/uno/Packages/Fuse.BasicTheme/0.32.14/.uno/$.uno
// ----------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseDrawingStroke_Width_Property :796
// {
static void FuseBasicTheme_FuseDrawingStroke_Width_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::UX::PropertyObject_typeof();
    type->SetFields(1,
        ::g::Fuse::Drawing::Stroke_typeof(), offsetof(::g::FuseBasicTheme_FuseDrawingStroke_Width_Property, _obj), 0);
}

::g::Uno::UX::Property1_type* FuseBasicTheme_FuseDrawingStroke_Width_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseDrawingStroke_Width_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseBasicTheme_FuseDrawingStroke_Width_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof()));
    type->fp_build_ = FuseBasicTheme_FuseDrawingStroke_Width_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseBasicTheme_FuseDrawingStroke_Width_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseBasicTheme_FuseDrawingStroke_Width_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseBasicTheme_FuseDrawingStroke_Width_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseBasicTheme_FuseDrawingStroke_Width_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public override sealed float Get() :801
void FuseBasicTheme_FuseDrawingStroke_Width_Property__Get_fn(FuseBasicTheme_FuseDrawingStroke_Width_Property* __this, float* __retval)
{
    return *__retval = uPtr(__this->_obj)->Width(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :800
void FuseBasicTheme_FuseDrawingStroke_Width_Property__get_Object_fn(FuseBasicTheme_FuseDrawingStroke_Width_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float v, Uno.UX.IPropertyListener origin) :802
void FuseBasicTheme_FuseDrawingStroke_Width_Property__Set_fn(FuseBasicTheme_FuseDrawingStroke_Width_Property* __this, float* v, uObject* origin)
{
    float v_ = *v;
    uPtr(__this->_obj)->Width(v_);
}

// public override sealed bool get_SupportsOriginSetter() :803
void FuseBasicTheme_FuseDrawingStroke_Width_Property__get_SupportsOriginSetter_fn(FuseBasicTheme_FuseDrawingStroke_Width_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}
// }

// /usr/local/share/uno/Packages/Fuse.BasicTheme/0.32.14/.uno/$.uno
// ----------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseEffectsDropShadow_Color_Property :715
// {
static void FuseBasicTheme_FuseEffectsDropShadow_Color_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::UX::PropertyObject_typeof();
    type->SetFields(1,
        ::g::Fuse::Effects::DropShadow_typeof(), offsetof(::g::FuseBasicTheme_FuseEffectsDropShadow_Color_Property, _obj), 0);
}

::g::Uno::UX::Property1_type* FuseBasicTheme_FuseEffectsDropShadow_Color_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseEffectsDropShadow_Color_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseBasicTheme_FuseEffectsDropShadow_Color_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof()));
    type->fp_build_ = FuseBasicTheme_FuseEffectsDropShadow_Color_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseBasicTheme_FuseEffectsDropShadow_Color_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseBasicTheme_FuseEffectsDropShadow_Color_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseBasicTheme_FuseEffectsDropShadow_Color_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseBasicTheme_FuseEffectsDropShadow_Color_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public override sealed float4 Get() :720
void FuseBasicTheme_FuseEffectsDropShadow_Color_Property__Get_fn(FuseBasicTheme_FuseEffectsDropShadow_Color_Property* __this, ::g::Uno::Float4* __retval)
{
    return *__retval = uPtr(__this->_obj)->Color(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :719
void FuseBasicTheme_FuseEffectsDropShadow_Color_Property__get_Object_fn(FuseBasicTheme_FuseEffectsDropShadow_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float4 v, Uno.UX.IPropertyListener origin) :721
void FuseBasicTheme_FuseEffectsDropShadow_Color_Property__Set_fn(FuseBasicTheme_FuseEffectsDropShadow_Color_Property* __this, ::g::Uno::Float4* v, uObject* origin)
{
    ::g::Uno::Float4 v_ = *v;
    uPtr(__this->_obj)->Color(v_);
}

// public override sealed bool get_SupportsOriginSetter() :722
void FuseBasicTheme_FuseEffectsDropShadow_Color_Property__get_SupportsOriginSetter_fn(FuseBasicTheme_FuseEffectsDropShadow_Color_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}
// }

// /usr/local/share/uno/Packages/Fuse.BasicTheme/0.32.14/.uno/$.uno
// ----------------------------------------------------------------

// internal sealed class FuseBasicTheme_FuseTranslation_X_Property :778
// {
static void FuseBasicTheme_FuseTranslation_X_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::UX::PropertyObject_typeof();
    type->SetFields(1,
        ::g::Fuse::Translation_typeof(), offsetof(::g::FuseBasicTheme_FuseTranslation_X_Property, _obj), 0);
}

::g::Uno::UX::Property1_type* FuseBasicTheme_FuseTranslation_X_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseBasicTheme_FuseTranslation_X_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseBasicTheme_FuseTranslation_X_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof()));
    type->fp_build_ = FuseBasicTheme_FuseTranslation_X_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseBasicTheme_FuseTranslation_X_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseBasicTheme_FuseTranslation_X_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseBasicTheme_FuseTranslation_X_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseBasicTheme_FuseTranslation_X_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public override sealed float Get() :783
void FuseBasicTheme_FuseTranslation_X_Property__Get_fn(FuseBasicTheme_FuseTranslation_X_Property* __this, float* __retval)
{
    return *__retval = uPtr(__this->_obj)->X(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :782
void FuseBasicTheme_FuseTranslation_X_Property__get_Object_fn(FuseBasicTheme_FuseTranslation_X_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float v, Uno.UX.IPropertyListener origin) :784
void FuseBasicTheme_FuseTranslation_X_Property__Set_fn(FuseBasicTheme_FuseTranslation_X_Property* __this, float* v, uObject* origin)
{
    float v_ = *v;
    uPtr(__this->_obj)->X(v_);
}

// public override sealed bool get_SupportsOriginSetter() :785
void FuseBasicTheme_FuseTranslation_X_Property__get_SupportsOriginSetter_fn(FuseBasicTheme_FuseTranslation_X_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls/0.32.14/.uno/package
// ----------------------------------------------------------------

// public static generated class FuseControls_bundle :0
// {
// static FuseControls_bundle() :0
static void FuseControls_bundle__cctor__fn(uType* __type)
{
    FuseControls_bundle::SolidRectangleafb52825_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[0/*"uniform mat...*/], ::STRINGS[1/*"uniform vec...*/], 1, 1, uArray::Init<uString*>(::TYPES[1/*string[]*/], 13, ::STRINGS[2/*"b"*/], ::STRINGS[3/*"a"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[14/*"n"*/]));
    FuseControls_bundle::SolidRectangleafb52826_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[15/*"uniform mat...*/], ::STRINGS[16/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[1/*string[]*/], 4, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/]));
    FuseControls_bundle::SolidRectangleafb52827_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[17/*"uniform mat...*/], ::STRINGS[18/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[1/*string[]*/], 11, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[13/*"l"*/]));
    FuseControls_bundle::Viewportb83477c3_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[19/*"uniform mat...*/], ::STRINGS[20/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[1/*string[]*/], 4, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[6/*"e"*/]));
}

static void FuseControls_bundle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("uniform mat4 l,c;uniform vec2 d,e,f,g,h;attribute vec2 a;varying vec2 m;void main(){m=((((d*(false?vec2(a.x,float(1)-a.y):a))-e)/f)*g)+h;gl_Position=c*(l*vec4(vec3(a,float(0)),1.));}");
    ::STRINGS[1] = uString::Const("uniform vec4 i;uniform float j,k;uniform sampler2D n;varying vec2 m;void main(){vec4 o=(b?vec4(float(0)):texture2D(n,m))*i;gl_FragColor=vec4((o.xyz*o.w)*j,o.w*j)*k;}");
    ::STRINGS[2] = uString::Const("b");
    ::STRINGS[3] = uString::Const("a");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[6] = uString::Const("e");
    ::STRINGS[7] = uString::Const("f");
    ::STRINGS[8] = uString::Const("g");
    ::STRINGS[9] = uString::Const("h");
    ::STRINGS[10] = uString::Const("i");
    ::STRINGS[11] = uString::Const("j");
    ::STRINGS[12] = uString::Const("k");
    ::STRINGS[13] = uString::Const("l");
    ::STRINGS[14] = uString::Const("n");
    ::STRINGS[15] = uString::Const("uniform mat4 d,b;attribute vec2 a;void main(){gl_Position=b*(d*vec4(vec3(a,float(0)),1.));}");
    ::STRINGS[16] = uString::Const("uniform vec4 c;void main(){gl_FragColor=c;}");
    ::STRINGS[17] = uString::Const("uniform mat4 h,b;uniform vec2 c,d,e,i;uniform float j;attribute vec2 a;varying float k;float m(vec2 n,vec2 o,float p){vec2 q=(n*c)-d;float r=dot(q,o)/p;return (r-e.x)/e.y;}void main(){k=m(false?vec2(a.x,float(1)-a.y):a,i,j);gl_Position=b*(h*vec4(vec3(a,float(0)),1.));}");
    ::STRINGS[18] = uString::Const("uniform float f,g;uniform sampler2D l;varying float k;void main(){vec4 n=texture2D(l,vec2(k,.5));gl_FragColor=vec4((n.xyz*n.w)*f,n.w*f)*g;}");
    ::STRINGS[19] = uString::Const("uniform mat4 c,b;attribute vec2 a;varying vec2 d;void main(){d=false?vec2(a.x,float(1)-a.y):a;gl_Position=b*(c*vec4(vec3(a,float(0)),1.));}");
    ::STRINGS[20] = uString::Const("uniform sampler2D e;varying vec2 d;void main(){gl_FragColor=texture2D(e,d);}");
    ::TYPES[1] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControls_bundle::SolidRectangleafb52825_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControls_bundle::SolidRectangleafb52826_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControls_bundle::SolidRectangleafb52827_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControls_bundle::Viewportb83477c3_, uFieldFlagsStatic);
}

uClassType* FuseControls_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseControls_bundle", options);
    type->fp_build_ = FuseControls_bundle_build;
    type->fp_cctor_ = FuseControls_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControls_bundle::SolidRectangleafb52825_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControls_bundle::SolidRectangleafb52826_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControls_bundle::SolidRectangleafb52827_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControls_bundle::Viewportb83477c3_;
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Native/0.32.14/.uno/package
// -----------------------------------------------------------------------

// public static generated class FuseControlsNative_bundle :0
// {
// static FuseControlsNative_bundle() :0
static void FuseControlsNative_bundle__cctor__fn(uType* __type)
{
    FuseControlsNative_bundle::Blitter79a430a5_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[21/*"uniform vec...*/], ::STRINGS[22/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[1/*string[]*/], 5, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[7/*"f"*/]));
}

static void FuseControlsNative_bundle_build(uType* type)
{
    ::STRINGS[21] = uString::Const("uniform vec2 c,b;uniform mat4 d;attribute vec2 a;varying vec2 e;vec4 g(vec2 h,mat4 i){return vec4(((h.x*i[0].x)+(h.y*i[1].x))+i[3].x,((h.x*i[0].y)+(h.y*i[1].y))+i[3].y,((h.x*i[0].z)+(h.y*i[1].z))+i[3].z,((h.x*i[0].w)+(h.y*i[1].w))+i[3].w);}void main(){e=a;gl_Position=g(c+(a*b),d);}");
    ::STRINGS[22] = uString::Const("uniform sampler2D f;varying vec2 e;void main(){gl_FragColor=texture2D(f,e);}");
    ::STRINGS[3] = uString::Const("a");
    ::STRINGS[2] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[7] = uString::Const("f");
    ::TYPES[1] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControlsNative_bundle::Blitter79a430a5_, uFieldFlagsStatic);
}

uClassType* FuseControlsNative_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseControlsNative_bundle", options);
    type->fp_build_ = FuseControlsNative_bundle_build;
    type->fp_cctor_ = FuseControlsNative_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControlsNative_bundle::Blitter79a430a5_;
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Navigation/0.32.14/.uno/$.uno
// -------------------------------------------------------------------------

// internal sealed class FuseControlsNavigation_FuseControlsCircle_Color_Property :249
// {
static void FuseControlsNavigation_FuseControlsCircle_Color_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::UX::PropertyObject_typeof();
    type->SetFields(1,
        ::g::Fuse::Controls::Circle_typeof(), offsetof(::g::FuseControlsNavigation_FuseControlsCircle_Color_Property, _obj), 0);
}

::g::Uno::UX::Property1_type* FuseControlsNavigation_FuseControlsCircle_Color_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsNavigation_FuseControlsCircle_Color_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsNavigation_FuseControlsCircle_Color_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof()));
    type->fp_build_ = FuseControlsNavigation_FuseControlsCircle_Color_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsNavigation_FuseControlsCircle_Color_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsNavigation_FuseControlsCircle_Color_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsNavigation_FuseControlsCircle_Color_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsNavigation_FuseControlsCircle_Color_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsNavigation_FuseControlsCircle_Color_Property(Fuse.Controls.Circle obj, Uno.UX.Selector name) :252
void FuseControlsNavigation_FuseControlsCircle_Color_Property__ctor_2_fn(FuseControlsNavigation_FuseControlsCircle_Color_Property* __this, ::g::Fuse::Controls::Circle* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed float4 Get() :254
void FuseControlsNavigation_FuseControlsCircle_Color_Property__Get_fn(FuseControlsNavigation_FuseControlsCircle_Color_Property* __this, ::g::Uno::Float4* __retval)
{
    return *__retval = uPtr(__this->_obj)->Color(), void();
}

// public FuseControlsNavigation_FuseControlsCircle_Color_Property New(Fuse.Controls.Circle obj, Uno.UX.Selector name) :252
void FuseControlsNavigation_FuseControlsCircle_Color_Property__New1_fn(::g::Fuse::Controls::Circle* obj, ::g::Uno::UX::Selector* name, FuseControlsNavigation_FuseControlsCircle_Color_Property** __retval)
{
    *__retval = FuseControlsNavigation_FuseControlsCircle_Color_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :253
void FuseControlsNavigation_FuseControlsCircle_Color_Property__get_Object_fn(FuseControlsNavigation_FuseControlsCircle_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float4 v, Uno.UX.IPropertyListener origin) :255
void FuseControlsNavigation_FuseControlsCircle_Color_Property__Set_fn(FuseControlsNavigation_FuseControlsCircle_Color_Property* __this, ::g::Uno::Float4* v, uObject* origin)
{
    ::g::Uno::Float4 v_ = *v;
    uPtr(__this->_obj)->SetColor(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :256
void FuseControlsNavigation_FuseControlsCircle_Color_Property__get_SupportsOriginSetter_fn(FuseControlsNavigation_FuseControlsCircle_Color_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public FuseControlsNavigation_FuseControlsCircle_Color_Property(Fuse.Controls.Circle obj, Uno.UX.Selector name) [instance] :252
void FuseControlsNavigation_FuseControlsCircle_Color_Property::ctor_2(::g::Fuse::Controls::Circle* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsNavigation_FuseControlsCircle_Color_Property New(Fuse.Controls.Circle obj, Uno.UX.Selector name) [static] :252
FuseControlsNavigation_FuseControlsCircle_Color_Property* FuseControlsNavigation_FuseControlsCircle_Color_Property::New1(::g::Fuse::Controls::Circle* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsNavigation_FuseControlsCircle_Color_Property* obj1 = (FuseControlsNavigation_FuseControlsCircle_Color_Property*)uNew(FuseControlsNavigation_FuseControlsCircle_Color_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Primitives/0.32.14/.uno/$.uno
// -------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseControlsBackButton_Text_Property :643
// {
static void FuseControlsPrimitives_FuseControlsBackButton_Text_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::UX::PropertyObject_typeof();
    type->SetFields(1,
        ::g::Fuse::Controls::BackButton_typeof(), offsetof(::g::FuseControlsPrimitives_FuseControlsBackButton_Text_Property, _obj), 0);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseControlsBackButton_Text_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseControlsBackButton_Text_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseControlsBackButton_Text_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()));
    type->fp_build_ = FuseControlsPrimitives_FuseControlsBackButton_Text_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsPrimitives_FuseControlsBackButton_Text_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseControlsBackButton_Text_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsPrimitives_FuseControlsBackButton_Text_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsPrimitives_FuseControlsBackButton_Text_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public override sealed string Get() :648
void FuseControlsPrimitives_FuseControlsBackButton_Text_Property__Get_fn(FuseControlsPrimitives_FuseControlsBackButton_Text_Property* __this, uString** __retval)
{
    return *__retval = uPtr(__this->_obj)->Text(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :647
void FuseControlsPrimitives_FuseControlsBackButton_Text_Property__get_Object_fn(FuseControlsPrimitives_FuseControlsBackButton_Text_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(string v, Uno.UX.IPropertyListener origin) :649
void FuseControlsPrimitives_FuseControlsBackButton_Text_Property__Set_fn(FuseControlsPrimitives_FuseControlsBackButton_Text_Property* __this, uString* v, uObject* origin)
{
    uPtr(__this->_obj)->SetText(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :650
void FuseControlsPrimitives_FuseControlsBackButton_Text_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseControlsBackButton_Text_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Primitives/0.32.14/.uno/$.uno
// -------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseControlsButton_Text_Property :652
// {
static void FuseControlsPrimitives_FuseControlsButton_Text_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::UX::PropertyObject_typeof();
    type->SetFields(1,
        ::g::Fuse::Controls::Button_typeof(), offsetof(::g::FuseControlsPrimitives_FuseControlsButton_Text_Property, _obj), 0);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseControlsButton_Text_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseControlsButton_Text_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseControlsButton_Text_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()));
    type->fp_build_ = FuseControlsPrimitives_FuseControlsButton_Text_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsPrimitives_FuseControlsButton_Text_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseControlsButton_Text_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsPrimitives_FuseControlsButton_Text_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsPrimitives_FuseControlsButton_Text_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsPrimitives_FuseControlsButton_Text_Property(Fuse.Controls.Button obj, Uno.UX.Selector name) :655
void FuseControlsPrimitives_FuseControlsButton_Text_Property__ctor_2_fn(FuseControlsPrimitives_FuseControlsButton_Text_Property* __this, ::g::Fuse::Controls::Button* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed string Get() :657
void FuseControlsPrimitives_FuseControlsButton_Text_Property__Get_fn(FuseControlsPrimitives_FuseControlsButton_Text_Property* __this, uString** __retval)
{
    return *__retval = uPtr(__this->_obj)->Text(), void();
}

// public FuseControlsPrimitives_FuseControlsButton_Text_Property New(Fuse.Controls.Button obj, Uno.UX.Selector name) :655
void FuseControlsPrimitives_FuseControlsButton_Text_Property__New1_fn(::g::Fuse::Controls::Button* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseControlsButton_Text_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseControlsButton_Text_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :656
void FuseControlsPrimitives_FuseControlsButton_Text_Property__get_Object_fn(FuseControlsPrimitives_FuseControlsButton_Text_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(string v, Uno.UX.IPropertyListener origin) :658
void FuseControlsPrimitives_FuseControlsButton_Text_Property__Set_fn(FuseControlsPrimitives_FuseControlsButton_Text_Property* __this, uString* v, uObject* origin)
{
    uPtr(__this->_obj)->SetText(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :659
void FuseControlsPrimitives_FuseControlsButton_Text_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseControlsButton_Text_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public FuseControlsPrimitives_FuseControlsButton_Text_Property(Fuse.Controls.Button obj, Uno.UX.Selector name) [instance] :655
void FuseControlsPrimitives_FuseControlsButton_Text_Property::ctor_2(::g::Fuse::Controls::Button* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseControlsButton_Text_Property New(Fuse.Controls.Button obj, Uno.UX.Selector name) [static] :655
FuseControlsPrimitives_FuseControlsButton_Text_Property* FuseControlsPrimitives_FuseControlsButton_Text_Property::New1(::g::Fuse::Controls::Button* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseControlsButton_Text_Property* obj1 = (FuseControlsPrimitives_FuseControlsButton_Text_Property*)uNew(FuseControlsPrimitives_FuseControlsButton_Text_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Primitives/0.32.14/.uno/$.uno
// -------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseControlsCircle_Fill_Property :697
// {
static void FuseControlsPrimitives_FuseControlsCircle_Fill_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::UX::PropertyObject_typeof();
    type->SetFields(1,
        ::g::Fuse::Controls::Circle_typeof(), offsetof(::g::FuseControlsPrimitives_FuseControlsCircle_Fill_Property, _obj), 0);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseControlsCircle_Fill_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseControlsCircle_Fill_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseControlsCircle_Fill_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof()));
    type->fp_build_ = FuseControlsPrimitives_FuseControlsCircle_Fill_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsPrimitives_FuseControlsCircle_Fill_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseControlsCircle_Fill_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsPrimitives_FuseControlsCircle_Fill_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsPrimitives_FuseControlsCircle_Fill_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public override sealed Fuse.Drawing.Brush Get() :702
void FuseControlsPrimitives_FuseControlsCircle_Fill_Property__Get_fn(FuseControlsPrimitives_FuseControlsCircle_Fill_Property* __this, ::g::Fuse::Drawing::Brush** __retval)
{
    return *__retval = uPtr(__this->_obj)->Fill(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :701
void FuseControlsPrimitives_FuseControlsCircle_Fill_Property__get_Object_fn(FuseControlsPrimitives_FuseControlsCircle_Fill_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Fuse.Drawing.Brush v, Uno.UX.IPropertyListener origin) :703
void FuseControlsPrimitives_FuseControlsCircle_Fill_Property__Set_fn(FuseControlsPrimitives_FuseControlsCircle_Fill_Property* __this, ::g::Fuse::Drawing::Brush* v, uObject* origin)
{
    uPtr(__this->_obj)->Fill(v);
}

// public override sealed bool get_SupportsOriginSetter() :704
void FuseControlsPrimitives_FuseControlsCircle_Fill_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseControlsCircle_Fill_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Primitives/0.32.14/.uno/$.uno
// -------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseControlsCircle_Opacity_Property :688
// {
static void FuseControlsPrimitives_FuseControlsCircle_Opacity_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::UX::PropertyObject_typeof();
    type->SetFields(1,
        ::g::Fuse::Controls::Circle_typeof(), offsetof(::g::FuseControlsPrimitives_FuseControlsCircle_Opacity_Property, _obj), 0);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseControlsCircle_Opacity_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseControlsCircle_Opacity_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseControlsCircle_Opacity_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof()));
    type->fp_build_ = FuseControlsPrimitives_FuseControlsCircle_Opacity_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsPrimitives_FuseControlsCircle_Opacity_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseControlsCircle_Opacity_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsPrimitives_FuseControlsCircle_Opacity_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsPrimitives_FuseControlsCircle_Opacity_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public override sealed float Get() :693
void FuseControlsPrimitives_FuseControlsCircle_Opacity_Property__Get_fn(FuseControlsPrimitives_FuseControlsCircle_Opacity_Property* __this, float* __retval)
{
    return *__retval = uPtr(__this->_obj)->Opacity(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :692
void FuseControlsPrimitives_FuseControlsCircle_Opacity_Property__get_Object_fn(FuseControlsPrimitives_FuseControlsCircle_Opacity_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float v, Uno.UX.IPropertyListener origin) :694
void FuseControlsPrimitives_FuseControlsCircle_Opacity_Property__Set_fn(FuseControlsPrimitives_FuseControlsCircle_Opacity_Property* __this, float* v, uObject* origin)
{
    float v_ = *v;
    uPtr(__this->_obj)->SetOpacity(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :695
void FuseControlsPrimitives_FuseControlsCircle_Opacity_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseControlsCircle_Opacity_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Primitives/0.32.14/.uno/$.uno
// -------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseControlsRectangle_Fill_Property :733
// {
static void FuseControlsPrimitives_FuseControlsRectangle_Fill_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::UX::PropertyObject_typeof();
    type->SetFields(1,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(::g::FuseControlsPrimitives_FuseControlsRectangle_Fill_Property, _obj), 0);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseControlsRectangle_Fill_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseControlsRectangle_Fill_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseControlsRectangle_Fill_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof()));
    type->fp_build_ = FuseControlsPrimitives_FuseControlsRectangle_Fill_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsPrimitives_FuseControlsRectangle_Fill_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseControlsRectangle_Fill_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsPrimitives_FuseControlsRectangle_Fill_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsPrimitives_FuseControlsRectangle_Fill_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public override sealed Fuse.Drawing.Brush Get() :738
void FuseControlsPrimitives_FuseControlsRectangle_Fill_Property__Get_fn(FuseControlsPrimitives_FuseControlsRectangle_Fill_Property* __this, ::g::Fuse::Drawing::Brush** __retval)
{
    return *__retval = uPtr(__this->_obj)->Fill(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :737
void FuseControlsPrimitives_FuseControlsRectangle_Fill_Property__get_Object_fn(FuseControlsPrimitives_FuseControlsRectangle_Fill_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Fuse.Drawing.Brush v, Uno.UX.IPropertyListener origin) :739
void FuseControlsPrimitives_FuseControlsRectangle_Fill_Property__Set_fn(FuseControlsPrimitives_FuseControlsRectangle_Fill_Property* __this, ::g::Fuse::Drawing::Brush* v, uObject* origin)
{
    uPtr(__this->_obj)->Fill(v);
}

// public override sealed bool get_SupportsOriginSetter() :740
void FuseControlsPrimitives_FuseControlsRectangle_Fill_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseControlsRectangle_Fill_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Primitives/0.32.14/.uno/$.uno
// -------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseControlsSwitch_Value_Property :661
// {
static void FuseControlsPrimitives_FuseControlsSwitch_Value_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::UX::PropertyObject_typeof();
    type->SetFields(1,
        ::g::Fuse::Controls::Switch_typeof(), offsetof(::g::FuseControlsPrimitives_FuseControlsSwitch_Value_Property, _obj), 0);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseControlsSwitch_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseControlsSwitch_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseControlsSwitch_Value_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()));
    type->fp_build_ = FuseControlsPrimitives_FuseControlsSwitch_Value_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsPrimitives_FuseControlsSwitch_Value_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseControlsSwitch_Value_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsPrimitives_FuseControlsSwitch_Value_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsPrimitives_FuseControlsSwitch_Value_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsPrimitives_FuseControlsSwitch_Value_Property(Fuse.Controls.Switch obj, Uno.UX.Selector name) :664
void FuseControlsPrimitives_FuseControlsSwitch_Value_Property__ctor_2_fn(FuseControlsPrimitives_FuseControlsSwitch_Value_Property* __this, ::g::Fuse::Controls::Switch* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed bool Get() :666
void FuseControlsPrimitives_FuseControlsSwitch_Value_Property__Get_fn(FuseControlsPrimitives_FuseControlsSwitch_Value_Property* __this, bool* __retval)
{
    return *__retval = uPtr(__this->_obj)->Value(), void();
}

// public FuseControlsPrimitives_FuseControlsSwitch_Value_Property New(Fuse.Controls.Switch obj, Uno.UX.Selector name) :664
void FuseControlsPrimitives_FuseControlsSwitch_Value_Property__New1_fn(::g::Fuse::Controls::Switch* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseControlsSwitch_Value_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseControlsSwitch_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :665
void FuseControlsPrimitives_FuseControlsSwitch_Value_Property__get_Object_fn(FuseControlsPrimitives_FuseControlsSwitch_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(bool v, Uno.UX.IPropertyListener origin) :667
void FuseControlsPrimitives_FuseControlsSwitch_Value_Property__Set_fn(FuseControlsPrimitives_FuseControlsSwitch_Value_Property* __this, bool* v, uObject* origin)
{
    bool v_ = *v;
    uPtr(__this->_obj)->SetValue(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :668
void FuseControlsPrimitives_FuseControlsSwitch_Value_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseControlsSwitch_Value_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public FuseControlsPrimitives_FuseControlsSwitch_Value_Property(Fuse.Controls.Switch obj, Uno.UX.Selector name) [instance] :664
void FuseControlsPrimitives_FuseControlsSwitch_Value_Property::ctor_2(::g::Fuse::Controls::Switch* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseControlsSwitch_Value_Property New(Fuse.Controls.Switch obj, Uno.UX.Selector name) [static] :664
FuseControlsPrimitives_FuseControlsSwitch_Value_Property* FuseControlsPrimitives_FuseControlsSwitch_Value_Property::New1(::g::Fuse::Controls::Switch* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseControlsSwitch_Value_Property* obj1 = (FuseControlsPrimitives_FuseControlsSwitch_Value_Property*)uNew(FuseControlsPrimitives_FuseControlsSwitch_Value_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Primitives/0.32.14/.uno/$.uno
// -------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseControlsText_Opacity_Property :679
// {
static void FuseControlsPrimitives_FuseControlsText_Opacity_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::UX::PropertyObject_typeof();
    type->SetFields(1,
        ::g::Fuse::Controls::Text_typeof(), offsetof(::g::FuseControlsPrimitives_FuseControlsText_Opacity_Property, _obj), 0);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseControlsText_Opacity_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseControlsText_Opacity_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseControlsText_Opacity_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof()));
    type->fp_build_ = FuseControlsPrimitives_FuseControlsText_Opacity_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsPrimitives_FuseControlsText_Opacity_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseControlsText_Opacity_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsPrimitives_FuseControlsText_Opacity_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsPrimitives_FuseControlsText_Opacity_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsPrimitives_FuseControlsText_Opacity_Property(Fuse.Controls.Text obj, Uno.UX.Selector name) :682
void FuseControlsPrimitives_FuseControlsText_Opacity_Property__ctor_2_fn(FuseControlsPrimitives_FuseControlsText_Opacity_Property* __this, ::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed float Get() :684
void FuseControlsPrimitives_FuseControlsText_Opacity_Property__Get_fn(FuseControlsPrimitives_FuseControlsText_Opacity_Property* __this, float* __retval)
{
    return *__retval = uPtr(__this->_obj)->Opacity(), void();
}

// public FuseControlsPrimitives_FuseControlsText_Opacity_Property New(Fuse.Controls.Text obj, Uno.UX.Selector name) :682
void FuseControlsPrimitives_FuseControlsText_Opacity_Property__New1_fn(::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseControlsText_Opacity_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseControlsText_Opacity_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :683
void FuseControlsPrimitives_FuseControlsText_Opacity_Property__get_Object_fn(FuseControlsPrimitives_FuseControlsText_Opacity_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float v, Uno.UX.IPropertyListener origin) :685
void FuseControlsPrimitives_FuseControlsText_Opacity_Property__Set_fn(FuseControlsPrimitives_FuseControlsText_Opacity_Property* __this, float* v, uObject* origin)
{
    float v_ = *v;
    uPtr(__this->_obj)->SetOpacity(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :686
void FuseControlsPrimitives_FuseControlsText_Opacity_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseControlsText_Opacity_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public FuseControlsPrimitives_FuseControlsText_Opacity_Property(Fuse.Controls.Text obj, Uno.UX.Selector name) [instance] :682
void FuseControlsPrimitives_FuseControlsText_Opacity_Property::ctor_2(::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseControlsText_Opacity_Property New(Fuse.Controls.Text obj, Uno.UX.Selector name) [static] :682
FuseControlsPrimitives_FuseControlsText_Opacity_Property* FuseControlsPrimitives_FuseControlsText_Opacity_Property::New1(::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseControlsText_Opacity_Property* obj1 = (FuseControlsPrimitives_FuseControlsText_Opacity_Property*)uNew(FuseControlsPrimitives_FuseControlsText_Opacity_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Primitives/0.32.14/.uno/$.uno
// -------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseControlsText_TextColor_Property :670
// {
static void FuseControlsPrimitives_FuseControlsText_TextColor_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::UX::PropertyObject_typeof();
    type->SetFields(1,
        ::g::Fuse::Controls::Text_typeof(), offsetof(::g::FuseControlsPrimitives_FuseControlsText_TextColor_Property, _obj), 0);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseControlsText_TextColor_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseControlsText_TextColor_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseControlsText_TextColor_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof()));
    type->fp_build_ = FuseControlsPrimitives_FuseControlsText_TextColor_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsPrimitives_FuseControlsText_TextColor_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseControlsText_TextColor_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsPrimitives_FuseControlsText_TextColor_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsPrimitives_FuseControlsText_TextColor_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsPrimitives_FuseControlsText_TextColor_Property(Fuse.Controls.Text obj, Uno.UX.Selector name) :673
void FuseControlsPrimitives_FuseControlsText_TextColor_Property__ctor_2_fn(FuseControlsPrimitives_FuseControlsText_TextColor_Property* __this, ::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed float4 Get() :675
void FuseControlsPrimitives_FuseControlsText_TextColor_Property__Get_fn(FuseControlsPrimitives_FuseControlsText_TextColor_Property* __this, ::g::Uno::Float4* __retval)
{
    return *__retval = uPtr(__this->_obj)->TextColor(), void();
}

// public FuseControlsPrimitives_FuseControlsText_TextColor_Property New(Fuse.Controls.Text obj, Uno.UX.Selector name) :673
void FuseControlsPrimitives_FuseControlsText_TextColor_Property__New1_fn(::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseControlsText_TextColor_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseControlsText_TextColor_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :674
void FuseControlsPrimitives_FuseControlsText_TextColor_Property__get_Object_fn(FuseControlsPrimitives_FuseControlsText_TextColor_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float4 v, Uno.UX.IPropertyListener origin) :676
void FuseControlsPrimitives_FuseControlsText_TextColor_Property__Set_fn(FuseControlsPrimitives_FuseControlsText_TextColor_Property* __this, ::g::Uno::Float4* v, uObject* origin)
{
    ::g::Uno::Float4 v_ = *v;
    uPtr(__this->_obj)->TextColor(v_);
}

// public override sealed bool get_SupportsOriginSetter() :677
void FuseControlsPrimitives_FuseControlsText_TextColor_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseControlsText_TextColor_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public FuseControlsPrimitives_FuseControlsText_TextColor_Property(Fuse.Controls.Text obj, Uno.UX.Selector name) [instance] :673
void FuseControlsPrimitives_FuseControlsText_TextColor_Property::ctor_2(::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseControlsText_TextColor_Property New(Fuse.Controls.Text obj, Uno.UX.Selector name) [static] :673
FuseControlsPrimitives_FuseControlsText_TextColor_Property* FuseControlsPrimitives_FuseControlsText_TextColor_Property::New1(::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseControlsText_TextColor_Property* obj1 = (FuseControlsPrimitives_FuseControlsText_TextColor_Property*)uNew(FuseControlsPrimitives_FuseControlsText_TextColor_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Primitives/0.32.14/.uno/$.uno
// -------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseControlsText_Value_Property :625
// {
static void FuseControlsPrimitives_FuseControlsText_Value_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::UX::PropertyObject_typeof();
    type->SetFields(1,
        ::g::Fuse::Controls::Text_typeof(), offsetof(::g::FuseControlsPrimitives_FuseControlsText_Value_Property, _obj), 0);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseControlsText_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseControlsText_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseControlsText_Value_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()));
    type->fp_build_ = FuseControlsPrimitives_FuseControlsText_Value_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsPrimitives_FuseControlsText_Value_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseControlsText_Value_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsPrimitives_FuseControlsText_Value_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsPrimitives_FuseControlsText_Value_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsPrimitives_FuseControlsText_Value_Property(Fuse.Controls.Text obj, Uno.UX.Selector name) :628
void FuseControlsPrimitives_FuseControlsText_Value_Property__ctor_2_fn(FuseControlsPrimitives_FuseControlsText_Value_Property* __this, ::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed string Get() :630
void FuseControlsPrimitives_FuseControlsText_Value_Property__Get_fn(FuseControlsPrimitives_FuseControlsText_Value_Property* __this, uString** __retval)
{
    return *__retval = uPtr(__this->_obj)->Value(), void();
}

// public FuseControlsPrimitives_FuseControlsText_Value_Property New(Fuse.Controls.Text obj, Uno.UX.Selector name) :628
void FuseControlsPrimitives_FuseControlsText_Value_Property__New1_fn(::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseControlsText_Value_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseControlsText_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :629
void FuseControlsPrimitives_FuseControlsText_Value_Property__get_Object_fn(FuseControlsPrimitives_FuseControlsText_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(string v, Uno.UX.IPropertyListener origin) :631
void FuseControlsPrimitives_FuseControlsText_Value_Property__Set_fn(FuseControlsPrimitives_FuseControlsText_Value_Property* __this, uString* v, uObject* origin)
{
    uPtr(__this->_obj)->SetValue(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :632
void FuseControlsPrimitives_FuseControlsText_Value_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseControlsText_Value_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public FuseControlsPrimitives_FuseControlsText_Value_Property(Fuse.Controls.Text obj, Uno.UX.Selector name) [instance] :628
void FuseControlsPrimitives_FuseControlsText_Value_Property::ctor_2(::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseControlsText_Value_Property New(Fuse.Controls.Text obj, Uno.UX.Selector name) [static] :628
FuseControlsPrimitives_FuseControlsText_Value_Property* FuseControlsPrimitives_FuseControlsText_Value_Property::New1(::g::Fuse::Controls::Text* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseControlsText_Value_Property* obj1 = (FuseControlsPrimitives_FuseControlsText_Value_Property*)uNew(FuseControlsPrimitives_FuseControlsText_Value_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Primitives/0.32.14/.uno/$.uno
// -------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property :751
// {
static void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::UX::PropertyObject_typeof();
    type->SetFields(1,
        ::g::Fuse::Drawing::SolidColor_typeof(), offsetof(::g::FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property, _obj), 0);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof()));
    type->fp_build_ = FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property(Fuse.Drawing.SolidColor obj, Uno.UX.Selector name) :754
void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__ctor_2_fn(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property* __this, ::g::Fuse::Drawing::SolidColor* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed float4 Get() :756
void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__Get_fn(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property* __this, ::g::Uno::Float4* __retval)
{
    return *__retval = uPtr(__this->_obj)->Color(), void();
}

// public FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property New(Fuse.Drawing.SolidColor obj, Uno.UX.Selector name) :754
void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__New1_fn(::g::Fuse::Drawing::SolidColor* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :755
void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__get_Object_fn(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float4 v, Uno.UX.IPropertyListener origin) :757
void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__Set_fn(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property* __this, ::g::Uno::Float4* v, uObject* origin)
{
    ::g::Uno::Float4 v_ = *v;
    uPtr(__this->_obj)->SetColor1(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :758
void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property(Fuse.Drawing.SolidColor obj, Uno.UX.Selector name) [instance] :754
void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property::ctor_2(::g::Fuse::Drawing::SolidColor* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property New(Fuse.Drawing.SolidColor obj, Uno.UX.Selector name) [static] :754
FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property* FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property::New1(::g::Fuse::Drawing::SolidColor* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property* obj1 = (FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property*)uNew(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Primitives/0.32.14/.uno/$.uno
// -------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseDrawingStroke_Brush_Property :706
// {
static void FuseControlsPrimitives_FuseDrawingStroke_Brush_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::UX::PropertyObject_typeof();
    type->SetFields(1,
        ::g::Fuse::Drawing::Stroke_typeof(), offsetof(::g::FuseControlsPrimitives_FuseDrawingStroke_Brush_Property, _obj), 0);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseDrawingStroke_Brush_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseDrawingStroke_Brush_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseDrawingStroke_Brush_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof()));
    type->fp_build_ = FuseControlsPrimitives_FuseDrawingStroke_Brush_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public override sealed Fuse.Drawing.Brush Get() :711
void FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__Get_fn(FuseControlsPrimitives_FuseDrawingStroke_Brush_Property* __this, ::g::Fuse::Drawing::Brush** __retval)
{
    return *__retval = uPtr(__this->_obj)->Brush(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :710
void FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__get_Object_fn(FuseControlsPrimitives_FuseDrawingStroke_Brush_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Fuse.Drawing.Brush v, Uno.UX.IPropertyListener origin) :712
void FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__Set_fn(FuseControlsPrimitives_FuseDrawingStroke_Brush_Property* __this, ::g::Fuse::Drawing::Brush* v, uObject* origin)
{
    uPtr(__this->_obj)->Brush(v);
}

// public override sealed bool get_SupportsOriginSetter() :713
void FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseDrawingStroke_Brush_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Primitives/0.32.14/.uno/$.uno
// -------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseDrawingStroke_Color_Property :742
// {
static void FuseControlsPrimitives_FuseDrawingStroke_Color_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::UX::PropertyObject_typeof();
    type->SetFields(1,
        ::g::Fuse::Drawing::Stroke_typeof(), offsetof(::g::FuseControlsPrimitives_FuseDrawingStroke_Color_Property, _obj), 0);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseDrawingStroke_Color_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseDrawingStroke_Color_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseDrawingStroke_Color_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof()));
    type->fp_build_ = FuseControlsPrimitives_FuseDrawingStroke_Color_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsPrimitives_FuseDrawingStroke_Color_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseDrawingStroke_Color_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsPrimitives_FuseDrawingStroke_Color_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsPrimitives_FuseDrawingStroke_Color_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsPrimitives_FuseDrawingStroke_Color_Property(Fuse.Drawing.Stroke obj, Uno.UX.Selector name) :745
void FuseControlsPrimitives_FuseDrawingStroke_Color_Property__ctor_2_fn(FuseControlsPrimitives_FuseDrawingStroke_Color_Property* __this, ::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed float4 Get() :747
void FuseControlsPrimitives_FuseDrawingStroke_Color_Property__Get_fn(FuseControlsPrimitives_FuseDrawingStroke_Color_Property* __this, ::g::Uno::Float4* __retval)
{
    return *__retval = uPtr(__this->_obj)->Color(), void();
}

// public FuseControlsPrimitives_FuseDrawingStroke_Color_Property New(Fuse.Drawing.Stroke obj, Uno.UX.Selector name) :745
void FuseControlsPrimitives_FuseDrawingStroke_Color_Property__New1_fn(::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseDrawingStroke_Color_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseDrawingStroke_Color_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :746
void FuseControlsPrimitives_FuseDrawingStroke_Color_Property__get_Object_fn(FuseControlsPrimitives_FuseDrawingStroke_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float4 v, Uno.UX.IPropertyListener origin) :748
void FuseControlsPrimitives_FuseDrawingStroke_Color_Property__Set_fn(FuseControlsPrimitives_FuseDrawingStroke_Color_Property* __this, ::g::Uno::Float4* v, uObject* origin)
{
    ::g::Uno::Float4 v_ = *v;
    uPtr(__this->_obj)->Color(v_);
}

// public override sealed bool get_SupportsOriginSetter() :749
void FuseControlsPrimitives_FuseDrawingStroke_Color_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseDrawingStroke_Color_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public FuseControlsPrimitives_FuseDrawingStroke_Color_Property(Fuse.Drawing.Stroke obj, Uno.UX.Selector name) [instance] :745
void FuseControlsPrimitives_FuseDrawingStroke_Color_Property::ctor_2(::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseDrawingStroke_Color_Property New(Fuse.Drawing.Stroke obj, Uno.UX.Selector name) [static] :745
FuseControlsPrimitives_FuseDrawingStroke_Color_Property* FuseControlsPrimitives_FuseDrawingStroke_Color_Property::New1(::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseDrawingStroke_Color_Property* obj1 = (FuseControlsPrimitives_FuseDrawingStroke_Color_Property*)uNew(FuseControlsPrimitives_FuseDrawingStroke_Color_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Primitives/0.32.14/.uno/$.uno
// -------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property :715
// {
static void FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::UX::PropertyObject_typeof();
    type->SetFields(1,
        ::g::Fuse::Effects::DropShadow_typeof(), offsetof(::g::FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property, _obj), 0);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof()));
    type->fp_build_ = FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property(Fuse.Effects.DropShadow obj, Uno.UX.Selector name) :718
void FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__ctor_2_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property* __this, ::g::Fuse::Effects::DropShadow* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed float Get() :720
void FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__Get_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property* __this, float* __retval)
{
    return *__retval = uPtr(__this->_obj)->Distance(), void();
}

// public FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property New(Fuse.Effects.DropShadow obj, Uno.UX.Selector name) :718
void FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__New1_fn(::g::Fuse::Effects::DropShadow* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :719
void FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__get_Object_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float v, Uno.UX.IPropertyListener origin) :721
void FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__Set_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property* __this, float* v, uObject* origin)
{
    float v_ = *v;
    uPtr(__this->_obj)->Distance(v_);
}

// public override sealed bool get_SupportsOriginSetter() :722
void FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property(Fuse.Effects.DropShadow obj, Uno.UX.Selector name) [instance] :718
void FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property::ctor_2(::g::Fuse::Effects::DropShadow* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property New(Fuse.Effects.DropShadow obj, Uno.UX.Selector name) [static] :718
FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property* FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property::New1(::g::Fuse::Effects::DropShadow* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property* obj1 = (FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property*)uNew(FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Primitives/0.32.14/.uno/$.uno
// -------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property :724
// {
static void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::UX::PropertyObject_typeof();
    type->SetFields(1,
        ::g::Fuse::Effects::DropShadow_typeof(), offsetof(::g::FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property, _obj), 0);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof()));
    type->fp_build_ = FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property(Fuse.Effects.DropShadow obj, Uno.UX.Selector name) :727
void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__ctor_2_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property* __this, ::g::Fuse::Effects::DropShadow* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed float Get() :729
void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__Get_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property* __this, float* __retval)
{
    return *__retval = uPtr(__this->_obj)->Size(), void();
}

// public FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property New(Fuse.Effects.DropShadow obj, Uno.UX.Selector name) :727
void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__New1_fn(::g::Fuse::Effects::DropShadow* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :728
void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__get_Object_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float v, Uno.UX.IPropertyListener origin) :730
void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__Set_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property* __this, float* v, uObject* origin)
{
    float v_ = *v;
    uPtr(__this->_obj)->Size(v_);
}

// public override sealed bool get_SupportsOriginSetter() :731
void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property(Fuse.Effects.DropShadow obj, Uno.UX.Selector name) [instance] :727
void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property::ctor_2(::g::Fuse::Effects::DropShadow* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property New(Fuse.Effects.DropShadow obj, Uno.UX.Selector name) [static] :727
FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property* FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property::New1(::g::Fuse::Effects::DropShadow* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property* obj1 = (FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property*)uNew(FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Primitives/0.32.14/.uno/$.uno
// -------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property :634
// {
static void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::UX::PropertyObject_typeof();
    type->SetFields(1,
        ::g::Fuse::Gestures::SwipeGesture_typeof(), offsetof(::g::FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property, _obj), 0);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()));
    type->fp_build_ = FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property(Fuse.Gestures.SwipeGesture obj, Uno.UX.Selector name) :637
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__ctor_2_fn(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* __this, ::g::Fuse::Gestures::SwipeGesture* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed bool Get() :639
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__Get_fn(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* __this, bool* __retval)
{
    return *__retval = uPtr(__this->_obj)->IsActive(), void();
}

// public FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property New(Fuse.Gestures.SwipeGesture obj, Uno.UX.Selector name) :637
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__New1_fn(::g::Fuse::Gestures::SwipeGesture* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :638
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__get_Object_fn(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(bool v, Uno.UX.IPropertyListener origin) :640
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__Set_fn(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* __this, bool* v, uObject* origin)
{
    bool v_ = *v;
    uPtr(__this->_obj)->SetIsActive(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :641
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property(Fuse.Gestures.SwipeGesture obj, Uno.UX.Selector name) [instance] :637
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property::ctor_2(::g::Fuse::Gestures::SwipeGesture* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property New(Fuse.Gestures.SwipeGesture obj, Uno.UX.Selector name) [static] :637
FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property::New1(::g::Fuse::Gestures::SwipeGesture* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* obj1 = (FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property*)uNew(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.ScrollView/0.32.14/.uno/$.uno
// -------------------------------------------------------------------------

// internal sealed class FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property :141
// {
static void FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::UX::PropertyObject_typeof();
    type->SetFields(1,
        ::g::Fuse::Controls::ScrollView_typeof(), offsetof(::g::FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property, _obj), 0);
}

::g::Uno::UX::Property1_type* FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()));
    type->fp_build_ = FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property(Fuse.Controls.ScrollView obj, Uno.UX.Selector name) :144
void FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property__ctor_2_fn(FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property* __this, ::g::Fuse::Controls::ScrollView* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed bool Get() :146
void FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property__Get_fn(FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property* __this, bool* __retval)
{
    return *__retval = uPtr(__this->_obj)->KeepFocusInView(), void();
}

// public FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property New(Fuse.Controls.ScrollView obj, Uno.UX.Selector name) :144
void FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property__New1_fn(::g::Fuse::Controls::ScrollView* obj, ::g::Uno::UX::Selector* name, FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property** __retval)
{
    *__retval = FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :145
void FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property__get_Object_fn(FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(bool v, Uno.UX.IPropertyListener origin) :147
void FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property__Set_fn(FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property* __this, bool* v, uObject* origin)
{
    bool v_ = *v;
    uPtr(__this->_obj)->KeepFocusInView(v_);
}

// public override sealed bool get_SupportsOriginSetter() :148
void FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property__get_SupportsOriginSetter_fn(FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property(Fuse.Controls.ScrollView obj, Uno.UX.Selector name) [instance] :144
void FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property::ctor_2(::g::Fuse::Controls::ScrollView* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property New(Fuse.Controls.ScrollView obj, Uno.UX.Selector name) [static] :144
FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property* FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property::New1(::g::Fuse::Controls::ScrollView* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property* obj1 = (FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property*)uNew(FuseControlsScrollView_FuseControlsScrollView_KeepFocusInView_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.ScrollView/0.32.14/.uno/$.uno
// -------------------------------------------------------------------------

// internal sealed class FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property :132
// {
static void FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::UX::PropertyObject_typeof();
    type->SetFields(1,
        ::g::Fuse::Controls::ScrollView_typeof(), offsetof(::g::FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property, _obj), 0);
}

::g::Uno::UX::Property1_type* FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()));
    type->fp_build_ = FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property(Fuse.Controls.ScrollView obj, Uno.UX.Selector name) :135
void FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property__ctor_2_fn(FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property* __this, ::g::Fuse::Controls::ScrollView* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed bool Get() :137
void FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property__Get_fn(FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property* __this, bool* __retval)
{
    return *__retval = uPtr(__this->_obj)->UserScroll(), void();
}

// public FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property New(Fuse.Controls.ScrollView obj, Uno.UX.Selector name) :135
void FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property__New1_fn(::g::Fuse::Controls::ScrollView* obj, ::g::Uno::UX::Selector* name, FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property** __retval)
{
    *__retval = FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :136
void FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property__get_Object_fn(FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(bool v, Uno.UX.IPropertyListener origin) :138
void FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property__Set_fn(FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property* __this, bool* v, uObject* origin)
{
    bool v_ = *v;
    uPtr(__this->_obj)->UserScroll(v_);
}

// public override sealed bool get_SupportsOriginSetter() :139
void FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property__get_SupportsOriginSetter_fn(FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property(Fuse.Controls.ScrollView obj, Uno.UX.Selector name) [instance] :135
void FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property::ctor_2(::g::Fuse::Controls::ScrollView* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property New(Fuse.Controls.ScrollView obj, Uno.UX.Selector name) [static] :135
FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property* FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property::New1(::g::Fuse::Controls::ScrollView* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property* obj1 = (FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property*)uNew(FuseControlsScrollView_FuseControlsScrollView_UserScroll_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.ScrollView/0.32.14/.uno/$.uno
// -------------------------------------------------------------------------

// internal sealed class FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property :114
// {
static void FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::UX::PropertyObject_typeof();
    type->SetFields(1,
        ::g::Fuse::Controls::ScrollView__DefaultScroller_typeof(), offsetof(::g::FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property, _obj), 0);
}

::g::Uno::UX::Property1_type* FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()));
    type->fp_build_ = FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property(Fuse.Controls.ScrollView.DefaultScroller obj, Uno.UX.Selector name) :117
void FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property__ctor_2_fn(FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property* __this, ::g::Fuse::Controls::ScrollView__DefaultScroller* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed bool Get() :119
void FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property__Get_fn(FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property* __this, bool* __retval)
{
    return *__retval = uPtr(__this->_obj)->UserScroll(), void();
}

// public FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property New(Fuse.Controls.ScrollView.DefaultScroller obj, Uno.UX.Selector name) :117
void FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property__New1_fn(::g::Fuse::Controls::ScrollView__DefaultScroller* obj, ::g::Uno::UX::Selector* name, FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property** __retval)
{
    *__retval = FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :118
void FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property__get_Object_fn(FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(bool v, Uno.UX.IPropertyListener origin) :120
void FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property__Set_fn(FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property* __this, bool* v, uObject* origin)
{
    bool v_ = *v;
    uPtr(__this->_obj)->UserScroll(v_);
}

// public override sealed bool get_SupportsOriginSetter() :121
void FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property__get_SupportsOriginSetter_fn(FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property(Fuse.Controls.ScrollView.DefaultScroller obj, Uno.UX.Selector name) [instance] :117
void FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property::ctor_2(::g::Fuse::Controls::ScrollView__DefaultScroller* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property New(Fuse.Controls.ScrollView.DefaultScroller obj, Uno.UX.Selector name) [static] :117
FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property* FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property::New1(::g::Fuse::Controls::ScrollView__DefaultScroller* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property* obj1 = (FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property*)uNew(FuseControlsScrollView_FuseControlsScrollViewDefaultScroller_UserScroll_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.ScrollView/0.32.14/.uno/$.uno
// -------------------------------------------------------------------------

// internal sealed class FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property :123
// {
static void FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::UX::PropertyObject_typeof();
    type->SetFields(1,
        ::g::Fuse::Controls::ScrollView__DefaultTrigger_typeof(), offsetof(::g::FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property, _obj), 0);
}

::g::Uno::UX::Property1_type* FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property", options);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()));
    type->fp_build_ = FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property(Fuse.Controls.ScrollView.DefaultTrigger obj, Uno.UX.Selector name) :126
void FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property__ctor_2_fn(FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property* __this, ::g::Fuse::Controls::ScrollView__DefaultTrigger* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed bool Get() :128
void FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property__Get_fn(FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property* __this, bool* __retval)
{
    return *__retval = uPtr(__this->_obj)->Value1(), void();
}

// public FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property New(Fuse.Controls.ScrollView.DefaultTrigger obj, Uno.UX.Selector name) :126
void FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property__New1_fn(::g::Fuse::Controls::ScrollView__DefaultTrigger* obj, ::g::Uno::UX::Selector* name, FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property** __retval)
{
    *__retval = FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :127
void FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property__get_Object_fn(FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(bool v, Uno.UX.IPropertyListener origin) :129
void FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property__Set_fn(FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property* __this, bool* v, uObject* origin)
{
    bool v_ = *v;
    uPtr(__this->_obj)->Value1(v_);
}

// public override sealed bool get_SupportsOriginSetter() :130
void FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property__get_SupportsOriginSetter_fn(FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property(Fuse.Controls.ScrollView.DefaultTrigger obj, Uno.UX.Selector name) [instance] :126
void FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property::ctor_2(::g::Fuse::Controls::ScrollView__DefaultTrigger* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property New(Fuse.Controls.ScrollView.DefaultTrigger obj, Uno.UX.Selector name) [static] :126
FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property* FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property::New1(::g::Fuse::Controls::ScrollView__DefaultTrigger* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property* obj1 = (FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property*)uNew(FuseControlsScrollView_FuseControlsScrollViewDefaultTrigger_Value_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Video/0.32.14/.uno/package
// ----------------------------------------------------------------------

// public static generated class FuseControlsVideo_bundle :0
// {
// static FuseControlsVideo_bundle() :0
static void FuseControlsVideo_bundle__cctor__fn(uType* __type)
{
    FuseControlsVideo_bundle::Scale9Rectangleb08a8ede_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[23/*"uniform flo...*/], ::STRINGS[24/*"uniform sam...*/], 0, 2, uArray::Init<uString*>(::TYPES[1/*string[]*/], 16, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[25/*"m"*/], ::STRINGS[14/*"n"*/], ::STRINGS[26/*"o"*/], ::STRINGS[27/*"q"*/]));
    FuseControlsVideo_bundle::VideoDrawElementd598cf98_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[28/*"uniform mat...*/], ::STRINGS[29/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[1/*string[]*/], 6, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[8/*"g"*/]));
}

static void FuseControlsVideo_bundle_build(uType* type)
{
    ::STRINGS[23] = uString::Const("uniform float c,d,e,f,g,h,k,l,m,n;uniform mat4 i,j;uniform vec2 o;attribute vec3 a,b;varying vec2 p;void main(){p=vec2(((a.x*c)+(a.y*k))+(a.z*l),((b.x*f)+(b.y*m))+(b.z*n))/o;gl_Position=j*(i*vec4(vec2(((a.x*c)+(a.y*d))+(a.z*e),((b.x*f)+(b.y*g))+(b.z*h)),float(0),float(1)));}");
    ::STRINGS[24] = uString::Const("uniform samplerExternalOES q;varying vec2 p;void main(){gl_FragColor=vec4(texture2D(q,p).xyz,1.);}");
    ::STRINGS[3] = uString::Const("a");
    ::STRINGS[2] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[6] = uString::Const("e");
    ::STRINGS[7] = uString::Const("f");
    ::STRINGS[8] = uString::Const("g");
    ::STRINGS[9] = uString::Const("h");
    ::STRINGS[10] = uString::Const("i");
    ::STRINGS[11] = uString::Const("j");
    ::STRINGS[12] = uString::Const("k");
    ::STRINGS[13] = uString::Const("l");
    ::STRINGS[25] = uString::Const("m");
    ::STRINGS[14] = uString::Const("n");
    ::STRINGS[26] = uString::Const("o");
    ::STRINGS[27] = uString::Const("q");
    ::STRINGS[28] = uString::Const("uniform mat4 e,b;uniform vec2 c,d;attribute vec2 a;varying vec2 f;void main(){f=(a*c)+d;gl_Position=b*(e*vec4(vec3(a,float(0)),1.));}");
    ::STRINGS[29] = uString::Const("uniform samplerExternalOES g;varying vec2 f;void main(){gl_FragColor=vec4(texture2D(g,vec2(f.x,f.y)).xyz,1.);}");
    ::TYPES[1] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControlsVideo_bundle::Scale9Rectangleb08a8ede_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControlsVideo_bundle::VideoDrawElementd598cf98_, uFieldFlagsStatic);
}

uClassType* FuseControlsVideo_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseControlsVideo_bundle", options);
    type->fp_build_ = FuseControlsVideo_bundle_build;
    type->fp_cctor_ = FuseControlsVideo_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControlsVideo_bundle::Scale9Rectangleb08a8ede_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControlsVideo_bundle::VideoDrawElementd598cf98_;
// }

// /usr/local/share/uno/Packages/FuseCore/0.32.14/.uno/package
// -----------------------------------------------------------

// public static generated class FuseCore_bundle :0
// {
// static FuseCore_bundle() :0
static void FuseCore_bundle__cctor__fn(uType* __type)
{
    FuseCore_bundle::DrawHelpersbba46184_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[30/*"uniform vec...*/], ::STRINGS[31/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[1/*string[]*/], 5, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/]));
    FuseCore_bundle::RobotoRegular73880357_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[32/*"FuseCore"*/]))->GetFile(::STRINGS[33/*"roboto-regu...*/]);
}

static void FuseCore_bundle_build(uType* type)
{
    ::STRINGS[30] = uString::Const("uniform vec2 c,b;uniform mat4 d;attribute vec2 a;void main(){gl_Position=d*vec4(c+(a*b),float(0),float(1));}");
    ::STRINGS[31] = uString::Const("uniform vec4 e;void main(){gl_FragColor=e;}");
    ::STRINGS[3] = uString::Const("a");
    ::STRINGS[2] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[6] = uString::Const("e");
    ::STRINGS[32] = uString::Const("FuseCore");
    ::STRINGS[33] = uString::Const("roboto-regular-8e96360c.ttf");
    ::TYPES[1] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseCore_bundle::DrawHelpersbba46184_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::FuseCore_bundle::RobotoRegular73880357_, uFieldFlagsStatic);
}

uClassType* FuseCore_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseCore_bundle", options);
    type->fp_build_ = FuseCore_bundle_build;
    type->fp_cctor_ = FuseCore_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseCore_bundle::DrawHelpersbba46184_;
uSStrong< ::g::Uno::IO::BundleFile*> FuseCore_bundle::RobotoRegular73880357_;
// }

// /usr/local/share/uno/Packages/Fuse.Drawing/0.32.14/.uno/package
// ---------------------------------------------------------------

// public static generated class FuseDrawing_bundle :0
// {
// static FuseDrawing_bundle() :0
static void FuseDrawing_bundle__cctor__fn(uType* __type)
{
    FuseDrawing_bundle::LinearGradientDrawable066bc6f3_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[34/*"attribute v...*/], ::STRINGS[35/*"uniform flo...*/], 2, 1, uArray::Init<uString*>(::TYPES[1/*string[]*/], 6, ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[3/*"a"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/]));
}

static void FuseDrawing_bundle_build(uType* type)
{
    ::STRINGS[34] = uString::Const("attribute vec2 a;varying vec2 g;void main(){g=a;gl_Position=vec4((a.x*float(2))-float(1),(-a.y*float(2))+float(1),float(0),float(1));}");
    ::STRINGS[35] = uString::Const("uniform float d[b],e;uniform vec4 f[c];varying vec2 g;vec4 h(vec2 i){float j=d[0]+(e*i.x);vec4 k=f[0];for(int l=0;l<(b-1);l++){float m=d[l];float n=d[l+1];vec4 o=f[l+1];k=mix(k,o,smoothstep(m,n,j));}return k;}void main(){gl_FragColor=h(g);}");
    ::STRINGS[2] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[3] = uString::Const("a");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[6] = uString::Const("e");
    ::STRINGS[7] = uString::Const("f");
    ::TYPES[1] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawing_bundle::LinearGradientDrawable066bc6f3_, uFieldFlagsStatic);
}

uClassType* FuseDrawing_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseDrawing_bundle", options);
    type->fp_build_ = FuseDrawing_bundle_build;
    type->fp_cctor_ = FuseDrawing_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawing_bundle::LinearGradientDrawable066bc6f3_;
// }

// /usr/local/share/uno/Packages/Fuse.Drawing.Primitives/0.32.14/.uno/package
// --------------------------------------------------------------------------

// public static generated class FuseDrawingPrimitives_bundle :0
// {
// static FuseDrawingPrimitives_bundle() :0
static void FuseDrawingPrimitives_bundle__cctor__fn(uType* __type)
{
    FuseDrawingPrimitives_bundle::Circle2a09f04b_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[36/*"uniform vec...*/], ::STRINGS[37/*"uniform vec...*/], 1, 1, uArray::Init<uString*>(::TYPES[1/*string[]*/], 19, ::STRINGS[2/*"b"*/], ::STRINGS[3/*"a"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[25/*"m"*/], ::STRINGS[14/*"n"*/], ::STRINGS[26/*"o"*/], ::STRINGS[38/*"p"*/], ::STRINGS[27/*"q"*/], ::STRINGS[39/*"r"*/], ::STRINGS[40/*"u"*/]));
    FuseDrawingPrimitives_bundle::Circle2a09f04c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[36/*"uniform vec...*/], ::STRINGS[41/*"uniform vec...*/], 1, 1, uArray::Init<uString*>(::TYPES[1/*string[]*/], 19, ::STRINGS[2/*"b"*/], ::STRINGS[3/*"a"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[25/*"m"*/], ::STRINGS[14/*"n"*/], ::STRINGS[26/*"o"*/], ::STRINGS[38/*"p"*/], ::STRINGS[27/*"q"*/], ::STRINGS[39/*"r"*/], ::STRINGS[40/*"u"*/]));
    FuseDrawingPrimitives_bundle::Circle2a09f04d_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[42/*"uniform vec...*/], ::STRINGS[43/*"uniform vec...*/], 1, 1, uArray::Init<uString*>(::TYPES[1/*string[]*/], 16, ::STRINGS[2/*"b"*/], ::STRINGS[3/*"a"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[25/*"m"*/], ::STRINGS[14/*"n"*/], ::STRINGS[26/*"o"*/], ::STRINGS[39/*"r"*/]));
    FuseDrawingPrimitives_bundle::Circle2a0b4d6b_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[44/*"uniform vec...*/], ::STRINGS[45/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[1/*string[]*/], 13, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[25/*"m"*/]));
    FuseDrawingPrimitives_bundle::Circle2a0b4d6c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[44/*"uniform vec...*/], ::STRINGS[46/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[1/*string[]*/], 13, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[25/*"m"*/]));
    FuseDrawingPrimitives_bundle::Circle2a0b4d82_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[47/*"uniform vec...*/], ::STRINGS[48/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[1/*string[]*/], 10, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/]));
    FuseDrawingPrimitives_bundle::Circle2a16366b_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[49/*"uniform vec...*/], ::STRINGS[50/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[1/*string[]*/], 17, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[25/*"m"*/], ::STRINGS[14/*"n"*/], ::STRINGS[26/*"o"*/], ::STRINGS[38/*"p"*/], ::STRINGS[51/*"s"*/]));
    FuseDrawingPrimitives_bundle::Circle2a16366c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[49/*"uniform vec...*/], ::STRINGS[52/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[1/*string[]*/], 17, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[25/*"m"*/], ::STRINGS[14/*"n"*/], ::STRINGS[26/*"o"*/], ::STRINGS[38/*"p"*/], ::STRINGS[51/*"s"*/]));
    FuseDrawingPrimitives_bundle::Circle2a16366d_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[53/*"uniform vec...*/], ::STRINGS[54/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[1/*string[]*/], 14, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[25/*"m"*/], ::STRINGS[38/*"p"*/]));
    FuseDrawingPrimitives_bundle::Circle2a17938b_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[55/*"uniform vec...*/], ::STRINGS[56/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[1/*string[]*/], 12, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/]));
    FuseDrawingPrimitives_bundle::Circle2a17938c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[55/*"uniform vec...*/], ::STRINGS[57/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[1/*string[]*/], 12, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/]));
    FuseDrawingPrimitives_bundle::Circle2a17938d_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[58/*"uniform vec...*/], ::STRINGS[59/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[1/*string[]*/], 9, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/]));
    FuseDrawingPrimitives_bundle::Circle32dc887c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[60/*"uniform vec...*/], ::STRINGS[61/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[1/*string[]*/], 19, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[25/*"m"*/], ::STRINGS[14/*"n"*/], ::STRINGS[26/*"o"*/], ::STRINGS[38/*"p"*/], ::STRINGS[27/*"q"*/], ::STRINGS[39/*"r"*/], ::STRINGS[40/*"u"*/]));
    FuseDrawingPrimitives_bundle::Circle32dc887d_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[62/*"uniform vec...*/], ::STRINGS[63/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[1/*string[]*/], 16, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[25/*"m"*/], ::STRINGS[14/*"n"*/], ::STRINGS[26/*"o"*/], ::STRINGS[39/*"r"*/]));
    FuseDrawingPrimitives_bundle::Circle7f4c424a_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[64/*"uniform vec...*/], ::STRINGS[65/*"uniform vec...*/], 1, 1, uArray::Init<uString*>(::TYPES[1/*string[]*/], 21, ::STRINGS[2/*"b"*/], ::STRINGS[3/*"a"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[25/*"m"*/], ::STRINGS[14/*"n"*/], ::STRINGS[26/*"o"*/], ::STRINGS[38/*"p"*/], ::STRINGS[27/*"q"*/], ::STRINGS[39/*"r"*/], ::STRINGS[51/*"s"*/], ::STRINGS[66/*"t"*/], ::STRINGS[67/*"w"*/]));
    FuseDrawingPrimitives_bundle::Circle7f4c424b_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[64/*"uniform vec...*/], ::STRINGS[68/*"uniform vec...*/], 1, 1, uArray::Init<uString*>(::TYPES[1/*string[]*/], 21, ::STRINGS[2/*"b"*/], ::STRINGS[3/*"a"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[25/*"m"*/], ::STRINGS[14/*"n"*/], ::STRINGS[26/*"o"*/], ::STRINGS[38/*"p"*/], ::STRINGS[27/*"q"*/], ::STRINGS[39/*"r"*/], ::STRINGS[51/*"s"*/], ::STRINGS[66/*"t"*/], ::STRINGS[67/*"w"*/]));
    FuseDrawingPrimitives_bundle::Circle7f4c424c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[69/*"uniform vec...*/], ::STRINGS[70/*"uniform vec...*/], 1, 1, uArray::Init<uString*>(::TYPES[1/*string[]*/], 18, ::STRINGS[2/*"b"*/], ::STRINGS[3/*"a"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[25/*"m"*/], ::STRINGS[14/*"n"*/], ::STRINGS[26/*"o"*/], ::STRINGS[38/*"p"*/], ::STRINGS[27/*"q"*/], ::STRINGS[66/*"t"*/]));
    FuseDrawingPrimitives_bundle::Circle7f4c4d90_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[71/*"uniform vec...*/], ::STRINGS[72/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[1/*string[]*/], 15, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[25/*"m"*/], ::STRINGS[14/*"n"*/], ::STRINGS[26/*"o"*/]));
    FuseDrawingPrimitives_bundle::Circle7f4c4d91_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[71/*"uniform vec...*/], ::STRINGS[73/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[1/*string[]*/], 15, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[25/*"m"*/], ::STRINGS[14/*"n"*/], ::STRINGS[26/*"o"*/]));
    FuseDrawingPrimitives_bundle::Circle7f4c4d92_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[55/*"uniform vec...*/], ::STRINGS[74/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[1/*string[]*/], 12, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/]));
    FuseDrawingPrimitives_bundle::Circle7f4c58d6_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[60/*"uniform vec...*/], ::STRINGS[75/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[1/*string[]*/], 19, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[25/*"m"*/], ::STRINGS[14/*"n"*/], ::STRINGS[26/*"o"*/], ::STRINGS[38/*"p"*/], ::STRINGS[27/*"q"*/], ::STRINGS[39/*"r"*/], ::STRINGS[40/*"u"*/]));
    FuseDrawingPrimitives_bundle::Circlef0db6dc4_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[76/*"uniform vec...*/], ::STRINGS[77/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[1/*string[]*/], 14, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[25/*"m"*/], ::STRINGS[14/*"n"*/]));
    FuseDrawingPrimitives_bundle::Circlef0db6dc5_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[76/*"uniform vec...*/], ::STRINGS[78/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[1/*string[]*/], 14, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[25/*"m"*/], ::STRINGS[14/*"n"*/]));
    FuseDrawingPrimitives_bundle::Circlef0db6dc6_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[79/*"uniform vec...*/], ::STRINGS[80/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[1/*string[]*/], 11, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/]));
    FuseDrawingPrimitives_bundle::Rectangleb62db4f9_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[81/*"uniform flo...*/], ::STRINGS[82/*"uniform vec...*/], 2, 3, uArray::Init<uString*>(::TYPES[1/*string[]*/], 20, ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[25/*"m"*/], ::STRINGS[14/*"n"*/], ::STRINGS[26/*"o"*/], ::STRINGS[38/*"p"*/], ::STRINGS[27/*"q"*/], ::STRINGS[39/*"r"*/], ::STRINGS[51/*"s"*/], ::STRINGS[83/*"x"*/]));
    FuseDrawingPrimitives_bundle::Rectangleb62db4fa_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[84/*"uniform flo...*/], ::STRINGS[85/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[1/*string[]*/], 14, ::STRINGS[5/*"d"*/], ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[25/*"m"*/], ::STRINGS[14/*"n"*/]));
    FuseDrawingPrimitives_bundle::Rectangleb62db4fb_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[86/*"uniform flo...*/], ::STRINGS[87/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[1/*string[]*/], 18, ::STRINGS[5/*"d"*/], ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[25/*"m"*/], ::STRINGS[14/*"n"*/], ::STRINGS[26/*"o"*/], ::STRINGS[38/*"p"*/], ::STRINGS[27/*"q"*/], ::STRINGS[88/*"v"*/]));
    FuseDrawingPrimitives_bundle::Rectangleb62db4fc_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[89/*"uniform flo...*/], ::STRINGS[90/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[1/*string[]*/], 13, ::STRINGS[5/*"d"*/], ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[25/*"m"*/]));
    FuseDrawingPrimitives_bundle::Rectangleb62dc401_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[91/*"uniform flo...*/], ::STRINGS[92/*"uniform vec...*/], 2, 3, uArray::Init<uString*>(::TYPES[1/*string[]*/], 18, ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[25/*"m"*/], ::STRINGS[14/*"n"*/], ::STRINGS[26/*"o"*/], ::STRINGS[38/*"p"*/], ::STRINGS[27/*"q"*/], ::STRINGS[88/*"v"*/]));
    FuseDrawingPrimitives_bundle::Rectangleb62dc402_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[93/*"uniform flo...*/], ::STRINGS[94/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[1/*string[]*/], 12, ::STRINGS[5/*"d"*/], ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/]));
    FuseDrawingPrimitives_bundle::Rectangleb62dc403_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[95/*"uniform flo...*/], ::STRINGS[96/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[1/*string[]*/], 16, ::STRINGS[5/*"d"*/], ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[25/*"m"*/], ::STRINGS[14/*"n"*/], ::STRINGS[26/*"o"*/], ::STRINGS[66/*"t"*/]));
    FuseDrawingPrimitives_bundle::Rectangleb62dc404_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[97/*"uniform flo...*/], ::STRINGS[98/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[1/*string[]*/], 11, ::STRINGS[5/*"d"*/], ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/]));
}

static void FuseDrawingPrimitives_bundle_build(uType* type)
{
    ::STRINGS[36] = uString::Const("uniform vec2 c,d,f,g,h,i,j;uniform mat4 e;attribute vec2 a;varying vec2 s,t;vec4 v(vec2 w,mat4 x){return vec4(((w.x*x[0].x)+(w.y*x[1].x))+x[3].x,((w.x*x[0].y)+(w.y*x[1].y))+x[3].y,((w.x*x[0].z)+(w.y*x[1].z))+x[3].z,((w.x*x[0].w)+(w.y*x[1].w))+x[3].w);}void main(){vec2 w=a*c;vec2 x=w+d;s=((((f*(x/f))-g)/h)*i)+j;t=w;gl_Position=v(x,e);}");
    ::STRINGS[37] = uString::Const("uniform vec4 k;uniform float l,m,n,o;uniform vec2 p,q,r;uniform sampler2D u;varying vec2 s,t;void main(){vec4 w=(b?vec4(float(0)):texture2D(u,s))*k;vec4 x=vec4(w.xyz,w.w*(clamp(.5-(((length(t)-l)*m)*n),float(0),float(1))*clamp(.5-((min(dot(t,p),min(dot(t,q),dot(t,r)))*m)*n),float(0),float(1))));gl_FragColor=vec4((x.xyz*x.w)*o,x.w*o);}");
    ::STRINGS[2] = uString::Const("b");
    ::STRINGS[3] = uString::Const("a");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[6] = uString::Const("e");
    ::STRINGS[7] = uString::Const("f");
    ::STRINGS[8] = uString::Const("g");
    ::STRINGS[9] = uString::Const("h");
    ::STRINGS[10] = uString::Const("i");
    ::STRINGS[11] = uString::Const("j");
    ::STRINGS[12] = uString::Const("k");
    ::STRINGS[13] = uString::Const("l");
    ::STRINGS[25] = uString::Const("m");
    ::STRINGS[14] = uString::Const("n");
    ::STRINGS[26] = uString::Const("o");
    ::STRINGS[38] = uString::Const("p");
    ::STRINGS[27] = uString::Const("q");
    ::STRINGS[39] = uString::Const("r");
    ::STRINGS[40] = uString::Const("u");
    ::STRINGS[41] = uString::Const("uniform vec4 k;uniform float l,m,n,o;uniform vec2 p,q,r;uniform sampler2D u;varying vec2 s,t;void main(){vec4 w=(b?vec4(float(0)):texture2D(u,s))*k;vec4 x=vec4(w.xyz,w.w*(clamp(.5-(((length(t)-l)*m)*n),float(0),float(1))*clamp(.5-((max(dot(t,p),max(dot(t,q),dot(t,r)))*m)*n),float(0),float(1))));gl_FragColor=vec4((x.xyz*x.w)*o,x.w*o);}");
    ::STRINGS[42] = uString::Const("uniform vec2 c,d,f,g,h,i,j;uniform mat4 e;attribute vec2 a;varying vec2 p,q;vec4 s(vec2 t,mat4 u){return vec4(((t.x*u[0].x)+(t.y*u[1].x))+u[3].x,((t.x*u[0].y)+(t.y*u[1].y))+u[3].y,((t.x*u[0].z)+(t.y*u[1].z))+u[3].z,((t.x*u[0].w)+(t.y*u[1].w))+u[3].w);}void main(){vec2 t=a*c;vec2 u=t+d;p=((((f*(u/f))-g)/h)*i)+j;q=t;gl_Position=s(u,e);}");
    ::STRINGS[43] = uString::Const("uniform vec4 k;uniform float l,m,n,o;uniform sampler2D r;varying vec2 p,q;void main(){vec4 t=(b?vec4(float(0)):texture2D(r,p))*k;vec4 u=vec4(t.xyz,t.w*(clamp(.5-(((length(q)-l)*m)*n),float(0),float(1))*float(1)));gl_FragColor=vec4((u.xyz*u.w)*o,u.w*o);}");
    ::STRINGS[44] = uString::Const("uniform vec2 b,c;uniform mat4 d;attribute vec2 a;varying vec2 n;vec4 o(vec2 p,mat4 q){return vec4(((p.x*q[0].x)+(p.y*q[1].x))+q[3].x,((p.x*q[0].y)+(p.y*q[1].y))+q[3].y,((p.x*q[0].z)+(p.y*q[1].z))+q[3].z,((p.x*q[0].w)+(p.y*q[1].w))+q[3].w);}void main(){vec2 p=a*b;n=p;gl_Position=o(p+c,d);}");
    ::STRINGS[45] = uString::Const("uniform float e,f,g,h,j;uniform vec2 k,l,m;uniform vec3 i;varying vec2 n;void main(){vec4 p=vec4(i,h*(clamp(.5-(((length(n)-e)*f)*g),float(0),float(1))*clamp(.5-((min(dot(n,k),min(dot(n,l),dot(n,m)))*f)*g),float(0),float(1))));gl_FragColor=vec4((p.xyz*p.w)*j,p.w*j);}");
    ::STRINGS[46] = uString::Const("uniform float e,f,g,h,j;uniform vec2 k,l,m;uniform vec3 i;varying vec2 n;void main(){vec4 p=vec4(i,h*(clamp(.5-(((length(n)-e)*f)*g),float(0),float(1))*clamp(.5-((max(dot(n,k),max(dot(n,l),dot(n,m)))*f)*g),float(0),float(1))));gl_FragColor=vec4((p.xyz*p.w)*j,p.w*j);}");
    ::STRINGS[47] = uString::Const("uniform vec2 b,c;uniform mat4 d;attribute vec2 a;varying vec2 k;vec4 l(vec2 m,mat4 n){return vec4(((m.x*n[0].x)+(m.y*n[1].x))+n[3].x,((m.x*n[0].y)+(m.y*n[1].y))+n[3].y,((m.x*n[0].z)+(m.y*n[1].z))+n[3].z,((m.x*n[0].w)+(m.y*n[1].w))+n[3].w);}void main(){vec2 m=a*b;k=m;gl_Position=l(m+c,d);}");
    ::STRINGS[48] = uString::Const("uniform float e,f,g,h,j;uniform vec3 i;varying vec2 k;void main(){vec4 m=vec4(i,h*(clamp(.5-(((length(k)-e)*f)*g),float(0),float(1))*float(1)));gl_FragColor=vec4((m.xyz*m.w)*j,m.w*j);}");
    ::STRINGS[49] = uString::Const("uniform vec2 b,c,e,f,g,l;uniform mat4 d;uniform float m;attribute vec2 a;varying float q;varying vec2 r;vec4 t(vec2 v,mat4 w){return vec4(((v.x*w[0].x)+(v.y*w[1].x))+w[3].x,((v.x*w[0].y)+(v.y*w[1].y))+w[3].y,((v.x*w[0].z)+(v.y*w[1].z))+w[3].z,((v.x*w[0].w)+(v.y*w[1].w))+w[3].w);}float u(vec2 v,vec2 w,float x){vec2 y=(v*e)-f;float z=dot(y,w)/x;return (z-g.x)/g.y;}void main(){vec2 v=a*b;vec2 w=v+c;q=u(w/e,l,m);r=v;gl_Position=t(w,d);}");
    ::STRINGS[50] = uString::Const("uniform float h,i,j,k;uniform vec2 n,o,p;uniform sampler2D s;varying float q;varying vec2 r;void main(){vec4 v=texture2D(s,vec2(q,.5));vec4 w=vec4(v.xyz,v.w*(clamp(.5-(((length(r)-h)*i)*j),float(0),float(1))*clamp(.5-((min(dot(r,n),min(dot(r,o),dot(r,p)))*i)*j),float(0),float(1))));gl_FragColor=vec4((w.xyz*w.w)*k,w.w*k);}");
    ::STRINGS[51] = uString::Const("s");
    ::STRINGS[52] = uString::Const("uniform float h,i,j,k;uniform vec2 n,o,p;uniform sampler2D s;varying float q;varying vec2 r;void main(){vec4 v=texture2D(s,vec2(q,.5));vec4 w=vec4(v.xyz,v.w*(clamp(.5-(((length(r)-h)*i)*j),float(0),float(1))*clamp(.5-((max(dot(r,n),max(dot(r,o),dot(r,p)))*i)*j),float(0),float(1))));gl_FragColor=vec4((w.xyz*w.w)*k,w.w*k);}");
    ::STRINGS[53] = uString::Const("uniform vec2 b,c,e,f,g,l;uniform mat4 d;uniform float m;attribute vec2 a;varying float n;varying vec2 o;vec4 q(vec2 s,mat4 t){return vec4(((s.x*t[0].x)+(s.y*t[1].x))+t[3].x,((s.x*t[0].y)+(s.y*t[1].y))+t[3].y,((s.x*t[0].z)+(s.y*t[1].z))+t[3].z,((s.x*t[0].w)+(s.y*t[1].w))+t[3].w);}float r(vec2 s,vec2 t,float u){vec2 v=(s*e)-f;float w=dot(v,t)/u;return (w-g.x)/g.y;}void main(){vec2 s=a*b;vec2 t=s+c;n=r(t/e,l,m);o=s;gl_Position=q(t,d);}");
    ::STRINGS[54] = uString::Const("uniform float h,i,j,k;uniform sampler2D p;varying float n;varying vec2 o;void main(){vec4 s=texture2D(p,vec2(n,.5));vec4 t=vec4(s.xyz,s.w*(clamp(.5-(((length(o)-h)*i)*j),float(0),float(1))*float(1)));gl_FragColor=vec4((t.xyz*t.w)*k,t.w*k);}");
    ::STRINGS[55] = uString::Const("uniform vec2 b,c;uniform mat4 d;attribute vec2 a;varying vec2 m;vec4 n(vec2 o,mat4 p){return vec4(((o.x*p[0].x)+(o.y*p[1].x))+p[3].x,((o.x*p[0].y)+(o.y*p[1].y))+p[3].y,((o.x*p[0].z)+(o.y*p[1].z))+p[3].z,((o.x*p[0].w)+(o.y*p[1].w))+p[3].w);}void main(){vec2 o=a*b;m=o;gl_Position=n(o+c,d);}");
    ::STRINGS[56] = uString::Const("uniform float e,f,g,h;uniform vec2 j,k,l;uniform vec3 i;varying vec2 m;void main(){vec4 o=vec4(i,h*(clamp(.5-(((length(m)-e)*f)*g),float(0),float(1))*clamp(.5-((min(dot(m,j),min(dot(m,k),dot(m,l)))*f)*g),float(0),float(1))));gl_FragColor=vec4((o.xyz*o.w)*1.,o.w);}");
    ::STRINGS[57] = uString::Const("uniform float e,f,g,h;uniform vec2 j,k,l;uniform vec3 i;varying vec2 m;void main(){vec4 o=vec4(i,h*(clamp(.5-(((length(m)-e)*f)*g),float(0),float(1))*clamp(.5-((max(dot(m,j),max(dot(m,k),dot(m,l)))*f)*g),float(0),float(1))));gl_FragColor=vec4((o.xyz*o.w)*1.,o.w);}");
    ::STRINGS[58] = uString::Const("uniform vec2 b,c;uniform mat4 d;attribute vec2 a;varying vec2 j;vec4 k(vec2 l,mat4 m){return vec4(((l.x*m[0].x)+(l.y*m[1].x))+m[3].x,((l.x*m[0].y)+(l.y*m[1].y))+m[3].y,((l.x*m[0].z)+(l.y*m[1].z))+m[3].z,((l.x*m[0].w)+(l.y*m[1].w))+m[3].w);}void main(){vec2 l=a*b;j=l;gl_Position=k(l+c,d);}");
    ::STRINGS[59] = uString::Const("uniform float e,f,g,h;uniform vec3 i;varying vec2 j;void main(){vec4 l=vec4(i,h*(clamp(.5-(((length(j)-e)*f)*g),float(0),float(1))*float(1)));gl_FragColor=vec4((l.xyz*l.w)*1.,l.w);}");
    ::STRINGS[60] = uString::Const("uniform vec2 b,c,e,f,g,n;uniform mat4 d;uniform float o;attribute vec2 a;varying float s;varying vec2 t;vec4 v(vec2 x,mat4 y){return vec4(((x.x*y[0].x)+(x.y*y[1].x))+y[3].x,((x.x*y[0].y)+(x.y*y[1].y))+y[3].y,((x.x*y[0].z)+(x.y*y[1].z))+y[3].z,((x.x*y[0].w)+(x.y*y[1].w))+y[3].w);}float w(vec2 x,vec2 y,float z){vec2 A=(x*e)-f;float B=dot(A,y)/z;return (B-g.x)/g.y;}void main(){vec2 x=a*b;vec2 y=x+c;s=w(y/e,n,o);t=x;gl_Position=v(y,d);}");
    ::STRINGS[61] = uString::Const("uniform float h,i,j,k,l,m;uniform vec2 p,q,r;uniform sampler2D u;varying float s;varying vec2 t;void main(){vec4 x=texture2D(u,vec2(s,.5));vec4 y=vec4(x.xyz,x.w*(clamp(.5-(((abs((length(t)-h)-i)-j)*k)*l),float(0),float(1))*clamp(.5-((max(dot(t,p),max(dot(t,q),dot(t,r)))*k)*l),float(0),float(1))));gl_FragColor=vec4((y.xyz*y.w)*m,y.w*m);}");
    ::STRINGS[62] = uString::Const("uniform vec2 b,c,e,f,g,n;uniform mat4 d;uniform float o;attribute vec2 a;varying float p;varying vec2 q;vec4 s(vec2 u,mat4 v){return vec4(((u.x*v[0].x)+(u.y*v[1].x))+v[3].x,((u.x*v[0].y)+(u.y*v[1].y))+v[3].y,((u.x*v[0].z)+(u.y*v[1].z))+v[3].z,((u.x*v[0].w)+(u.y*v[1].w))+v[3].w);}float t(vec2 u,vec2 v,float w){vec2 x=(u*e)-f;float y=dot(x,v)/w;return (y-g.x)/g.y;}void main(){vec2 u=a*b;vec2 v=u+c;p=t(v/e,n,o);q=u;gl_Position=s(v,d);}");
    ::STRINGS[63] = uString::Const("uniform float h,i,j,k,l,m;uniform sampler2D r;varying float p;varying vec2 q;void main(){vec4 u=texture2D(r,vec2(p,.5));vec4 v=vec4(u.xyz,u.w*(clamp(.5-(((abs((length(q)-h)-i)-j)*k)*l),float(0),float(1))*float(1)));gl_FragColor=vec4((v.xyz*v.w)*m,v.w*m);}");
    ::STRINGS[64] = uString::Const("uniform vec2 c,d,f,g,h,i,j;uniform mat4 e;attribute vec2 a;varying vec2 u,v;vec4 x(vec2 y,mat4 z){return vec4(((y.x*z[0].x)+(y.y*z[1].x))+z[3].x,((y.x*z[0].y)+(y.y*z[1].y))+z[3].y,((y.x*z[0].z)+(y.y*z[1].z))+z[3].z,((y.x*z[0].w)+(y.y*z[1].w))+z[3].w);}void main(){vec2 y=a*c;vec2 z=y+d;u=((((f*(z/f))-g)/h)*i)+j;v=y;gl_Position=x(z,e);}");
    ::STRINGS[65] = uString::Const("uniform vec4 k;uniform float l,m,n,o,p,q;uniform vec2 r,s,t;uniform sampler2D w;varying vec2 u,v;void main(){vec4 y=(b?vec4(float(0)):texture2D(w,u))*k;vec4 z=vec4(y.xyz,y.w*(clamp(.5-(((abs((length(v)-l)-m)-n)*o)*p),float(0),float(1))*clamp(.5-((min(dot(v,r),min(dot(v,s),dot(v,t)))*o)*p),float(0),float(1))));gl_FragColor=vec4((z.xyz*z.w)*q,z.w*q);}");
    ::STRINGS[66] = uString::Const("t");
    ::STRINGS[67] = uString::Const("w");
    ::STRINGS[68] = uString::Const("uniform vec4 k;uniform float l,m,n,o,p,q;uniform vec2 r,s,t;uniform sampler2D w;varying vec2 u,v;void main(){vec4 y=(b?vec4(float(0)):texture2D(w,u))*k;vec4 z=vec4(y.xyz,y.w*(clamp(.5-(((abs((length(v)-l)-m)-n)*o)*p),float(0),float(1))*clamp(.5-((max(dot(v,r),max(dot(v,s),dot(v,t)))*o)*p),float(0),float(1))));gl_FragColor=vec4((z.xyz*z.w)*q,z.w*q);}");
    ::STRINGS[69] = uString::Const("uniform vec2 c,d,f,g,h,i,j;uniform mat4 e;attribute vec2 a;varying vec2 r,s;vec4 u(vec2 v,mat4 w){return vec4(((v.x*w[0].x)+(v.y*w[1].x))+w[3].x,((v.x*w[0].y)+(v.y*w[1].y))+w[3].y,((v.x*w[0].z)+(v.y*w[1].z))+w[3].z,((v.x*w[0].w)+(v.y*w[1].w))+w[3].w);}void main(){vec2 v=a*c;vec2 w=v+d;r=((((f*(w/f))-g)/h)*i)+j;s=v;gl_Position=u(w,e);}");
    ::STRINGS[70] = uString::Const("uniform vec4 k;uniform float l,m,n,o,p,q;uniform sampler2D t;varying vec2 r,s;void main(){vec4 v=(b?vec4(float(0)):texture2D(t,r))*k;vec4 w=vec4(v.xyz,v.w*(clamp(.5-(((abs((length(s)-l)-m)-n)*o)*p),float(0),float(1))*float(1)));gl_FragColor=vec4((w.xyz*w.w)*q,w.w*q);}");
    ::STRINGS[71] = uString::Const("uniform vec2 b,c;uniform mat4 d;attribute vec2 a;varying vec2 p;vec4 q(vec2 r,mat4 s){return vec4(((r.x*s[0].x)+(r.y*s[1].x))+s[3].x,((r.x*s[0].y)+(r.y*s[1].y))+s[3].y,((r.x*s[0].z)+(r.y*s[1].z))+s[3].z,((r.x*s[0].w)+(r.y*s[1].w))+s[3].w);}void main(){vec2 r=a*b;p=r;gl_Position=q(r+c,d);}");
    ::STRINGS[72] = uString::Const("uniform float e,f,g,h,i,j,l;uniform vec2 m,n,o;uniform vec3 k;varying vec2 p;void main(){vec4 r=vec4(k,j*(clamp(.5-(((abs((length(p)-e)-f)-g)*h)*i),float(0),float(1))*clamp(.5-((min(dot(p,m),min(dot(p,n),dot(p,o)))*h)*i),float(0),float(1))));gl_FragColor=vec4((r.xyz*r.w)*l,r.w*l);}");
    ::STRINGS[73] = uString::Const("uniform float e,f,g,h,i,j,l;uniform vec2 m,n,o;uniform vec3 k;varying vec2 p;void main(){vec4 r=vec4(k,j*(clamp(.5-(((abs((length(p)-e)-f)-g)*h)*i),float(0),float(1))*clamp(.5-((max(dot(p,m),max(dot(p,n),dot(p,o)))*h)*i),float(0),float(1))));gl_FragColor=vec4((r.xyz*r.w)*l,r.w*l);}");
    ::STRINGS[74] = uString::Const("uniform float e,f,g,h,i,j,l;uniform vec3 k;varying vec2 m;void main(){vec4 o=vec4(k,j*(clamp(.5-(((abs((length(m)-e)-f)-g)*h)*i),float(0),float(1))*float(1)));gl_FragColor=vec4((o.xyz*o.w)*l,o.w*l);}");
    ::STRINGS[75] = uString::Const("uniform float h,i,j,k,l,m;uniform vec2 p,q,r;uniform sampler2D u;varying float s;varying vec2 t;void main(){vec4 x=texture2D(u,vec2(s,.5));vec4 y=vec4(x.xyz,x.w*(clamp(.5-(((abs((length(t)-h)-i)-j)*k)*l),float(0),float(1))*clamp(.5-((min(dot(t,p),min(dot(t,q),dot(t,r)))*k)*l),float(0),float(1))));gl_FragColor=vec4((y.xyz*y.w)*m,y.w*m);}");
    ::STRINGS[76] = uString::Const("uniform vec2 b,c;uniform mat4 d;attribute vec2 a;varying vec2 o;vec4 p(vec2 q,mat4 r){return vec4(((q.x*r[0].x)+(q.y*r[1].x))+r[3].x,((q.x*r[0].y)+(q.y*r[1].y))+r[3].y,((q.x*r[0].z)+(q.y*r[1].z))+r[3].z,((q.x*r[0].w)+(q.y*r[1].w))+r[3].w);}void main(){vec2 q=a*b;o=q;gl_Position=p(q+c,d);}");
    ::STRINGS[77] = uString::Const("uniform float e,f,g,h,i,j;uniform vec2 l,m,n;uniform vec3 k;varying vec2 o;void main(){vec4 q=vec4(k,j*(clamp(.5-(((abs((length(o)-e)-f)-g)*h)*i),float(0),float(1))*clamp(.5-((min(dot(o,l),min(dot(o,m),dot(o,n)))*h)*i),float(0),float(1))));gl_FragColor=vec4((q.xyz*q.w)*1.,q.w);}");
    ::STRINGS[78] = uString::Const("uniform float e,f,g,h,i,j;uniform vec2 l,m,n;uniform vec3 k;varying vec2 o;void main(){vec4 q=vec4(k,j*(clamp(.5-(((abs((length(o)-e)-f)-g)*h)*i),float(0),float(1))*clamp(.5-((max(dot(o,l),max(dot(o,m),dot(o,n)))*h)*i),float(0),float(1))));gl_FragColor=vec4((q.xyz*q.w)*1.,q.w);}");
    ::STRINGS[79] = uString::Const("uniform vec2 b,c;uniform mat4 d;attribute vec2 a;varying vec2 l;vec4 m(vec2 n,mat4 o){return vec4(((n.x*o[0].x)+(n.y*o[1].x))+o[3].x,((n.x*o[0].y)+(n.y*o[1].y))+o[3].y,((n.x*o[0].z)+(n.y*o[1].z))+o[3].z,((n.x*o[0].w)+(n.y*o[1].w))+o[3].w);}void main(){vec2 n=a*b;l=n;gl_Position=m(n+c,d);}");
    ::STRINGS[80] = uString::Const("uniform float e,f,g,h,i,j;uniform vec3 k;varying vec2 l;void main(){vec4 n=vec4(k,j*(clamp(.5-(((abs((length(l)-e)-f)-g)*h)*i),float(0),float(1))*float(1)));gl_FragColor=vec4((n.xyz*n.w)*1.,n.w);}");
    ::STRINGS[81] = uString::Const("uniform float f[d];uniform vec2 g,i,j,k,l,m;uniform mat4 h;attribute vec4 a,b;attribute float c;varying float t;varying vec2 u,v,w;vec4 y(vec2 z,mat4 A){return vec4(((z.x*A[0].x)+(z.y*A[1].x))+A[3].x,((z.x*A[0].y)+(z.y*A[1].y))+A[3].y,((z.x*A[0].z)+(z.y*A[1].z))+A[3].z,((z.x*A[0].w)+(z.y*A[1].w))+A[3].w);}void main(){vec2 z=vec2((sign(a.x)*f[int(abs(a.x))])+(sign(a.y)*f[int(abs(a.y))]),(sign(a.z)*f[int(abs(a.z))])+(sign(a.w)*f[int(abs(a.w))]))+g;t=f[int(c)];u=((((i*(z/i))-j)/k)*l)+m;v=z;w=vec2((sign(b.x)*f[int(abs(b.x))])+(sign(b.y)*f[int(abs(b.y))]),(sign(b.z)*f[int(abs(b.z))])+(sign(b.w)*f[int(abs(b.w))]))+g;gl_Position=y(z,h);}");
    ::STRINGS[82] = uString::Const("uniform vec4 n;uniform float o,p,q,r,s;uniform sampler2D x;varying float t;varying vec2 u,v,w;void main(){vec4 z=(e?vec4(float(0)):texture2D(x,u))*n;vec4 A=vec4(z.xyz,z.w*clamp(.5-(((abs((distance(v,w)-t)-o)-p)*q)*r),float(0),float(1)));gl_FragColor=vec4((A.xyz*A.w)*s,A.w*s);}");
    ::STRINGS[83] = uString::Const("x");
    ::STRINGS[84] = uString::Const("uniform float e[d];uniform vec2 f;uniform mat4 g;attribute vec4 a,b;attribute float c;varying float o;varying vec2 p,q;vec4 r(vec2 s,mat4 t){return vec4(((s.x*t[0].x)+(s.y*t[1].x))+t[3].x,((s.x*t[0].y)+(s.y*t[1].y))+t[3].y,((s.x*t[0].z)+(s.y*t[1].z))+t[3].z,((s.x*t[0].w)+(s.y*t[1].w))+t[3].w);}void main(){vec2 s=vec2((sign(a.x)*e[int(abs(a.x))])+(sign(a.y)*e[int(abs(a.y))]),(sign(a.z)*e[int(abs(a.z))])+(sign(a.w)*e[int(abs(a.w))]))+f;o=e[int(c)];p=s;q=vec2((sign(b.x)*e[int(abs(b.x))])+(sign(b.y)*e[int(abs(b.y))]),(sign(b.z)*e[int(abs(b.z))])+(sign(b.w)*e[int(abs(b.w))]))+f;gl_Position=r(s,g);}");
    ::STRINGS[85] = uString::Const("uniform float h,i,j,k,l,n;uniform vec3 m;varying float o;varying vec2 p,q;void main(){vec4 s=vec4(m,l*clamp(.5-(((abs((distance(p,q)-o)-h)-i)*j)*k),float(0),float(1)));gl_FragColor=vec4((s.xyz*s.w)*n,s.w*n);}");
    ::STRINGS[86] = uString::Const("uniform float e[d],q;uniform vec2 f,h,i,j,p;uniform mat4 g;attribute vec4 a,b;attribute float c;varying float r,s;varying vec2 t,u;vec4 w(vec2 y,mat4 z){return vec4(((y.x*z[0].x)+(y.y*z[1].x))+z[3].x,((y.x*z[0].y)+(y.y*z[1].y))+z[3].y,((y.x*z[0].z)+(y.y*z[1].z))+z[3].z,((y.x*z[0].w)+(y.y*z[1].w))+z[3].w);}float x(vec2 y,vec2 z,float A){vec2 B=(y*h)-i;float C=dot(B,z)/A;return (C-j.x)/j.y;}void main(){vec2 y=vec2((sign(a.x)*e[int(abs(a.x))])+(sign(a.y)*e[int(abs(a.y))]),(sign(a.z)*e[int(abs(a.z))])+(sign(a.w)*e[int(abs(a.w))]))+f;r=e[int(c)];s=x(y/h,p,q);t=y;u=vec2((sign(b.x)*e[int(abs(b.x))])+(sign(b.y)*e[int(abs(b.y))]),(sign(b.z)*e[int(abs(b.z))])+(sign(b.w)*e[int(abs(b.w))]))+f;gl_Position=w(y,g);}");
    ::STRINGS[87] = uString::Const("uniform float k,l,m,n,o;uniform sampler2D v;varying float r,s;varying vec2 t,u;void main(){vec4 y=texture2D(v,vec2(s,.5));vec4 z=vec4(y.xyz,y.w*clamp(.5-(((abs((distance(t,u)-r)-k)-l)*m)*n),float(0),float(1)));gl_FragColor=vec4((z.xyz*z.w)*o,z.w*o);}");
    ::STRINGS[88] = uString::Const("v");
    ::STRINGS[89] = uString::Const("uniform float e[d];uniform vec2 f;uniform mat4 g;attribute vec4 a,b;attribute float c;varying float n;varying vec2 o,p;vec4 q(vec2 r,mat4 s){return vec4(((r.x*s[0].x)+(r.y*s[1].x))+s[3].x,((r.x*s[0].y)+(r.y*s[1].y))+s[3].y,((r.x*s[0].z)+(r.y*s[1].z))+s[3].z,((r.x*s[0].w)+(r.y*s[1].w))+s[3].w);}void main(){vec2 r=vec2((sign(a.x)*e[int(abs(a.x))])+(sign(a.y)*e[int(abs(a.y))]),(sign(a.z)*e[int(abs(a.z))])+(sign(a.w)*e[int(abs(a.w))]))+f;n=e[int(c)];o=r;p=vec2((sign(b.x)*e[int(abs(b.x))])+(sign(b.y)*e[int(abs(b.y))]),(sign(b.z)*e[int(abs(b.z))])+(sign(b.w)*e[int(abs(b.w))]))+f;gl_Position=q(r,g);}");
    ::STRINGS[90] = uString::Const("uniform float h,i,j,k,l;uniform vec3 m;varying float n;varying vec2 o,p;void main(){vec4 r=vec4(m,l*clamp(.5-(((abs((distance(o,p)-n)-h)-i)*j)*k),float(0),float(1)));gl_FragColor=vec4((r.xyz*r.w)*1.,r.w);}");
    ::STRINGS[91] = uString::Const("uniform float f[d];uniform vec2 g,i,j,k,l,m;uniform mat4 h;attribute vec4 a,b;attribute float c;varying float r;varying vec2 s,t,u;vec4 w(vec2 x,mat4 y){return vec4(((x.x*y[0].x)+(x.y*y[1].x))+y[3].x,((x.x*y[0].y)+(x.y*y[1].y))+y[3].y,((x.x*y[0].z)+(x.y*y[1].z))+y[3].z,((x.x*y[0].w)+(x.y*y[1].w))+y[3].w);}void main(){vec2 x=vec2((sign(a.x)*f[int(abs(a.x))])+(sign(a.y)*f[int(abs(a.y))]),(sign(a.z)*f[int(abs(a.z))])+(sign(a.w)*f[int(abs(a.w))]))+g;r=f[int(c)];s=((((i*(x/i))-j)/k)*l)+m;t=x;u=vec2((sign(b.x)*f[int(abs(b.x))])+(sign(b.y)*f[int(abs(b.y))]),(sign(b.z)*f[int(abs(b.z))])+(sign(b.w)*f[int(abs(b.w))]))+g;gl_Position=w(x,h);}");
    ::STRINGS[92] = uString::Const("uniform vec4 n;uniform float o,p,q;uniform sampler2D v;varying float r;varying vec2 s,t,u;void main(){vec4 x=(e?vec4(float(0)):texture2D(v,s))*n;vec4 y=vec4(x.xyz,x.w*clamp(.5-(((distance(t,u)-r)*o)*p),float(0),float(1)));gl_FragColor=vec4((y.xyz*y.w)*q,y.w*q);}");
    ::STRINGS[93] = uString::Const("uniform float e[d];uniform vec2 f;uniform mat4 g;attribute vec4 a,b;attribute float c;varying float m;varying vec2 n,o;vec4 p(vec2 q,mat4 r){return vec4(((q.x*r[0].x)+(q.y*r[1].x))+r[3].x,((q.x*r[0].y)+(q.y*r[1].y))+r[3].y,((q.x*r[0].z)+(q.y*r[1].z))+r[3].z,((q.x*r[0].w)+(q.y*r[1].w))+r[3].w);}void main(){vec2 q=vec2((sign(a.x)*e[int(abs(a.x))])+(sign(a.y)*e[int(abs(a.y))]),(sign(a.z)*e[int(abs(a.z))])+(sign(a.w)*e[int(abs(a.w))]))+f;m=e[int(c)];n=q;o=vec2((sign(b.x)*e[int(abs(b.x))])+(sign(b.y)*e[int(abs(b.y))]),(sign(b.z)*e[int(abs(b.z))])+(sign(b.w)*e[int(abs(b.w))]))+f;gl_Position=p(q,g);}");
    ::STRINGS[94] = uString::Const("uniform float h,i,j,l;uniform vec3 k;varying float m;varying vec2 n,o;void main(){vec4 q=vec4(k,j*clamp(.5-(((distance(n,o)-m)*h)*i),float(0),float(1)));gl_FragColor=vec4((q.xyz*q.w)*l,q.w*l);}");
    ::STRINGS[95] = uString::Const("uniform float e[d],o;uniform vec2 f,h,i,j,n;uniform mat4 g;attribute vec4 a,b;attribute float c;varying float p,q;varying vec2 r,s;vec4 u(vec2 w,mat4 x){return vec4(((w.x*x[0].x)+(w.y*x[1].x))+x[3].x,((w.x*x[0].y)+(w.y*x[1].y))+x[3].y,((w.x*x[0].z)+(w.y*x[1].z))+x[3].z,((w.x*x[0].w)+(w.y*x[1].w))+x[3].w);}float v(vec2 w,vec2 x,float y){vec2 z=(w*h)-i;float A=dot(z,x)/y;return (A-j.x)/j.y;}void main(){vec2 w=vec2((sign(a.x)*e[int(abs(a.x))])+(sign(a.y)*e[int(abs(a.y))]),(sign(a.z)*e[int(abs(a.z))])+(sign(a.w)*e[int(abs(a.w))]))+f;p=e[int(c)];q=v(w/h,n,o);r=w;s=vec2((sign(b.x)*e[int(abs(b.x))])+(sign(b.y)*e[int(abs(b.y))]),(sign(b.z)*e[int(abs(b.z))])+(sign(b.w)*e[int(abs(b.w))]))+f;gl_Position=u(w,g);}");
    ::STRINGS[96] = uString::Const("uniform float k,l,m;uniform sampler2D t;varying float p,q;varying vec2 r,s;void main(){vec4 w=texture2D(t,vec2(q,.5));vec4 x=vec4(w.xyz,w.w*clamp(.5-(((distance(r,s)-p)*k)*l),float(0),float(1)));gl_FragColor=vec4((x.xyz*x.w)*m,x.w*m);}");
    ::STRINGS[97] = uString::Const("uniform float e[d];uniform vec2 f;uniform mat4 g;attribute vec4 a,b;attribute float c;varying float l;varying vec2 m,n;vec4 o(vec2 p,mat4 q){return vec4(((p.x*q[0].x)+(p.y*q[1].x))+q[3].x,((p.x*q[0].y)+(p.y*q[1].y))+q[3].y,((p.x*q[0].z)+(p.y*q[1].z))+q[3].z,((p.x*q[0].w)+(p.y*q[1].w))+q[3].w);}void main(){vec2 p=vec2((sign(a.x)*e[int(abs(a.x))])+(sign(a.y)*e[int(abs(a.y))]),(sign(a.z)*e[int(abs(a.z))])+(sign(a.w)*e[int(abs(a.w))]))+f;l=e[int(c)];m=p;n=vec2((sign(b.x)*e[int(abs(b.x))])+(sign(b.y)*e[int(abs(b.y))]),(sign(b.z)*e[int(abs(b.z))])+(sign(b.w)*e[int(abs(b.w))]))+f;gl_Position=o(p,g);}");
    ::STRINGS[98] = uString::Const("uniform float h,i,j;uniform vec3 k;varying float l;varying vec2 m,n;void main(){vec4 p=vec4(k,j*clamp(.5-(((distance(m,n)-l)*h)*i),float(0),float(1)));gl_FragColor=vec4((p.xyz*p.w)*1.,p.w);}");
    ::TYPES[1] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle2a09f04b_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle2a09f04c_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle2a09f04d_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle2a0b4d6b_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle2a0b4d6c_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle2a0b4d82_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle2a16366b_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle2a16366c_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle2a16366d_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle2a17938b_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle2a17938c_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle2a17938d_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle32dc887c_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle32dc887d_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle7f4c424a_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle7f4c424b_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle7f4c424c_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle7f4c4d90_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle7f4c4d91_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle7f4c4d92_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle7f4c58d6_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlef0db6dc4_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlef0db6dc5_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlef0db6dc6_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangleb62db4f9_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangleb62db4fa_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangleb62db4fb_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangleb62db4fc_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangleb62dc401_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangleb62dc402_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangleb62dc403_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangleb62dc404_, uFieldFlagsStatic);
}

uClassType* FuseDrawingPrimitives_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 32;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseDrawingPrimitives_bundle", options);
    type->fp_build_ = FuseDrawingPrimitives_bundle_build;
    type->fp_cctor_ = FuseDrawingPrimitives_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle2a09f04b_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle2a09f04c_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle2a09f04d_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle2a0b4d6b_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle2a0b4d6c_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle2a0b4d82_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle2a16366b_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle2a16366c_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle2a16366d_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle2a17938b_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle2a17938c_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle2a17938d_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle32dc887c_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle32dc887d_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle7f4c424a_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle7f4c424b_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle7f4c424c_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle7f4c4d90_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle7f4c4d91_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle7f4c4d92_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle7f4c58d6_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlef0db6dc4_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlef0db6dc5_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlef0db6dc6_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangleb62db4f9_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangleb62db4fa_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangleb62db4fb_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangleb62db4fc_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangleb62dc401_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangleb62dc402_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangleb62dc403_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangleb62dc404_;
// }

// /usr/local/share/uno/Packages/Fuse.Effects/0.32.14/.uno/package
// ---------------------------------------------------------------

// public static generated class FuseEffects_bundle :0
// {
// static FuseEffects_bundle() :0
static void FuseEffects_bundle__cctor__fn(uType* __type)
{
    FuseEffects_bundle::Blitter1ef54105_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[99/*"uniform mat...*/], ::STRINGS[100/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[1/*string[]*/], 7, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[9/*"h"*/]));
    FuseEffects_bundle::Blurec489e30_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[101/*"uniform mat...*/], ::STRINGS[20/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[1/*string[]*/], 4, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[6/*"e"*/]));
    FuseEffects_bundle::Desaturatec68ecebc_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[102/*"uniform mat...*/], ::STRINGS[103/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[1/*string[]*/], 5, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[7/*"f"*/]));
    FuseEffects_bundle::EffectHelpers19f0dc38_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[104/*"attribute v...*/], ::STRINGS[105/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[1/*string[]*/], 2, ::STRINGS[3/*"a"*/], ::STRINGS[4/*"c"*/]));
    FuseEffects_bundle::EffectHelpers36c238d5_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[106/*"uniform vec...*/], ::STRINGS[107/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[1/*string[]*/], 8, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[25/*"m"*/]));
    FuseEffects_bundle::EffectHelpers4273de51_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[108/*"uniform vec...*/], ::STRINGS[109/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[1/*string[]*/], 11, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[66/*"t"*/]));
    FuseEffects_bundle::EffectHelpersde6318b0_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[110/*"attribute v...*/], ::STRINGS[111/*"uniform flo...*/], 3, 1, uArray::Init<uString*>(::TYPES[1/*string[]*/], 7, ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[3/*"a"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[9/*"h"*/]));
    FuseEffects_bundle::Halftoneb6f474d8_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[112/*"uniform mat...*/], ::STRINGS[113/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[1/*string[]*/], 14, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[25/*"m"*/], ::STRINGS[27/*"q"*/]));
    FuseEffects_bundle::Mask76ebab4c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[114/*"uniform mat...*/], ::STRINGS[115/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[1/*string[]*/], 5, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/]));
    FuseEffects_bundle::Mask76ebab4d_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[114/*"uniform mat...*/], ::STRINGS[116/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[1/*string[]*/], 5, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/]));
    FuseEffects_bundle::Mask76ebab4e_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[114/*"uniform mat...*/], ::STRINGS[117/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[1/*string[]*/], 5, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/]));
}

static void FuseEffects_bundle_build(uType* type)
{
    ::STRINGS[99] = uString::Const("uniform mat4 f,b;attribute vec2 a;varying vec2 g;void main(){g=true?vec2(a.x,float(1)-a.y):a;gl_Position=b*(f*vec4(vec3(a,float(0)),1.));}");
    ::STRINGS[100] = uString::Const("uniform vec3 e;uniform float c,d;uniform sampler2D h;varying vec2 g;void main(){gl_FragColor=vec4(e,clamp(texture2D(h,g).w*c,float(0),float(1))*d);}");
    ::STRINGS[3] = uString::Const("a");
    ::STRINGS[2] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[6] = uString::Const("e");
    ::STRINGS[7] = uString::Const("f");
    ::STRINGS[9] = uString::Const("h");
    ::STRINGS[101] = uString::Const("uniform mat4 c,b;attribute vec2 a;varying vec2 d;void main(){d=true?vec2(a.x,float(1)-a.y):a;gl_Position=b*(c*vec4(vec3(a,float(0)),1.));}");
    ::STRINGS[20] = uString::Const("uniform sampler2D e;varying vec2 d;void main(){gl_FragColor=texture2D(e,d);}");
    ::STRINGS[102] = uString::Const("uniform mat4 d,b;attribute vec2 a;varying vec2 e;void main(){e=true?vec2(a.x,float(1)-a.y):a;gl_Position=b*(d*vec4(vec3(a,float(0)),1.));}");
    ::STRINGS[103] = uString::Const("uniform float c;uniform sampler2D f;varying vec2 e;void main(){vec4 g=texture2D(f,e);vec4 h=vec4(g.xyz/max(g.w,1e-05),g.w);gl_FragColor=vec4(mix(h.xyz,vec3(sqrt(dot(h.xyz*h.xyz,vec3(.299,.587,.114)))),c),h.w);}");
    ::STRINGS[104] = uString::Const("attribute vec2 a;varying vec2 b;void main(){vec3 d=vec3((a.xy*vec2(float(2),float(2)))+vec3(float(-1),float(-1),float(0)).xy,float(0));b=(d.xy*.5)+.5;gl_Position=vec4(d,float(1));}");
    ::STRINGS[105] = uString::Const("uniform sampler2D c;varying vec2 b;void main(){gl_FragColor=texture2D(c,b);}");
    ::STRINGS[106] = uString::Const("uniform vec2 c,e,f,g;attribute vec2 a;varying vec2 h,i,j,k,l;void main(){vec3 n=vec3((a.xy*vec2(float(2),float(2)))+vec3(float(-1),float(-1),float(0)).xy,float(0));vec2 o=(n.xy*.5)+.5;h=o;i=o+c;j=o+e;k=o+f;l=o+g;gl_Position=vec4(n,float(1));}");
    ::STRINGS[107] = uString::Const("uniform float b,d;uniform sampler2D m;varying vec2 h,i,j,k,l;void main(){gl_FragColor=((((texture2D(m,h)*b)+(texture2D(m,i)*d))+(texture2D(m,j)*d))+(texture2D(m,k)*d))+(texture2D(m,l)*d);}");
    ::STRINGS[8] = uString::Const("g");
    ::STRINGS[25] = uString::Const("m");
    ::STRINGS[108] = uString::Const("uniform vec2 c,e,f,h,i,j;attribute vec2 a;varying vec2 k,l,m,n,o,p,q,r,s;void main(){vec3 u=vec3((a.xy*vec2(float(2),float(2)))+vec3(float(-1),float(-1),float(0)).xy,float(0));vec2 v=(u.xy*.5)+.5;k=v;l=v+c;m=v-c;n=v+e;o=v-e;p=v+f;q=v+h;r=v+i;s=v+j;gl_Position=vec4(u,float(1));}");
    ::STRINGS[109] = uString::Const("uniform float b,d,g;uniform sampler2D t;varying vec2 k,l,m,n,o,p,q,r,s;void main(){gl_FragColor=((((((((texture2D(t,k)*b)+(texture2D(t,l)*d))+(texture2D(t,m)*d))+(texture2D(t,n)*d))+(texture2D(t,o)*d))+(texture2D(t,p)*g))+(texture2D(t,q)*g))+(texture2D(t,r)*g))+(texture2D(t,s)*g);}");
    ::STRINGS[10] = uString::Const("i");
    ::STRINGS[11] = uString::Const("j");
    ::STRINGS[66] = uString::Const("t");
    ::STRINGS[110] = uString::Const("attribute vec2 a;varying vec2 g;void main(){vec3 j=vec3((a.xy*vec2(float(2),float(2)))+vec3(float(-1),float(-1),float(0)).xy,float(0));g=(j.xy*.5)+.5;gl_Position=vec4(j,float(1));}");
    ::STRINGS[111] = uString::Const("uniform float e[b];uniform vec2 f[d];uniform sampler2D h;varying vec2 g;vec4 i(vec2 j){vec4 k=texture2D(h,j)*e[0];for(int l=0;l<c;++l){k=k+(texture2D(h,j+f[l])*e[1+l]);k=k+(texture2D(h,j-f[l])*e[1+l]);}return k;}void main(){gl_FragColor=i(g);}");
    ::STRINGS[112] = uString::Const("uniform mat4 m,b;uniform vec2 g,h;uniform mat2 i;attribute vec2 a;varying vec2 n,o,p;void main(){vec2 r=true?vec2(a.x,float(1)-a.y):a;vec2 s=(r*g)+h;n=r;o=i*s;p=s;gl_Position=b*(m*vec4(vec3(a,float(0)),1.));}");
    ::STRINGS[113] = uString::Const("uniform float c,d,e,f,k,l;uniform mat2 j;uniform sampler2D q;varying vec2 n,o,p;void main(){vec4 r=texture2D(q,n);gl_FragColor=mix(mix(vec4(float(1),float(1),float(1),r.w),r,c),mix(vec4(float(0),float(0),float(0),r.w),r,d),clamp(.5-((((((float(1)-sqrt((float(1)-dot(r.xyz*r.xyz,vec3(.299,.587,.114)))/3.14159274))*e)*f)-length(p-(j*((floor(o/e)+.5)*e))))*k)*l),float(0),float(1)));}");
    ::STRINGS[12] = uString::Const("k");
    ::STRINGS[13] = uString::Const("l");
    ::STRINGS[27] = uString::Const("q");
    ::STRINGS[114] = uString::Const("uniform mat4 c,b;attribute vec2 a;varying vec2 d,e;void main(){vec2 h=true?vec2(a.x,float(1)-a.y):a;d=h;e=vec2(h.x,float(1)-h.y);gl_Position=b*(c*vec4(vec3(a,float(0)),1.));}");
    ::STRINGS[115] = uString::Const("uniform sampler2D f,g;varying vec2 d,e;void main(){gl_FragColor=texture2D(f,d)*texture2D(g,e).w;}");
    ::STRINGS[116] = uString::Const("uniform sampler2D f,g;varying vec2 d,e;void main(){gl_FragColor=texture2D(f,d)*texture2D(g,e).x;}");
    ::STRINGS[117] = uString::Const("uniform sampler2D f,g;varying vec2 d,e;void main(){vec4 h=texture2D(g,e);gl_FragColor=texture2D(f,d)*vec4(h.xyz*h.w,h.w);}");
    ::TYPES[1] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::Blitter1ef54105_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::Blurec489e30_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::Desaturatec68ecebc_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::EffectHelpers19f0dc38_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::EffectHelpers36c238d5_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::EffectHelpers4273de51_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::EffectHelpersde6318b0_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::Halftoneb6f474d8_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::Mask76ebab4c_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::Mask76ebab4d_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::Mask76ebab4e_, uFieldFlagsStatic);
}

uClassType* FuseEffects_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 11;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseEffects_bundle", options);
    type->fp_build_ = FuseEffects_bundle_build;
    type->fp_cctor_ = FuseEffects_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Blitter1ef54105_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Blurec489e30_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Desaturatec68ecebc_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::EffectHelpers19f0dc38_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::EffectHelpers36c238d5_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::EffectHelpers4273de51_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::EffectHelpersde6318b0_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Halftoneb6f474d8_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Mask76ebab4c_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Mask76ebab4d_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Mask76ebab4e_;
// }

// /usr/local/share/uno/Packages/Fuse.Elements/0.32.14/.uno/package
// ----------------------------------------------------------------

// public static generated class FuseElements_bundle :0
// {
// static FuseElements_bundle() :0
static void FuseElements_bundle__cctor__fn(uType* __type)
{
    FuseElements_bundle::CacheHelper09c90965_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[118/*"uniform vec...*/], ::STRINGS[119/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[1/*string[]*/], 6, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[8/*"g"*/]));
    FuseElements_bundle::ElementBatch47d0cb7a_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[120/*"uniform mat...*/], ::STRINGS[121/*"uniform sam...*/], 0, 2, uArray::Init<uString*>(::TYPES[1/*string[]*/], 4, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[7/*"f"*/]));
    FuseElements_bundle::Scale9Rectangle26462ebf_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[122/*"uniform flo...*/], ::STRINGS[123/*"uniform vec...*/], 0, 2, uArray::Init<uString*>(::TYPES[1/*string[]*/], 17, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[25/*"m"*/], ::STRINGS[14/*"n"*/], ::STRINGS[26/*"o"*/], ::STRINGS[38/*"p"*/], ::STRINGS[39/*"r"*/]));
}

static void FuseElements_bundle_build(uType* type)
{
    ::STRINGS[118] = uString::Const("uniform vec2 b;uniform mat4 c,d;attribute vec2 a;varying vec2 f;void main(){f=vec2(a.x,1.-a.y);gl_Position=d*(c*vec4(a*b,float(0),float(1)));}");
    ::STRINGS[119] = uString::Const("uniform float e;uniform sampler2D g;varying vec2 f;void main(){vec4 h=texture2D(g,f);gl_FragColor=vec4(h.xyz*e,h.w*e);}");
    ::STRINGS[3] = uString::Const("a");
    ::STRINGS[2] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[6] = uString::Const("e");
    ::STRINGS[8] = uString::Const("g");
    ::STRINGS[120] = uString::Const("uniform mat4 c;attribute vec3 a;attribute vec2 b;varying float d;varying vec2 e;void main(){d=a.z;e=vec2(b.x,1.-b.y);gl_Position=(a.z>float(0))?(c*vec4(a.xy,float(0),float(1))):vec4(float(0),float(0),float(0),float(-1));}");
    ::STRINGS[121] = uString::Const("uniform sampler2D f;varying float d;varying vec2 e;void main(){gl_FragColor=texture2D(f,e)*d;}");
    ::STRINGS[7] = uString::Const("f");
    ::STRINGS[122] = uString::Const("uniform float c,d,e,f,g,h,k,l,m,n;uniform mat4 i,j;uniform vec2 o;attribute vec3 a,b;varying vec2 q;void main(){q=vec2(((a.x*c)+(a.y*k))+(a.z*l),((b.x*f)+(b.y*m))+(b.z*n))/o;gl_Position=j*(i*vec4(vec2(((a.x*c)+(a.y*d))+(a.z*e),((b.x*f)+(b.y*g))+(b.z*h)),float(0),float(1)));}");
    ::STRINGS[123] = uString::Const("uniform vec4 p;uniform sampler2D r;varying vec2 q;void main(){gl_FragColor=texture2D(r,q)*p;}");
    ::STRINGS[9] = uString::Const("h");
    ::STRINGS[10] = uString::Const("i");
    ::STRINGS[11] = uString::Const("j");
    ::STRINGS[12] = uString::Const("k");
    ::STRINGS[13] = uString::Const("l");
    ::STRINGS[25] = uString::Const("m");
    ::STRINGS[14] = uString::Const("n");
    ::STRINGS[26] = uString::Const("o");
    ::STRINGS[38] = uString::Const("p");
    ::STRINGS[39] = uString::Const("r");
    ::TYPES[1] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseElements_bundle::CacheHelper09c90965_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseElements_bundle::ElementBatch47d0cb7a_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseElements_bundle::Scale9Rectangle26462ebf_, uFieldFlagsStatic);
}

uClassType* FuseElements_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseElements_bundle", options);
    type->fp_build_ = FuseElements_bundle_build;
    type->fp_cctor_ = FuseElements_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseElements_bundle::CacheHelper09c90965_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseElements_bundle::ElementBatch47d0cb7a_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseElements_bundle::Scale9Rectangle26462ebf_;
// }

// /usr/local/share/uno/Packages/Fuse.Entities/0.32.14/.uno/package
// ----------------------------------------------------------------

// public static generated class FuseEntities_bundle :0
// {
// static FuseEntities_bundle() :0
static void FuseEntities_bundle__cctor__fn(uType* __type)
{
    FuseEntities_bundle::Blur17c40e2b_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[124/*"uniform vec...*/], ::STRINGS[125/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[1/*string[]*/], 4, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[9/*"h"*/]));
    FuseEntities_bundle::FindEdges6e47be68_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[126/*"uniform vec...*/], ::STRINGS[127/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[1/*string[]*/], 9, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[14/*"n"*/]));
    FuseEntities_bundle::MeshBatchingEngine2a0b934a_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[128/*"uniform mat...*/], ::STRINGS[129/*"uniform vec...*/], 3, 5, uArray::Init<uString*>(::TYPES[1/*string[]*/], 20, ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[9/*"h"*/], ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"e"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[25/*"m"*/], ::STRINGS[14/*"n"*/], ::STRINGS[26/*"o"*/], ::STRINGS[38/*"p"*/], ::STRINGS[27/*"q"*/], ::STRINGS[67/*"w"*/], ::STRINGS[83/*"x"*/], ::STRINGS[130/*"y"*/]));
    FuseEntities_bundle::MeshBatchingEngine6eb677fe_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[131/*"uniform mat...*/], ::STRINGS[132/*"uniform vec...*/], 3, 4, uArray::Init<uString*>(::TYPES[1/*string[]*/], 19, ::STRINGS[6/*"e"*/], ::STRINGS[7/*"f"*/], ::STRINGS[8/*"g"*/], ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[9/*"h"*/], ::STRINGS[10/*"i"*/], ::STRINGS[11/*"j"*/], ::STRINGS[12/*"k"*/], ::STRINGS[13/*"l"*/], ::STRINGS[25/*"m"*/], ::STRINGS[14/*"n"*/], ::STRINGS[26/*"o"*/], ::STRINGS[38/*"p"*/], ::STRINGS[88/*"v"*/], ::STRINGS[67/*"w"*/], ::STRINGS[83/*"x"*/]));
    FuseEntities_bundle::MeshRenderer3c229be4_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[133/*"uniform mat...*/], ::STRINGS[134/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[1/*string[]*/], 3, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/], ::STRINGS[4/*"c"*/]));
    FuseEntities_bundle::MeshRendererf517efea_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[135/*"uniform mat...*/], ::STRINGS[136/*"void main()...*/], 0, 1, uArray::Init<uString*>(::TYPES[1/*string[]*/], 2, ::STRINGS[3/*"a"*/], ::STRINGS[2/*"b"*/]));
    FuseEntities_bundle::RenderToTexture36aca600_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[137/*"attribute v...*/], ::STRINGS[105/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[1/*string[]*/], 2, ::STRINGS[3/*"a"*/], ::STRINGS[4/*"c"*/]));
}

static void FuseEntities_bundle_build(uType* type)
{
    ::STRINGS[124] = uString::Const("uniform vec2 b,c;attribute vec2 a;varying vec2 d,e,f,g;void main(){vec3 i=vec3((a.xy*vec2(float(2),float(2)))+vec3(float(-1),float(-1),float(0)).xy,float(0));vec2 j=(i.xy*.5)+.5;d=j+b;e=j-b;f=j+c;g=j-c;gl_Position=vec4(i,float(1));}");
    ::STRINGS[125] = uString::Const("uniform sampler2D h;varying vec2 d,e,f,g;void main(){gl_FragColor=(((texture2D(h,d)+texture2D(h,e))+texture2D(h,f))+texture2D(h,g))*.25;}");
    ::STRINGS[3] = uString::Const("a");
    ::STRINGS[2] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[9] = uString::Const("h");
    ::STRINGS[126] = uString::Const("uniform vec2 b,c,d,e;attribute vec2 a;varying vec2 i,j,k,l,m;void main(){vec2 o=vec2(a.x,1.-a.y);vec2 p=vec2(o.x,1.-o.y);i=p+b;j=p+c;k=p+d;l=p+e;m=p;gl_Position=vec4(vec3((a.xy*vec2(float(2),float(2)))+vec3(float(-1),float(-1),float(0)).xy,float(0)),float(1));}");
    ::STRINGS[127] = uString::Const("uniform float f;uniform vec4 g,h;uniform sampler2D n;varying vec2 i,j,k,l,m;void main(){vec3 o=texture2D(n,m).xyz;float p=min(1.,(((length(texture2D(n,i).xyz-o)+length(texture2D(n,j).xyz-o))+length(texture2D(n,k).xyz-o))+length(texture2D(n,l).xyz-o))*f);gl_FragColor=(g*(1.-p))+(h*p);}");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[6] = uString::Const("e");
    ::STRINGS[7] = uString::Const("f");
    ::STRINGS[8] = uString::Const("g");
    ::STRINGS[14] = uString::Const("n");
    ::STRINGS[128] = uString::Const("uniform mat4 i[16],q,m[16];uniform vec2 j,k;attribute vec3 a,e;attribute float b;attribute vec2 c;attribute vec4 d;varying vec3 r,s,t,v;varying vec2 u;mat3 z(mat3 A){return mat3(A[0].x,A[1].x,A[2].x,A[0].y,A[1].y,A[2].y,A[0].z,A[1].z,A[2].z);}void main(){mat3 A=z(mat3(m[int(b)][0].xyz,m[int(b)][1].xyz,m[int(b)][2].xyz));r=A*d.xyz;s=A*(cross(d.xyz,e)*d.w);t=A*e;u=(c*j)+k;v=(i[int(b)]*vec4(a,1.)).xyz;gl_Position=(q*i[int(b)])*vec4(a,1.);}");
    ::STRINGS[129] = uString::Const("uniform vec3 l,n,o;uniform float p;uniform sampler2D w,x,y;varying vec3 r,s,t,v;varying vec2 u;void main(){vec3 A=l*(f?texture2D(w,u):vec4(float(1))).xyz;vec3 B=mat3(normalize(r),normalize(s),normalize(t))*(g?normalize((texture2D(x,u).xyz*2.)-1.):vec3(float(0),float(0),float(1)));vec3 C=normalize(vec3(float(100),float(0),float(100)));gl_FragColor=vec4(((A*vec3(.5))+((A*max(.0,dot(normalize(B),C)))*vec3(float(1))))+(((n*(h?texture2D(y,u):vec4(float(1))).xyz)*pow(max(.0,dot(normalize(reflect(v-o,B)),C)),p))*vec3(float(1))),1.);}");
    ::STRINGS[10] = uString::Const("i");
    ::STRINGS[11] = uString::Const("j");
    ::STRINGS[12] = uString::Const("k");
    ::STRINGS[13] = uString::Const("l");
    ::STRINGS[25] = uString::Const("m");
    ::STRINGS[26] = uString::Const("o");
    ::STRINGS[38] = uString::Const("p");
    ::STRINGS[27] = uString::Const("q");
    ::STRINGS[67] = uString::Const("w");
    ::STRINGS[83] = uString::Const("x");
    ::STRINGS[130] = uString::Const("y");
    ::STRINGS[131] = uString::Const("uniform mat4 o,l,p;uniform vec2 h,i;attribute vec3 a,d;attribute vec2 b;attribute vec4 c;varying vec3 q,r,s,u;varying vec2 t;void main(){q=mat3(p[0].xyz,p[1].xyz,p[2].xyz)*c.xyz;r=mat3(p[0].xyz,p[1].xyz,p[2].xyz)*(cross(c.xyz,d)*c.w);s=mat3(p[0].xyz,p[1].xyz,p[2].xyz)*d;t=(b*h)+i;u=(l*vec4(a,1.)).xyz;gl_Position=o*vec4(a,1.);}");
    ::STRINGS[132] = uString::Const("uniform vec3 j,k,m;uniform float n;uniform sampler2D v,w,x;varying vec3 q,r,s,u;varying vec2 t;void main(){vec3 y=j*(e?texture2D(v,t):vec4(float(1))).xyz;vec3 z=mat3(normalize(q),normalize(r),normalize(s))*(f?normalize((texture2D(w,t).xyz*2.)-1.):vec3(float(0),float(0),float(1)));vec3 A=normalize(vec3(float(100),float(0),float(100)));gl_FragColor=vec4(((y*vec3(.5))+((y*max(.0,dot(normalize(z),A)))*vec3(float(1))))+(((k*(g?texture2D(x,t):vec4(float(1))).xyz)*pow(max(.0,dot(normalize(reflect(u-m,z)),A)),n))*vec3(float(1))),1.);}");
    ::STRINGS[88] = uString::Const("v");
    ::STRINGS[133] = uString::Const("uniform mat4 c;attribute vec3 a;void main(){gl_Position=c*vec4(a,1.);}");
    ::STRINGS[134] = uString::Const("uniform vec4 b;void main(){gl_FragColor=b;}");
    ::STRINGS[135] = uString::Const("uniform mat4 b;attribute vec3 a;void main(){gl_Position=b*vec4(a,1.);}");
    ::STRINGS[136] = uString::Const("void main(){gl_FragColor=vec4(.8,.85,1.,1.);}");
    ::STRINGS[137] = uString::Const("attribute vec2 a;varying vec2 b;void main(){vec3 d=vec3((a.xy*vec2(float(2),float(2)))+vec3(float(-1),float(-1),float(0)).xy,float(0));b=(d.xy*vec2(.5,-0.5))+.5;gl_Position=vec4(d,float(1));}");
    ::STRINGS[105] = uString::Const("uniform sampler2D c;varying vec2 b;void main(){gl_FragColor=texture2D(c,b);}");
    ::TYPES[1] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEntities_bundle::Blur17c40e2b_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEntities_bundle::FindEdges6e47be68_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEntities_bundle::MeshBatchingEngine2a0b934a_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEntities_bundle::MeshBatchingEngine6eb677fe_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEntities_bundle::MeshRenderer3c229be4_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEntities_bundle::MeshRendererf517efea_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEntities_bundle::RenderToTexture36aca600_, uFieldFlagsStatic);
}

uClassType* FuseEntities_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseEntities_bundle", options);
    type->fp_build_ = FuseEntities_bundle_build;
    type->fp_cctor_ = FuseEntities_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEntities_bundle::Blur17c40e2b_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEntities_bundle::FindEdges6e47be68_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEntities_bundle::MeshBatchingEngine2a0b934a_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEntities_bundle::MeshBatchingEngine6eb677fe_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEntities_bundle::MeshRenderer3c229be4_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEntities_bundle::MeshRendererf517efea_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEntities_bundle::RenderToTexture36aca600_;
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/0.32.14/.uno/package
// ----------------------------------------------------------------

// public static generated class FuseReactive_bundle :0
// {
// static FuseReactive_bundle() :0
static void FuseReactive_bundle__cctor__fn(uType* __type)
{
    FuseReactive_bundle::es6promise26c9edec_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[138/*"Fuse.Reactive"*/]))->GetFile(::STRINGS[139/*"es6-promise...*/]);
    FuseReactive_bundle::Observable84bb268a_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[138/*"Fuse.Reactive"*/]))->GetFile(::STRINGS[140/*"observable-...*/]);
}

static void FuseReactive_bundle_build(uType* type)
{
    ::STRINGS[138] = uString::Const("Fuse.Reactive");
    ::STRINGS[139] = uString::Const("es6-promise-50b2740f.js");
    ::STRINGS[140] = uString::Const("observable-b4b458ef.js");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::FuseReactive_bundle::es6promise26c9edec_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::FuseReactive_bundle::Observable84bb268a_, uFieldFlagsStatic);
}

uClassType* FuseReactive_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseReactive_bundle", options);
    type->fp_build_ = FuseReactive_bundle_build;
    type->fp_cctor_ = FuseReactive_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> FuseReactive_bundle::es6promise26c9edec_;
uSStrong< ::g::Uno::IO::BundleFile*> FuseReactive_bundle::Observable84bb268a_;
// }

} // ::g
