// This file was generated based on /Users/niklas/Dropbox/programmierung/Fuse/SeyCode/.uno/MainView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Btn.h>
#include <_root.Checkbox.h>
#include <_root.Header.h>
#include <_root.MainView.h>
#include <_root.SeyCode_bundle.h>
#include <_root.SeyCode_Checkbox_Value_Property.h>
#include <_root.SeyCode_FuseControlsMultiLayoutPanel_LayoutElement_Property.h>
#include <_root.SeyCode_FuseControlsPageControl_Active_Property.h>
#include <_root.SeyCode_FuseControlsText_Value_Property.h>
#include <_root.SeyCode_TInput_Value_Property.h>
#include <_root.SeyCode_TView_Value_Property.h>
#include <_root.Tab.h>
#include <_root.TInput.h>
#include <_root.TView.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.TransformAnimator-1.h>
#include <Fuse.AppBase.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.BottomBarBackground.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.LayoutControl.h>
#include <Fuse.Controls.MultiLayoutPanel.h>
#include <Fuse.Controls.Page.h>
#include <Fuse.Controls.PageControl.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Placeholder.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.StatusBarBackground.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextInputControl.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Font.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.iOS.StatusBarConfig.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Layouts.GridLayout.h>
#include <Fuse.Layouts.Layout.h>
#include <Fuse.Navigation.WhileActive.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.FuseJS.Http.h>
#include <Fuse.Reactive.FuseJS.TimerModule.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Storage.StorageModule.h>
#include <Fuse.Translation.h>
#include <Fuse.Triggers.Actions.Set-1.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.LayoutAnimation.h>
#include <Fuse.Triggers.LayoutTransition.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Visual.h>
#include <FuseJS.Base64.h>
#include <FuseJS.Bundle.h>
#include <FuseJS.Environment.h>
#include <FuseJS.FileReaderImpl.h>
#include <FuseJS.Globals.h>
#include <FuseJS.Lifecycle.h>
#include <FuseJS.UserEvents.h>
#include <Polyfills.Window.WindowModule.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.Platform.iOS.StatusBarStyle.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Resource.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[40];
static uType* TYPES[25];

namespace g{

// public partial sealed class MainView :2
// {
// static MainView() :41
static void MainView__cctor__fn(uType* __type)
{
    MainView::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[0/*"navigation"*/], ::STRINGS[1/*"encrypt"*/], ::STRINGS[2/*"decrypt"*/], ::STRINGS[3/*"tabbar"*/], ::STRINGS[4/*"encryptTab"*/], ::STRINGS[5/*"indicator"*/], ::STRINGS[6/*"decryptTab"*/]);
    MainView::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[7/*"LayoutElement"*/]);
    MainView::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[8/*"Value"*/]);
    MainView::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[9/*"Active"*/]);
    MainView::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"navigation"*/]);
    MainView::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"encrypt"*/]);
    MainView::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"decrypt"*/]);
    MainView::__selector6_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"tabbar"*/]);
    MainView::__selector7_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"encryptTab"*/]);
    MainView::__selector8_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"indicator"*/]);
    MainView::__selector9_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"decryptTab"*/]);
    MainView::fa_ = ::g::Fuse::Font::New1(::g::Uno::UX::BundleFileSource::New1(::g::SeyCode_bundle::fontawesomewebfont1493feaa()));
    MainView::Ubuntu_ = ::g::Fuse::Font::New1(::g::Uno::UX::BundleFileSource::New1(::g::SeyCode_bundle::UbuntuMediumbe415a3b()));
    MainView::Bold_ = ::g::Fuse::Font::New1(::g::Uno::UX::BundleFileSource::New1(::g::SeyCode_bundle::UbuntuBolddb8aedcb()));
    MainView::Light_ = ::g::Fuse::Font::New1(::g::Uno::UX::BundleFileSource::New1(::g::SeyCode_bundle::UbuntuLightc0600858()));
    MainView::LightItalic_ = ::g::Fuse::Font::New1(::g::Uno::UX::BundleFileSource::New1(::g::SeyCode_bundle::UbuntuLightitalicf2a78388()));
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::fa_, ::STRINGS[10/*"fa"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::Ubuntu_, ::STRINGS[11/*"Ubuntu"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::Bold_, ::STRINGS[12/*"Bold"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::Light_, ::STRINGS[13/*"Light"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(MainView::LightItalic_, ::STRINGS[14/*"LightItalic"*/]);
}

static void MainView_build(uType* type)
{
    ::STRINGS[0] = uString::Const("navigation");
    ::STRINGS[1] = uString::Const("encrypt");
    ::STRINGS[2] = uString::Const("decrypt");
    ::STRINGS[3] = uString::Const("tabbar");
    ::STRINGS[4] = uString::Const("encryptTab");
    ::STRINGS[5] = uString::Const("indicator");
    ::STRINGS[6] = uString::Const("decryptTab");
    ::STRINGS[7] = uString::Const("LayoutElement");
    ::STRINGS[8] = uString::Const("Value");
    ::STRINGS[9] = uString::Const("Active");
    ::STRINGS[10] = uString::Const("fa");
    ::STRINGS[11] = uString::Const("Ubuntu");
    ::STRINGS[12] = uString::Const("Bold");
    ::STRINGS[13] = uString::Const("Light");
    ::STRINGS[14] = uString::Const("LightItalic");
    ::STRINGS[15] = uString::Const("key1Encode");
    ::STRINGS[16] = uString::Const("key2Encode");
    ::STRINGS[17] = uString::Const("checkboxChecked");
    ::STRINGS[18] = uString::Const("encodeError");
    ::STRINGS[19] = uString::Const("plainTextEncode");
    ::STRINGS[20] = uString::Const("encode");
    ::STRINGS[21] = uString::Const("encodedText");
    ::STRINGS[22] = uString::Const("key1Decode");
    ::STRINGS[23] = uString::Const("key2Decode");
    ::STRINGS[24] = uString::Const("decodeError");
    ::STRINGS[25] = uString::Const("plainTextDecode");
    ::STRINGS[26] = uString::Const("decode");
    ::STRINGS[27] = uString::Const("decodedText");
    ::STRINGS[28] = uString::Const("MainView.ux");
    ::STRINGS[29] = uString::Const("Key 1 (will be plain)");
    ::STRINGS[30] = uString::Const("Key 2 (will be hashed)");
    ::STRINGS[31] = uString::Const("Hash Key 2");
    ::STRINGS[32] = uString::Const("Your Text");
    ::STRINGS[33] = uString::Const("Encrypt");
    ::STRINGS[34] = uString::Const("Encrypted Text");
    ::STRINGS[35] = uString::Const("Decrypt");
    ::STRINGS[36] = uString::Const("Plain Text");
    ::STRINGS[37] = uString::Const("1*");
    ::STRINGS[38] = uString::Const("\357\200\243");
    ::STRINGS[39] = uString::Const("\357\202\234");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Uno::UX::FileSource_typeof();
    ::TYPES[2] = uObject_typeof();
    ::TYPES[3] = ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Element_typeof());
    ::TYPES[4] = ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[5] = ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[6] = ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Visual_typeof());
    ::TYPES[7] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Elements::Element_typeof());
    ::TYPES[8] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[9] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[10] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Visual_typeof());
    ::TYPES[11] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[12] = ::g::Fuse::Node_typeof();
    ::TYPES[13] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[14] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof());
    ::TYPES[15] = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    ::TYPES[16] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof());
    ::TYPES[17] = ::g::Fuse::Binding_typeof();
    ::TYPES[18] = ::g::Fuse::Visual_typeof();
    ::TYPES[19] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[20] = ::g::Fuse::Drawing::Brush_typeof();
    ::TYPES[21] = ::g::Fuse::Layouts::Layout_typeof();
    ::TYPES[22] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof());
    ::TYPES[23] = ::g::Fuse::Animations::Animator_typeof();
    ::TYPES[24] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof());
    type->SetFields(9,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::MainView, __g_nametable1), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, decrypt), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, decryptTab), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, encrypt), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, encryptTab), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(::g::MainView, indicator), 0,
        ::g::Fuse::Controls::PageControl_typeof(), offsetof(::g::MainView, navigation), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Visual_typeof()), offsetof(::g::MainView, navigation_Active_inst), 0,
        ::g::Fuse::Controls::MultiLayoutPanel_typeof(), offsetof(::g::MainView, tabbar), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Element_typeof()), offsetof(::g::MainView, tabbar_LayoutElement_inst), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::MainView, temp_eb0), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::MainView, temp_eb1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::MainView, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::MainView, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::MainView, temp10_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof()), offsetof(::g::MainView, temp2_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::MainView, temp3_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::MainView, temp4_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::MainView, temp5_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::MainView, temp6_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::MainView, temp7_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::MainView, temp8_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::MainView, temp9_Value_inst), 0,
        ::g::Uno::String_typeof()->Array(), (uintptr_t)&::g::MainView::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector6_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector7_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector8_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector9_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&::g::MainView::Bold_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&::g::MainView::fa_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&::g::MainView::Light_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&::g::MainView::LightItalic_, uFieldFlagsStatic,
        ::g::Fuse::Font_typeof(), (uintptr_t)&::g::MainView::Ubuntu_, uFieldFlagsStatic);
}

::g::Fuse::AppBase_type* MainView_typeof()
{
    static uSStrong< ::g::Fuse::AppBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 48;
    options.ObjectSize = sizeof(MainView);
    options.TypeSize = sizeof(::g::Fuse::AppBase_type);
    type = (::g::Fuse::AppBase_type*)uClassType::New("MainView", options);
    type->SetBase(::g::Fuse::App_typeof());
    type->fp_build_ = MainView_build;
    type->fp_ctor_ = (void*)MainView__New1_fn;
    type->fp_cctor_ = MainView__cctor__fn;
    return type;
}

// public MainView() :55
void MainView__ctor_3_fn(MainView* __this)
{
    __this->ctor_3();
}

// private void InitializeUX() :59
void MainView__InitializeUX_fn(MainView* __this)
{
    __this->InitializeUX();
}

// public MainView New() :55
void MainView__New1_fn(MainView** __retval)
{
    *__retval = MainView::New1();
}

uSStrong<uArray*> MainView::__g_static_nametable1_;
::g::Uno::UX::Selector MainView::__selector0_;
::g::Uno::UX::Selector MainView::__selector1_;
::g::Uno::UX::Selector MainView::__selector2_;
::g::Uno::UX::Selector MainView::__selector3_;
::g::Uno::UX::Selector MainView::__selector4_;
::g::Uno::UX::Selector MainView::__selector5_;
::g::Uno::UX::Selector MainView::__selector6_;
::g::Uno::UX::Selector MainView::__selector7_;
::g::Uno::UX::Selector MainView::__selector8_;
::g::Uno::UX::Selector MainView::__selector9_;
uSStrong< ::g::Fuse::Font*> MainView::Bold_;
uSStrong< ::g::Fuse::Font*> MainView::fa_;
uSStrong< ::g::Fuse::Font*> MainView::Light_;
uSStrong< ::g::Fuse::Font*> MainView::LightItalic_;
uSStrong< ::g::Fuse::Font*> MainView::Ubuntu_;

// public MainView() [instance] :55
void MainView::ctor_3()
{
    ctor_2();
    InitializeUX();
}

// private void InitializeUX() [instance] :59
void MainView::InitializeUX()
{
    ::g::Fuse::Reactive::FuseJS::TimerModule* temp11 = ::g::Fuse::Reactive::FuseJS::TimerModule::New2();
    ::g::Fuse::Reactive::FuseJS::Http* temp12 = ::g::Fuse::Reactive::FuseJS::Http::New2();
    ::g::Fuse::Storage::StorageModule* temp13 = ::g::Fuse::Storage::StorageModule::New2();
    ::g::Polyfills::Window::WindowModule* temp14 = ::g::Polyfills::Window::WindowModule::New3();
    ::g::FuseJS::Globals* temp15 = ::g::FuseJS::Globals::New2();
    ::g::FuseJS::Lifecycle* temp16 = ::g::FuseJS::Lifecycle::New2();
    ::g::FuseJS::Environment* temp17 = ::g::FuseJS::Environment::New2();
    ::g::FuseJS::Base64* temp18 = ::g::FuseJS::Base64::New2();
    ::g::FuseJS::Bundle* temp19 = ::g::FuseJS::Bundle::New2();
    ::g::FuseJS::FileReaderImpl* temp20 = ::g::FuseJS::FileReaderImpl::New2();
    ::g::FuseJS::UserEvents* temp21 = ::g::FuseJS::UserEvents::New2();
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, MainView::__g_static_nametable1());
    tabbar = ::g::Fuse::Controls::MultiLayoutPanel::New4();
    tabbar_LayoutElement_inst = ::g::SeyCode_FuseControlsMultiLayoutPanel_LayoutElement_Property::New1(tabbar, MainView::__selector0());
    ::g::TInput* temp = ::g::TInput::New4();
    temp_Value_inst = ::g::SeyCode_TInput_Value_Property::New1(temp, MainView::__selector1());
    ::g::TInput* temp1 = ::g::TInput::New4();
    temp1_Value_inst = ::g::SeyCode_TInput_Value_Property::New1(temp1, MainView::__selector1());
    ::g::Checkbox* temp2 = ::g::Checkbox::New5();
    temp2_Value_inst = ::g::SeyCode_Checkbox_Value_Property::New1(temp2, MainView::__selector1());
    ::g::Fuse::Controls::Text* temp3 = ::g::Fuse::Controls::Text::New3();
    temp3_Value_inst = ::g::SeyCode_FuseControlsText_Value_Property::New1(temp3, MainView::__selector1());
    ::g::TView* temp4 = ::g::TView::New4();
    temp4_Value_inst = ::g::SeyCode_TView_Value_Property::New1(temp4, MainView::__selector1());
    ::g::TView* temp5 = ::g::TView::New4();
    temp5_Value_inst = ::g::SeyCode_TView_Value_Property::New1(temp5, MainView::__selector1());
    ::g::TInput* temp6 = ::g::TInput::New4();
    temp6_Value_inst = ::g::SeyCode_TInput_Value_Property::New1(temp6, MainView::__selector1());
    ::g::TInput* temp7 = ::g::TInput::New4();
    temp7_Value_inst = ::g::SeyCode_TInput_Value_Property::New1(temp7, MainView::__selector1());
    ::g::Fuse::Controls::Text* temp8 = ::g::Fuse::Controls::Text::New3();
    temp8_Value_inst = ::g::SeyCode_FuseControlsText_Value_Property::New1(temp8, MainView::__selector1());
    ::g::TView* temp9 = ::g::TView::New4();
    temp9_Value_inst = ::g::SeyCode_TView_Value_Property::New1(temp9, MainView::__selector1());
    ::g::TView* temp10 = ::g::TView::New4();
    temp10_Value_inst = ::g::SeyCode_TView_Value_Property::New1(temp10, MainView::__selector1());
    navigation = ::g::Fuse::Controls::PageControl::New4();
    navigation_Active_inst = ::g::SeyCode_FuseControlsPageControl_Active_Property::New1(navigation, MainView::__selector2());
    ::g::Fuse::Controls::Panel* temp22 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Reactive::JavaScript* temp23 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Reactive::JavaScript* temp24 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::DockPanel* temp25 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::StatusBarBackground* temp26 = ::g::Fuse::Controls::StatusBarBackground::New3();
    ::g::Fuse::Controls::BottomBarBackground* temp27 = ::g::Fuse::Controls::BottomBarBackground::New3();
    ::g::Fuse::iOS::StatusBarConfig* temp28 = ::g::Fuse::iOS::StatusBarConfig::New2();
    ::g::Header* temp29 = ::g::Header::New4();
    encrypt = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Navigation::WhileActive* temp30 = ::g::Fuse::Navigation::WhileActive::New2();
    ::g::Fuse::Triggers::Actions::Set* temp31 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[7/*Fuse.Triggers.Actions.Set<Fuse.Elements.Element>*/], tabbar_LayoutElement_inst);
    ::g::Fuse::Controls::ScrollView* temp32 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp33 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp34 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[8/*Fuse.Reactive.DataBinding<string>*/], temp_Value_inst, ::STRINGS[15/*"key1Encode"*/]);
    ::g::Fuse::Reactive::DataBinding* temp35 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[8/*Fuse.Reactive.DataBinding<string>*/], temp1_Value_inst, ::STRINGS[16/*"key2Encode"*/]);
    ::g::Fuse::Controls::Panel* temp36 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Reactive::DataBinding* temp37 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[9/*Fuse.Reactive.DataBinding<bool>*/], temp2_Value_inst, ::STRINGS[17/*"checkboxChe...*/]);
    ::g::Fuse::Controls::Text* temp38 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp39 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[8/*Fuse.Reactive.DataBinding<string>*/], temp3_Value_inst, ::STRINGS[18/*"encodeError"*/]);
    ::g::Fuse::Reactive::DataBinding* temp40 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[8/*Fuse.Reactive.DataBinding<string>*/], temp4_Value_inst, ::STRINGS[19/*"plainTextEn...*/]);
    ::g::Btn* temp41 = ::g::Btn::New4();
    temp_eb0 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[20/*"encode"*/]);
    ::g::Fuse::Reactive::DataBinding* temp42 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[8/*Fuse.Reactive.DataBinding<string>*/], temp5_Value_inst, ::STRINGS[21/*"encodedText"*/]);
    decrypt = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Navigation::WhileActive* temp43 = ::g::Fuse::Navigation::WhileActive::New2();
    ::g::Fuse::Triggers::Actions::Set* temp44 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[7/*Fuse.Triggers.Actions.Set<Fuse.Elements.Element>*/], tabbar_LayoutElement_inst);
    ::g::Fuse::Controls::ScrollView* temp45 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp46 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp47 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[8/*Fuse.Reactive.DataBinding<string>*/], temp6_Value_inst, ::STRINGS[22/*"key1Decode"*/]);
    ::g::Fuse::Reactive::DataBinding* temp48 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[8/*Fuse.Reactive.DataBinding<string>*/], temp7_Value_inst, ::STRINGS[23/*"key2Decode"*/]);
    ::g::Fuse::Reactive::DataBinding* temp49 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[8/*Fuse.Reactive.DataBinding<string>*/], temp8_Value_inst, ::STRINGS[24/*"decodeError"*/]);
    ::g::Fuse::Reactive::DataBinding* temp50 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[8/*Fuse.Reactive.DataBinding<string>*/], temp9_Value_inst, ::STRINGS[25/*"plainTextDe...*/]);
    ::g::Btn* temp51 = ::g::Btn::New4();
    temp_eb1 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[26/*"decode"*/]);
    ::g::Fuse::Reactive::DataBinding* temp52 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[8/*Fuse.Reactive.DataBinding<string>*/], temp10_Value_inst, ::STRINGS[27/*"decodedText"*/]);
    ::g::Fuse::Controls::Rectangle* temp53 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Layouts::GridLayout* temp54 = ::g::Fuse::Layouts::GridLayout::New2();
    encryptTab = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Placeholder* temp55 = ::g::Fuse::Controls::Placeholder::New3();
    indicator = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Triggers::LayoutAnimation* temp56 = ::g::Fuse::Triggers::LayoutAnimation::New2();
    ::g::Fuse::Animations::Move* temp57 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp58 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.1529412f, 0.682353f, 0.3764706f, 1.0f));
    ::g::Tab* temp59 = ::g::Tab::New4();
    ::g::Fuse::Gestures::Clicked* temp60 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp61 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[10/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], navigation_Active_inst);
    decryptTab = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Placeholder* temp62 = ::g::Fuse::Controls::Placeholder::New3();
    ::g::Tab* temp63 = ::g::Tab::New4();
    ::g::Fuse::Gestures::Clicked* temp64 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp65 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[10/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], navigation_Active_inst);
    ::g::Fuse::Drawing::StaticSolidColor* temp66 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.7411765f, 0.7647059f, 0.7803922f, 1.0f));
    Background(::g::Uno::Float4__New2(0.9333333f, 0.9333333f, 0.9333333f, 1.0f));
    temp23->LineNumber(20);
    temp23->FileName(::STRINGS[28/*"MainView.ux"*/]);
    temp23->File(::g::Uno::UX::BundleFileSource::New1(::g::SeyCode_bundle::md5c1116da5()));
    temp24->LineNumber(21);
    temp24->FileName(::STRINGS[28/*"MainView.ux"*/]);
    temp24->File(::g::Uno::UX::BundleFileSource::New1(::g::SeyCode_bundle::main2c0fd58a()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp25->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp26);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp25->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp27);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp25->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp28);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp25->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp29);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp25->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), navigation);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp25->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp53);
    ::g::Fuse::Controls::DockPanel::SetDock(temp26, 2);
    ::g::Fuse::Controls::DockPanel::SetDock(temp27, 3);
    temp28->Style(1);
    ::g::Fuse::Controls::DockPanel::SetDock(temp29, 2);
    uPtr(navigation)->Name(MainView::__selector3());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navigation)->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), encrypt);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navigation)->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), decrypt);
    uPtr(encrypt)->Name(MainView::__selector4());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(encrypt)->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp30);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(encrypt)->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp32);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp31);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp31, encryptTab);
    temp32->Padding(::g::Uno::Float4__New2(15.0f, 25.0f, 15.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp33);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp33->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp33->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp33->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp36);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp33->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp33->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp41);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp33->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    temp->PlaceholderText(::STRINGS[29/*"Key 1 (will...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp34);
    temp1->PlaceholderText(::STRINGS[30/*"Key 2 (will...*/]);
    temp1->Margin(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp35);
    temp36->Margin(::g::Uno::Float4__New2(0.0f, 15.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp38);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    temp2->Alignment(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp37);
    temp38->Value(::STRINGS[31/*"Hash Key 2"*/]);
    temp38->Margin(::g::Uno::Float4__New2(30.0f, 2.0f, 0.0f, 0.0f));
    temp38->Font(MainView::Light());
    temp3->Color(::g::Uno::Float4__New2(0.7529412f, 0.2235294f, 0.1686275f, 1.0f));
    temp3->Alignment(3);
    temp3->Margin(::g::Uno::Float4__New2(0.0f, 2.0f, 0.0f, 0.0f));
    temp3->Font(MainView::Light());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp39);
    temp4->TextWrapping(1);
    temp4->TextAlignment(1);
    temp4->PlaceholderText(::STRINGS[32/*"Your Text"*/]);
    temp4->MinHeight(::g::Uno::UX::Size__New1(170.0f, 1));
    temp4->Margin(::g::Uno::Float4__New2(0.0f, 12.0f, 0.0f, 0.0f));
    temp4->Padding(::g::Uno::Float4__New2(4.0f, 4.0f, 4.0f, 4.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp40);
    temp41->Margin(::g::Uno::Float4__New2(0.0f, 15.0f, 0.0f, 0.0f));
    temp41->Text(::STRINGS[33/*"Encrypt"*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp41, uDelegate::New(::TYPES[19/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb0)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Bindings()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb0);
    temp5->TextWrapping(1);
    temp5->TextAlignment(1);
    temp5->PlaceholderText(::STRINGS[34/*"Encrypted T...*/]);
    temp5->MinHeight(::g::Uno::UX::Size__New1(120.0f, 1));
    temp5->Margin(::g::Uno::Float4__New2(0.0f, 15.0f, 0.0f, 0.0f));
    temp5->Padding(::g::Uno::Float4__New2(4.0f, 4.0f, 4.0f, 4.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Bindings()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp42);
    uPtr(decrypt)->Name(MainView::__selector5());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(decrypt)->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp43);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(decrypt)->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp45);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp43->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp44);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp44, decryptTab);
    temp45->Padding(::g::Uno::Float4__New2(15.0f, 25.0f, 15.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp45->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp46);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp46->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp46->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp46->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp46->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp46->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp51);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp46->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    temp6->PlaceholderText(::STRINGS[29/*"Key 1 (will...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Bindings()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp47);
    temp7->PlaceholderText(::STRINGS[30/*"Key 2 (will...*/]);
    temp7->Margin(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Bindings()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp48);
    temp8->Color(::g::Uno::Float4__New2(0.7529412f, 0.2235294f, 0.1686275f, 1.0f));
    temp8->Alignment(10);
    temp8->Margin(::g::Uno::Float4__New2(0.0f, 15.0f, 0.0f, 0.0f));
    temp8->Font(MainView::Light());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Bindings()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp49);
    temp9->TextWrapping(1);
    temp9->TextAlignment(1);
    temp9->PlaceholderText(::STRINGS[34/*"Encrypted T...*/]);
    temp9->MinHeight(::g::Uno::UX::Size__New1(170.0f, 1));
    temp9->Margin(::g::Uno::Float4__New2(0.0f, 12.0f, 0.0f, 0.0f));
    temp9->Padding(::g::Uno::Float4__New2(4.0f, 4.0f, 4.0f, 4.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Bindings()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp50);
    temp51->Margin(::g::Uno::Float4__New2(0.0f, 15.0f, 0.0f, 0.0f));
    temp51->Text(::STRINGS[35/*"Decrypt"*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp51, uDelegate::New(::TYPES[19/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb1)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp51->Bindings()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb1);
    temp10->TextWrapping(1);
    temp10->TextAlignment(1);
    temp10->PlaceholderText(::STRINGS[36/*"Plain Text"*/]);
    temp10->MinHeight(::g::Uno::UX::Size__New1(120.0f, 1));
    temp10->Margin(::g::Uno::Float4__New2(0.0f, 15.0f, 0.0f, 0.0f));
    temp10->Padding(::g::Uno::Float4__New2(4.0f, 4.0f, 4.0f, 4.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Bindings()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp52);
    temp53->Height(::g::Uno::UX::Size__New1(64.0f, 1));
    ::g::Fuse::Controls::DockPanel::SetDock(temp53, 3);
    temp53->Background(temp66);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp53->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), tabbar);
    uPtr(tabbar)->Name(MainView::__selector6());
    uPtr(tabbar)->Layout(temp54);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(tabbar)->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), encryptTab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(tabbar)->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), decryptTab);
    temp54->Rows(::STRINGS[37/*"1*"*/]);
    temp54->ColumnCount(2);
    uPtr(encryptTab)->Name(MainView::__selector7());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(encryptTab)->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp55);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(encryptTab)->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp59);
    temp55->PlaceholderContent(indicator);
    uPtr(indicator)->Height(::g::Uno::UX::Size__New1(4.0f, 1));
    uPtr(indicator)->Alignment(4);
    uPtr(indicator)->Name(MainView::__selector8());
    uPtr(indicator)->Fill(temp58);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(indicator)->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp56);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Animators()), ::TYPES[22/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp57);
    temp57->X(1.0f);
    temp57->Easing(25);
    temp57->Duration(0.3);
    temp57->RelativeTo(::g::Fuse::Triggers::LayoutTransition::PositionLayoutChange());
    temp59->Icon(::STRINGS[38/*"\uF023"*/]);
    temp59->Text(::STRINGS[33/*"Encrypt"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp59->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp60);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp60->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp61);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp61, encrypt);
    uPtr(decryptTab)->Name(MainView::__selector9());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(decryptTab)->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp62);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(decryptTab)->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp63);
    temp62->Target(indicator);
    temp63->Icon(::STRINGS[39/*"\uF09C"*/]);
    temp63->Text(::STRINGS[35/*"Decrypt"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp63->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp64);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp64->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp65);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp65, decrypt);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[24/*Uno.Collections.ICollection<object>*/]), navigation);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[24/*Uno.Collections.ICollection<object>*/]), encrypt);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[24/*Uno.Collections.ICollection<object>*/]), decrypt);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[24/*Uno.Collections.ICollection<object>*/]), tabbar);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[24/*Uno.Collections.ICollection<object>*/]), encryptTab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[24/*Uno.Collections.ICollection<object>*/]), indicator);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[24/*Uno.Collections.ICollection<object>*/]), decryptTab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp24);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), temp25);
}

// public MainView New() [static] :55
MainView* MainView::New1()
{
    MainView* obj1 = (MainView*)uNew(MainView_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

} // ::g
