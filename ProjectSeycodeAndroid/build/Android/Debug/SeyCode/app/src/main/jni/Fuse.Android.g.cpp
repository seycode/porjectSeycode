// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseControlsNative_bundle.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Fuse.Android.AppRoot.AppRootParent.h>
#include <Fuse.Android.AppRoot.h>
#include <Fuse.Android.Bitmap.h>
#include <Fuse.Android.Blitter.h>
#include <Fuse.Android.Canvas.h>
#include <Fuse.Android.GLUtils.h>
#include <Fuse.Android.Helpers.h>
#include <Fuse.Android.StaticLayout.Alignment.h>
#include <Fuse.Android.StaticLayout.h>
#include <Fuse.Android.StatusBarConfig.h>
#include <Fuse.Android.TextControlLayout.h>
#include <Fuse.Android.TextPaint.h>
#include <Fuse.Android.TextRenderer.BackgroundRender.h>
#include <Fuse.Android.TextRenderer.h>
#include <Fuse.Android.TextUtils.h>
#include <Fuse.Android.TextUtils.TruncateAt.h>
#include <Fuse.App.h>
#include <Fuse.Controls.GraphicsView.h>
#include <Fuse.Controls.Native.Android.InputDispatch.h>
#include <Fuse.Controls.Native.Android.IViewParent.h>
#include <Fuse.Controls.Native.Android.MotionEvent.h>
#include <Fuse.Controls.Native.Android.Typeface.h>
#include <Fuse.Controls.Native.Android.TypefaceCache.h>
#include <Fuse.Controls.Native.Android.View.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextTruncation.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.DrawContext.h>
#include <Fuse.Font.h>
#include <Fuse.GraphicsWorker.h>
#include <Fuse.IViewport.h>
#include <Fuse.LayoutParams.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.Visual.h>
#include <Java.Object.h>
#include <jni.h>
#include <OpenGL.GL.h>
#include <OpenGL.GLTextureHandle.h>
#include <OpenGL.GLTextureTarget.h>
#include <Uno.Action.h>
#include <Uno.Action-2.h>
#include <Uno.Application.h>
#include <Uno.ArgumentOutOfRangeException.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Byte.h>
#include <Uno.Byte4.h>
#include <Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaUnoObject.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Graphics.BlendOperand.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.Format.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Graphics.VertexAttributeType.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.Platform.ViewNativeHandle.h>
#include <Uno.Platform2.Application.h>
#include <Uno.Rect.h>
#include <Uno.Recti.h>
#include <Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <Uno.String.h>
#include <Uno.ULong.h>
#include <Uno/JNIHelper.h>
static uString* STRINGS[4];
static uType* TYPES[12];

namespace g{
namespace Fuse{
namespace Android{

// /usr/local/share/uno/Packages/Fuse.Android/0.32.14/Internal/$.uno
// -----------------------------------------------------------------

// public enum StaticLayout.Alignment :168
uEnumType* StaticLayout__Alignment_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Android.StaticLayout.Alignment", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Center", 0LL,
        "Normal", 1LL,
        "Opposite", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Android/0.32.14/$.uno
// --------------------------------------------------------

// internal static extern class AppRoot :695
// {
// static AppRoot() :718
static void AppRoot__cctor__fn(uType* __type)
{
    AppRoot::_rootContainer_ = AppRoot::CreateRootView();
    AppRoot::_rootParent_ = AppRoot__AppRootParent::New1(uDelegate::New(::TYPES[0/*Uno.Action<Fuse.Controls.Native.Android.View, float2>*/], (void*)AppRoot__SetChildSize_fn));
    AppRoot::SetAppRoot(AppRoot::_rootContainer_);
}

static void AppRoot_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Cannot set rootview to: ");
    ::STRINGS[1] = uString::Const(", already set to: ");
    ::TYPES[0] = ::g::Uno::Action2_typeof()->MakeType(::g::Fuse::Controls::Native::Android::View_typeof(), ::g::Uno::Float2_typeof());
    ::TYPES[1] = ::g::Fuse::App_typeof();
    ::TYPES[2] = ::g::Fuse::Visual_typeof();
    ::TYPES[3] = uObject_typeof();
    ::TYPES[4] = ::g::Fuse::Controls::Native::Android::IViewParent_typeof();
    ::TYPES[5] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    type->SetFields(0,
        ::g::Java::Object_typeof(), (uintptr_t)&::g::Fuse::Android::AppRoot::_root_, uFieldFlagsStatic,
        ::g::Java::Object_typeof(), (uintptr_t)&::g::Fuse::Android::AppRoot::_rootContainer_, uFieldFlagsStatic,
        AppRoot__AppRootParent_typeof(), (uintptr_t)&::g::Fuse::Android::AppRoot::_rootParent_, uFieldFlagsStatic);
}

uClassType* AppRoot_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Android.AppRoot", options);
    type->fp_build_ = AppRoot_build;
    type->fp_cctor_ = AppRoot__cctor__fn;
    return type;
}

// private static Java.Object CreateRootView() :783
void AppRoot__CreateRootView_fn(::g::Java::Object** __retval)
{
    *__retval = AppRoot::CreateRootView();
}

// private static void OnTouchEvent__(Java.Object motionEvent) :764
void AppRoot__OnTouchEvent___fn(::g::Java::Object* motionEvent)
{
    AppRoot::OnTouchEvent__(motionEvent);
}

// public static void Set(Fuse.Controls.Native.Android.View view) :737
void AppRoot__Set_fn(::g::Fuse::Controls::Native::Android::View* view)
{
    AppRoot::Set(view);
}

// private static void SetAppRoot(Java.Object rootView) :756
void AppRoot__SetAppRoot_fn(::g::Java::Object* rootView)
{
    AppRoot::SetAppRoot(rootView);
}

// private static void SetChildSize(Fuse.Controls.Native.Android.View view, float2 size) :725
void AppRoot__SetChildSize_fn(::g::Fuse::Controls::Native::Android::View* view, ::g::Uno::Float2* size)
{
    AppRoot::SetChildSize(view, *size);
}

// private static void SetChildSize(Java.Object handle, int w, int h) :731
void AppRoot__SetChildSize1_fn(::g::Java::Object* handle, int* w, int* h)
{
    AppRoot::SetChildSize1(handle, *w, *h);
}

// private static void SetRootView(Java.Object handle, Java.Object rootHandle) :771
void AppRoot__SetRootView_fn(::g::Java::Object* handle, ::g::Java::Object* rootHandle)
{
    AppRoot::SetRootView(handle, rootHandle);
}

uSStrong< ::g::Java::Object*> AppRoot::_root_;
uSStrong< ::g::Java::Object*> AppRoot::_rootContainer_;
uSStrong<AppRoot__AppRootParent*> AppRoot::_rootParent_;

// private static Java.Object CreateRootView() [static] :783
::g::Java::Object* AppRoot::CreateRootView()
{
    AppRoot_typeof()->Init();
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CreateRootView194", "()Ljava/lang/Object;");
        jobject __jresult = _jni->CallStaticObjectMethod(__cls, __mtd);
        uObject* __result;
        NEW_UNO(__jresult,__result,::g::Android::Base::Wrappers::JWrapper_typeof(),::g::Android::Base::Wrappers::JWrapper*,false,false);
        ::g::Android::Base::JNI::CheckException();
        return (::g::Java::Object*)__result;
    }
    
}

// private static void OnTouchEvent__(Java.Object motionEvent) [static] :764
void AppRoot::OnTouchEvent__(::g::Java::Object* motionEvent)
{
    AppRoot_typeof()->Init();
    ::g::Fuse::Controls::GraphicsView* root = uPtr(uCast< ::g::Fuse::App*>(::g::Uno::Application::Current(), ::TYPES[1/*Fuse.App*/]))->RootGraphicsView();
    ::g::Fuse::Controls::Native::Android::InputDispatch::RaiseEvent(root, AppRoot::_rootContainer(), ::g::Fuse::Controls::Native::Android::MotionEvent::New1(motionEvent));
}

// public static void Set(Fuse.Controls.Native.Android.View view) [static] :737
void AppRoot::Set(::g::Fuse::Controls::Native::Android::View* view)
{
    AppRoot_typeof()->Init();

    if (AppRoot::_root() != NULL)
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[0/*"Cannot set ...*/], view), ::STRINGS[1/*", already s...*/]), AppRoot::_root())));

    uPtr(view)->Parent((uObject*)AppRoot::_rootParent());
    AppRoot::_root() = view->Handle();
    AppRoot::SetRootView(AppRoot::_rootContainer(), AppRoot::_root());
}

// private static void SetAppRoot(Java.Object rootView) [static] :756
void AppRoot::SetAppRoot(::g::Java::Object* rootView)
{
    AppRoot_typeof()->Init();
    ::g::Uno::Platform2::Application::RootView((uPlatform2::ViewNativeHandle)uPtr(uCast< ::g::Android::Base::Wrappers::JWrapper*>(rootView, ::TYPES[5/*Android.Base.Wrappers.JWrapper*/]))->_GetJavaObject());
}

// private static void SetChildSize(Fuse.Controls.Native.Android.View view, float2 size) [static] :725
void AppRoot::SetChildSize(::g::Fuse::Controls::Native::Android::View* view, ::g::Uno::Float2 size)
{
    AppRoot_typeof()->Init();
    AppRoot::SetChildSize1(uPtr(view)->Handle(), (int)size.X, (int)size.Y);
}

// private static void SetChildSize(Java.Object handle, int w, int h) [static] :731
void AppRoot::SetChildSize1(::g::Java::Object* handle, int w, int h)
{
    AppRoot_typeof()->Init();
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetChildSize1196", "(Ljava/lang/Object;II)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(jint)w,(jint)h);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetRootView(Java.Object handle, Java.Object rootHandle) [static] :771
void AppRoot::SetRootView(::g::Java::Object* handle, ::g::Java::Object* rootHandle)
{
    AppRoot_typeof()->Init();
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetRootView197", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(rootHandle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)rootHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Android/0.32.14/$.uno
// --------------------------------------------------------

// private sealed class AppRoot.AppRootParent :698
// {
static void AppRoot__AppRootParent_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::Android::IViewParent_typeof(), offsetof(AppRoot__AppRootParent_type, interface0));
    type->SetFields(0,
        ::g::Uno::Action2_typeof()->MakeType(::g::Fuse::Controls::Native::Android::View_typeof(), ::g::Uno::Float2_typeof()), offsetof(::g::Fuse::Android::AppRoot__AppRootParent, _setChildSize), 0);
}

AppRoot__AppRootParent_type* AppRoot__AppRootParent_typeof()
{
    static uSStrong<AppRoot__AppRootParent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(AppRoot__AppRootParent);
    options.TypeSize = sizeof(AppRoot__AppRootParent_type);
    type = (AppRoot__AppRootParent_type*)uClassType::New("Fuse.Android.AppRoot.AppRootParent", options);
    type->fp_build_ = AppRoot__AppRootParent_build;
    type->interface0.fp_SetChildSize = (void(*)(uObject*, ::g::Fuse::Controls::Native::Android::View*, ::g::Uno::Float2*))AppRoot__AppRootParent__FuseControlsNativeAndroidIViewParentSetChildSize_fn;
    return type;
}

// public AppRootParent(Uno.Action<Fuse.Controls.Native.Android.View, float2> setChildSize) :703
void AppRoot__AppRootParent__ctor__fn(AppRoot__AppRootParent* __this, uDelegate* setChildSize)
{
    __this->ctor_(setChildSize);
}

// private void Fuse.Controls.Native.Android.IViewParent.SetChildSize(Fuse.Controls.Native.Android.View view, float2 size) :708
void AppRoot__AppRootParent__FuseControlsNativeAndroidIViewParentSetChildSize_fn(AppRoot__AppRootParent* __this, ::g::Fuse::Controls::Native::Android::View* view, ::g::Uno::Float2* size)
{
    ::g::Uno::Float2 size_ = *size;
    uPtr(__this->_setChildSize)->Invoke(2, view, uCRef(size_));
}

// public AppRootParent New(Uno.Action<Fuse.Controls.Native.Android.View, float2> setChildSize) :703
void AppRoot__AppRootParent__New1_fn(uDelegate* setChildSize, AppRoot__AppRootParent** __retval)
{
    *__retval = AppRoot__AppRootParent::New1(setChildSize);
}

// public AppRootParent(Uno.Action<Fuse.Controls.Native.Android.View, float2> setChildSize) [instance] :703
void AppRoot__AppRootParent::ctor_(uDelegate* setChildSize)
{
    _setChildSize = setChildSize;
}

// public AppRootParent New(Uno.Action<Fuse.Controls.Native.Android.View, float2> setChildSize) [static] :703
AppRoot__AppRootParent* AppRoot__AppRootParent::New1(uDelegate* setChildSize)
{
    AppRoot__AppRootParent* obj1 = (AppRoot__AppRootParent*)uNew(AppRoot__AppRootParent_typeof());
    obj1->ctor_(setChildSize);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Android/0.32.14/$.uno
// --------------------------------------------------------

// private sealed class TextRenderer.BackgroundRender :437
// {
static void TextRenderer__BackgroundRender_build(uType* type)
{
    ::TYPES[6] = ::g::Uno::Action_typeof();
    type->SetFields(0,
        ::g::Fuse::Android::StaticLayout_typeof(), offsetof(::g::Fuse::Android::TextRenderer__BackgroundRender, _layout), 0,
        ::g::Uno::Recti_typeof(), offsetof(::g::Fuse::Android::TextRenderer__BackgroundRender, _pixelBounds), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Android::TextRenderer__BackgroundRender, _renderColor), 0,
        ::g::OpenGL::GLTextureHandle_typeof(), offsetof(::g::Fuse::Android::TextRenderer__BackgroundRender, _result), 0,
        ::g::Fuse::Android::TextRenderer_typeof(), offsetof(::g::Fuse::Android::TextRenderer__BackgroundRender, _textRenderer), 0,
        ::g::Uno::ULong_typeof(), offsetof(::g::Fuse::Android::TextRenderer__BackgroundRender, _textureVersion), 0);
}

uType* TextRenderer__BackgroundRender_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(TextRenderer__BackgroundRender);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Android.TextRenderer.BackgroundRender", options);
    type->fp_build_ = TextRenderer__BackgroundRender_build;
    return type;
}

// public BackgroundRender(Fuse.Android.TextRenderer textRenderer, ulong textureVersion, Fuse.Android.StaticLayout layout, float4 renderColor, Uno.Recti pixelBounds) :446
void TextRenderer__BackgroundRender__ctor__fn(TextRenderer__BackgroundRender* __this, ::g::Fuse::Android::TextRenderer* textRenderer, uint64_t* textureVersion, ::g::Fuse::Android::StaticLayout* layout, ::g::Uno::Float4* renderColor, ::g::Uno::Recti* pixelBounds)
{
    __this->ctor_(textRenderer, *textureVersion, layout, *renderColor, *pixelBounds);
}

// private void DoneCallback() :461
void TextRenderer__BackgroundRender__DoneCallback_fn(TextRenderer__BackgroundRender* __this)
{
    __this->DoneCallback();
}

// public BackgroundRender New(Fuse.Android.TextRenderer textRenderer, ulong textureVersion, Fuse.Android.StaticLayout layout, float4 renderColor, Uno.Recti pixelBounds) :446
void TextRenderer__BackgroundRender__New1_fn(::g::Fuse::Android::TextRenderer* textRenderer, uint64_t* textureVersion, ::g::Fuse::Android::StaticLayout* layout, ::g::Uno::Float4* renderColor, ::g::Uno::Recti* pixelBounds, TextRenderer__BackgroundRender** __retval)
{
    *__retval = TextRenderer__BackgroundRender::New1(textRenderer, *textureVersion, layout, *renderColor, *pixelBounds);
}

// public void UpdateTextureAsync() :455
void TextRenderer__BackgroundRender__UpdateTextureAsync_fn(TextRenderer__BackgroundRender* __this)
{
    __this->UpdateTextureAsync();
}

// public BackgroundRender(Fuse.Android.TextRenderer textRenderer, ulong textureVersion, Fuse.Android.StaticLayout layout, float4 renderColor, Uno.Recti pixelBounds) [instance] :446
void TextRenderer__BackgroundRender::ctor_(::g::Fuse::Android::TextRenderer* textRenderer, uint64_t textureVersion, ::g::Fuse::Android::StaticLayout* layout, ::g::Uno::Float4 renderColor, ::g::Uno::Recti pixelBounds)
{
    _textRenderer = textRenderer;
    _textureVersion = textureVersion;
    _layout = layout;
    _renderColor = renderColor;
    _pixelBounds = pixelBounds;
}

// private void DoneCallback() [instance] :461
void TextRenderer__BackgroundRender::DoneCallback()
{
    if (_textureVersion == uPtr(_textRenderer)->_wantedVersion)
    {
        uPtr(_textRenderer)->SetTexture(_result);
        uPtr(_textRenderer)->_textureVersion = _textureVersion;
    }
    else
        ::g::OpenGL::GL::DeleteTexture(_result);
}

// public void UpdateTextureAsync() [instance] :455
void TextRenderer__BackgroundRender::UpdateTextureAsync()
{
    _result = uPtr(_textRenderer)->UpdateTexture(_layout, _renderColor, _pixelBounds);
    ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[6/*Uno.Action*/], (void*)TextRenderer__BackgroundRender__DoneCallback_fn, this));
}

// public BackgroundRender New(Fuse.Android.TextRenderer textRenderer, ulong textureVersion, Fuse.Android.StaticLayout layout, float4 renderColor, Uno.Recti pixelBounds) [static] :446
TextRenderer__BackgroundRender* TextRenderer__BackgroundRender::New1(::g::Fuse::Android::TextRenderer* textRenderer, uint64_t textureVersion, ::g::Fuse::Android::StaticLayout* layout, ::g::Uno::Float4 renderColor, ::g::Uno::Recti pixelBounds)
{
    TextRenderer__BackgroundRender* obj1 = (TextRenderer__BackgroundRender*)uNew(TextRenderer__BackgroundRender_typeof());
    obj1->ctor_(textRenderer, textureVersion, layout, renderColor, pixelBounds);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Android/0.32.14/Internal/$.uno
// -----------------------------------------------------------------

// internal sealed extern class Bitmap :14
// {
static void Bitmap_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Bitmap_type, interface0));
    type->SetFields(0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Android::Bitmap, _handle), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Android::Bitmap, _isDisposed), 0);
}

Bitmap_type* Bitmap_typeof()
{
    static uSStrong<Bitmap_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Bitmap);
    options.TypeSize = sizeof(Bitmap_type);
    type = (Bitmap_type*)uClassType::New("Fuse.Android.Bitmap", options);
    type->fp_build_ = Bitmap_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))Bitmap__Dispose_fn;
    return type;
}

// public Bitmap(Java.Object handle) :23
void Bitmap__ctor__fn(Bitmap* __this, ::g::Java::Object* handle)
{
    __this->ctor_(handle);
}

// public static Fuse.Android.Bitmap CreateBitmapARGB8888(int width, int height) :33
void Bitmap__CreateBitmapARGB8888_fn(int* width, int* height, Bitmap** __retval)
{
    *__retval = Bitmap::CreateBitmapARGB8888(*width, *height);
}

// private static Java.Object CreateBitmapARGB8888Impl(int width, int height) :60
void Bitmap__CreateBitmapARGB8888Impl_fn(int* width, int* height, ::g::Java::Object** __retval)
{
    *__retval = Bitmap::CreateBitmapARGB8888Impl(*width, *height);
}

// public void Dispose() :44
void Bitmap__Dispose_fn(Bitmap* __this)
{
    __this->Dispose();
}

// public void EraseColor(float4 color) :28
void Bitmap__EraseColor_fn(Bitmap* __this, ::g::Uno::Float4* color)
{
    __this->EraseColor(*color);
}

// private static void EraseColor(Java.Object handle, int color) :66
void Bitmap__EraseColor1_fn(::g::Java::Object* handle, int* color)
{
    Bitmap::EraseColor1(handle, *color);
}

// public Java.Object get_Handle() :18
void Bitmap__get_Handle_fn(Bitmap* __this, ::g::Java::Object** __retval)
{
    *__retval = __this->Handle();
}

// public Bitmap New(Java.Object handle) :23
void Bitmap__New1_fn(::g::Java::Object* handle, Bitmap** __retval)
{
    *__retval = Bitmap::New1(handle);
}

// public void Recycle() :38
void Bitmap__Recycle_fn(Bitmap* __this)
{
    __this->Recycle();
}

// private static void Recycle(Java.Object handle) :54
void Bitmap__Recycle1_fn(::g::Java::Object* handle)
{
    Bitmap::Recycle1(handle);
}

// public Bitmap(Java.Object handle) [instance] :23
void Bitmap::ctor_(::g::Java::Object* handle)
{
    _handle = handle;
}

// public void Dispose() [instance] :44
void Bitmap::Dispose()
{
    if (!_isDisposed)
    {
        Recycle();
        _isDisposed = true;
    }
}

// public void EraseColor(float4 color) [instance] :28
void Bitmap::EraseColor(::g::Uno::Float4 color)
{
    Bitmap::EraseColor1(Handle(), ::g::Fuse::Android::Helpers::EncodeColor(color));
}

// public Java.Object get_Handle() [instance] :18
::g::Java::Object* Bitmap::Handle()
{
    return _handle;
}

// public void Recycle() [instance] :38
void Bitmap::Recycle()
{
    Bitmap::Recycle1(Handle());
}

// public static Fuse.Android.Bitmap CreateBitmapARGB8888(int width, int height) [static] :33
Bitmap* Bitmap::CreateBitmapARGB8888(int width, int height)
{
    return Bitmap::New1(Bitmap::CreateBitmapARGB8888Impl(width, height));
}

// private static Java.Object CreateBitmapARGB8888Impl(int width, int height) [static] :60
::g::Java::Object* Bitmap::CreateBitmapARGB8888Impl(int width, int height)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CreateBitmapARGB8888Impl198", "(II)Ljava/lang/Object;");
        jobject __jresult = _jni->CallStaticObjectMethod(__cls, __mtd,(jint)width,(jint)height);
        uObject* __result;
        NEW_UNO(__jresult,__result,::g::Android::Base::Wrappers::JWrapper_typeof(),::g::Android::Base::Wrappers::JWrapper*,false,false);
        ::g::Android::Base::JNI::CheckException();
        return (::g::Java::Object*)__result;
    }
    
}

// private static void EraseColor(Java.Object handle, int color) [static] :66
void Bitmap::EraseColor1(::g::Java::Object* handle, int color)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "EraseColor1199", "(Ljava/lang/Object;I)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(jint)color);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public Bitmap New(Java.Object handle) [static] :23
Bitmap* Bitmap::New1(::g::Java::Object* handle)
{
    Bitmap* obj1 = (Bitmap*)uNew(Bitmap_typeof());
    obj1->ctor_(handle);
    return obj1;
}

// private static void Recycle(Java.Object handle) [static] :54
void Bitmap::Recycle1(::g::Java::Object* handle)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Recycle1200", "(Ljava/lang/Object;)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Android/0.32.14/$.uno
// --------------------------------------------------------

// internal sealed class Blitter :508
// {
// static Blitter() :508
static void Blitter__cctor__fn(uType* __type)
{
    Blitter::Singleton_ = Blitter::New1();
}

static void Blitter_build(uType* type)
{
    ::TYPES[7] = ::g::Uno::Float2_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Android::Blitter, _draw_3ffdfb2d), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Android::Blitter, Blit_v_3ffdfb2d_3_3_1), 0,
        ::g::Uno::Float2_typeof()->Array(), offsetof(::g::Fuse::Android::Blitter, Blit_verts_3ffdfb2d_3_2_5), 0,
        Blitter_typeof(), (uintptr_t)&::g::Fuse::Android::Blitter::Singleton_, uFieldFlagsStatic);
}

uType* Blitter_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Blitter);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Android.Blitter", options);
    type->fp_build_ = Blitter_build;
    type->fp_ctor_ = (void*)Blitter__New1_fn;
    type->fp_cctor_ = Blitter__cctor__fn;
    return type;
}

// public generated Blitter() :508
void Blitter__ctor__fn(Blitter* __this)
{
    __this->ctor_();
}

// public void Blit(texture2D vt, float2 pos, float2 size, float4x4 localToClipTransform) :512
void Blitter__Blit_fn(Blitter* __this, ::g::Uno::Graphics::Texture2D* vt, ::g::Uno::Float2* pos, ::g::Uno::Float2* size, ::g::Uno::Float4x4* localToClipTransform)
{
    __this->Blit(vt, *pos, *size, *localToClipTransform);
}

// private generated void init_DrawCalls() :508
void Blitter__init_DrawCalls_fn(Blitter* __this)
{
    __this->init_DrawCalls();
}

// public generated Blitter New() :508
void Blitter__New1_fn(Blitter** __retval)
{
    *__retval = Blitter::New1();
}

uSStrong<Blitter*> Blitter::Singleton_;

// public generated Blitter() [instance] :508
void Blitter::ctor_()
{
    init_DrawCalls();
}

// public void Blit(texture2D vt, float2 pos, float2 size, float4x4 localToClipTransform) [instance] :512
void Blitter::Blit(::g::Uno::Graphics::Texture2D* vt, ::g::Uno::Float2 pos, ::g::Uno::Float2 size, ::g::Uno::Float4x4 localToClipTransform)
{
    _draw_3ffdfb2d.BlendEnabled(true);
    _draw_3ffdfb2d.DepthTestEnabled(false);
    _draw_3ffdfb2d.CullFace(0);
    _draw_3ffdfb2d.BlendSrcAlpha(7);
    _draw_3ffdfb2d.BlendDstRgb(3);
    _draw_3ffdfb2d.Use();
    _draw_3ffdfb2d.Attrib1(0, 2, Blit_v_3ffdfb2d_3_3_1, 8, 0);
    _draw_3ffdfb2d.Uniform2(1, size);
    _draw_3ffdfb2d.Uniform2(2, pos);
    _draw_3ffdfb2d.Uniform12(3, localToClipTransform);
    _draw_3ffdfb2d.Sampler2(4, vt);
    _draw_3ffdfb2d.DrawArrays(uPtr(Blit_verts_3ffdfb2d_3_2_5)->Length());
}

// private generated void init_DrawCalls() [instance] :508
void Blitter::init_DrawCalls()
{
    uArray* verts_3ffdfb2d_3_2_0 = uArray::Init< ::g::Uno::Float2>(::TYPES[7/*float2[]*/], 6, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 1.0f));
    Blit_v_3ffdfb2d_3_3_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(verts_3ffdfb2d_3_2_0), 0);
    Blit_verts_3ffdfb2d_3_2_5 = verts_3ffdfb2d_3_2_0;
    _draw_3ffdfb2d = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseControlsNative_bundle::Blitter79a430a5());
}

// public generated Blitter New() [static] :508
Blitter* Blitter::New1()
{
    Blitter* obj1 = (Blitter*)uNew(Blitter_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Android/0.32.14/Internal/$.uno
// -----------------------------------------------------------------

// internal sealed extern class Canvas :88
// {
static void Canvas_build(uType* type)
{
    type->SetFields(0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Android::Canvas, _handle), 0);
}

uType* Canvas_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Canvas);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Android.Canvas", options);
    type->fp_build_ = Canvas_build;
    return type;
}

// public Canvas(Fuse.Android.Bitmap bitmap) :102
void Canvas__ctor__fn(Canvas* __this, ::g::Fuse::Android::Bitmap* bitmap)
{
    __this->ctor_(bitmap);
}

// public Canvas(Java.Object handle) :97
void Canvas__ctor_1_fn(Canvas* __this, ::g::Java::Object* handle)
{
    __this->ctor_1(handle);
}

// private static Java.Object Create(Java.Object bitmapHandle) :116
void Canvas__Create_fn(::g::Java::Object* bitmapHandle, ::g::Java::Object** __retval)
{
    *__retval = Canvas::Create(bitmapHandle);
}

// public Java.Object get_Handle() :92
void Canvas__get_Handle_fn(Canvas* __this, ::g::Java::Object** __retval)
{
    *__retval = __this->Handle();
}

// public Canvas New(Fuse.Android.Bitmap bitmap) :102
void Canvas__New1_fn(::g::Fuse::Android::Bitmap* bitmap, Canvas** __retval)
{
    *__retval = Canvas::New1(bitmap);
}

// public void Translate(float dx, float dy) :104
void Canvas__Translate_fn(Canvas* __this, float* dx, float* dy)
{
    __this->Translate(*dx, *dy);
}

// private static void Translate(Java.Object handle, float dx, float dy) :110
void Canvas__Translate1_fn(::g::Java::Object* handle, float* dx, float* dy)
{
    Canvas::Translate1(handle, *dx, *dy);
}

// public Canvas(Fuse.Android.Bitmap bitmap) [instance] :102
void Canvas::ctor_(::g::Fuse::Android::Bitmap* bitmap)
{
    ctor_1(Canvas::Create(uPtr(bitmap)->Handle()));
}

// public Canvas(Java.Object handle) [instance] :97
void Canvas::ctor_1(::g::Java::Object* handle)
{
    _handle = handle;
}

// public Java.Object get_Handle() [instance] :92
::g::Java::Object* Canvas::Handle()
{
    return _handle;
}

// public void Translate(float dx, float dy) [instance] :104
void Canvas::Translate(float dx, float dy)
{
    Canvas::Translate1(Handle(), dx, dy);
}

// private static Java.Object Create(Java.Object bitmapHandle) [static] :116
::g::Java::Object* Canvas::Create(::g::Java::Object* bitmapHandle)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create201", "(Ljava/lang/Object;)Ljava/lang/Object;");
        jobject __jresult = _jni->CallStaticObjectMethod(__cls, __mtd,(bitmapHandle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)bitmapHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        uObject* __result;
        NEW_UNO(__jresult,__result,::g::Android::Base::Wrappers::JWrapper_typeof(),::g::Android::Base::Wrappers::JWrapper*,false,false);
        ::g::Android::Base::JNI::CheckException();
        return (::g::Java::Object*)__result;
    }
    
}

// public Canvas New(Fuse.Android.Bitmap bitmap) [static] :102
Canvas* Canvas::New1(::g::Fuse::Android::Bitmap* bitmap)
{
    Canvas* obj2 = (Canvas*)uNew(Canvas_typeof());
    obj2->ctor_(bitmap);
    return obj2;
}

// private static void Translate(Java.Object handle, float dx, float dy) [static] :110
void Canvas::Translate1(::g::Java::Object* handle, float dx, float dy)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Translate1202", "(Ljava/lang/Object;FF)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(jfloat)dx,(jfloat)dy);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Android/0.32.14/Internal/$.uno
// -----------------------------------------------------------------

// internal sealed extern class GLUtils :137
// {
static void GLUtils_build(uType* type)
{
    ::TYPES[8] = ::g::Uno::Int_typeof();
}

uType* GLUtils_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(GLUtils);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Android.GLUtils", options);
    type->fp_build_ = GLUtils_build;
    return type;
}

// private static void TexImage2D(int target, int level, Java.Object bitmap, int border) :145
void GLUtils__TexImage2D_fn(int* target, int* level, ::g::Java::Object* bitmap, int* border)
{
    GLUtils::TexImage2D(*target, *level, bitmap, *border);
}

// public static void TexImage2D(OpenGL.GLTextureTarget target, int level, Fuse.Android.Bitmap bitmap, int border) :139
void GLUtils__TexImage2D1_fn(int* target, int* level, ::g::Fuse::Android::Bitmap* bitmap, int* border)
{
    GLUtils::TexImage2D1(*target, *level, bitmap, *border);
}

// private static void TexImage2D(int target, int level, Java.Object bitmap, int border) [static] :145
void GLUtils::TexImage2D(int target, int level, ::g::Java::Object* bitmap, int border)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "TexImage2D203", "(IILjava/lang/Object;I)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,(jint)target,(jint)level,(bitmap==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)bitmap, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(jint)border);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static void TexImage2D(OpenGL.GLTextureTarget target, int level, Fuse.Android.Bitmap bitmap, int border) [static] :139
void GLUtils::TexImage2D1(int target, int level, ::g::Fuse::Android::Bitmap* bitmap, int border)
{
    GLUtils::TexImage2D(target, level, uPtr(bitmap)->Handle(), border);
}
// }

// /usr/local/share/uno/Packages/Fuse.Android/0.32.14/$.uno
// --------------------------------------------------------

// internal static class Helpers :6
// {
static void Helpers_build(uType* type)
{
}

uClassType* Helpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Android.Helpers", options);
    type->fp_build_ = Helpers_build;
    return type;
}

// public static int EncodeColor(float4 c) :8
void Helpers__EncodeColor_fn(::g::Uno::Float4* c, int* __retval)
{
    *__retval = Helpers::EncodeColor(*c);
}

// public static int EncodeColor(float4 c) [static] :8
int Helpers::EncodeColor(::g::Uno::Float4 c)
{
    int r = ::g::Uno::Math::Clamp8((int)(c.X * 255.0f), 0, 255);
    int g = ::g::Uno::Math::Clamp8((int)(c.Y * 255.0f), 0, 255);
    int b = ::g::Uno::Math::Clamp8((int)(c.Z * 255.0f), 0, 255);
    int a = ::g::Uno::Math::Clamp8((int)(c.W * 255.0f), 0, 255);
    return (((a << 24) | (r << 16)) | (g << 8)) | b;
}
// }

// /usr/local/share/uno/Packages/Fuse.Android/0.32.14/Internal/$.uno
// -----------------------------------------------------------------

// internal sealed extern class StaticLayout :166
// {
static void StaticLayout_build(uType* type)
{
    ::STRINGS[2] = uString::Const("");
    ::TYPES[8] = ::g::Uno::Int_typeof();
    type->SetFields(0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Android::StaticLayout, _handle), 0);
}

uType* StaticLayout_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(StaticLayout);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Android.StaticLayout", options);
    type->fp_build_ = StaticLayout_build;
    return type;
}

// public StaticLayout(Java.Object handle) :182
void StaticLayout__ctor__fn(StaticLayout* __this, ::g::Java::Object* handle)
{
    __this->ctor_(handle);
}

// public StaticLayout(string text, Fuse.Android.TextPaint paint, int width, Fuse.Android.StaticLayout.Alignment align, float spacingMult, float spacingAdd, bool includePad) :187
void StaticLayout__ctor_1_fn(StaticLayout* __this, uString* text, ::g::Fuse::Android::TextPaint* paint, int* width, int* align, float* spacingMult, float* spacingAdd, bool* includePad)
{
    __this->ctor_1(text, paint, *width, *align, *spacingMult, *spacingAdd, *includePad);
}

// public StaticLayout(string text, int bufStart, int bufEnd, Fuse.Android.TextPaint paint, int outerWidth, Fuse.Android.StaticLayout.Alignment align, float spacingMult, float spacingAdd, bool includePad, Fuse.Android.TextUtils.TruncateAt truncateAt, int ellipsizedWith) :198
void StaticLayout__ctor_2_fn(StaticLayout* __this, uString* text, int* bufStart, int* bufEnd, ::g::Fuse::Android::TextPaint* paint, int* outerWidth, int* align, float* spacingMult, float* spacingAdd, bool* includePad, int* truncateAt, int* ellipsizedWith)
{
    __this->ctor_2(text, *bufStart, *bufEnd, paint, *outerWidth, *align, *spacingMult, *spacingAdd, *includePad, *truncateAt, *ellipsizedWith);
}

// private static Java.Object Create(string text, int bufStart, int bufEnd, Java.Object paintHandle, int outerWidth, int align, float spacingMult, float spacingAdd, bool includePad, int truncateAt, int ellipsizedWith) :345
void StaticLayout__Create_fn(uString* text, int* bufStart, int* bufEnd, ::g::Java::Object* paintHandle, int* outerWidth, int* align, float* spacingMult, float* spacingAdd, bool* includePad, int* truncateAt, int* ellipsizedWith, ::g::Java::Object** __retval)
{
    *__retval = StaticLayout::Create(text, *bufStart, *bufEnd, paintHandle, *outerWidth, *align, *spacingMult, *spacingAdd, *includePad, *truncateAt, *ellipsizedWith);
}

// private static Java.Object Create(string text, Java.Object paintHandle, int width, int align, float spacingMult, float spacingAdd, bool includePad) :325
void StaticLayout__Create1_fn(uString* text, ::g::Java::Object* paintHandle, int* width, int* align, float* spacingMult, float* spacingAdd, bool* includePad, ::g::Java::Object** __retval)
{
    *__retval = StaticLayout::Create1(text, paintHandle, *width, *align, *spacingMult, *spacingAdd, *includePad);
}

// public void Draw(Fuse.Android.Canvas canvas) :258
void StaticLayout__Draw_fn(StaticLayout* __this, ::g::Fuse::Android::Canvas* canvas)
{
    __this->Draw(canvas);
}

// private static void Draw(Java.Object layoutHandle, Java.Object canvasHandle) :264
void StaticLayout__Draw1_fn(::g::Java::Object* layoutHandle, ::g::Java::Object* canvasHandle)
{
    StaticLayout::Draw1(layoutHandle, canvasHandle);
}

// public int get_EllipsizedWidth() :225
void StaticLayout__get_EllipsizedWidth_fn(StaticLayout* __this, int* __retval)
{
    *__retval = __this->EllipsizedWidth();
}

// public static float GetDesiredWidth(string text, Fuse.Android.TextPaint paint) :213
void StaticLayout__GetDesiredWidth_fn(uString* text, ::g::Fuse::Android::TextPaint* paint, float* __retval)
{
    *__retval = StaticLayout::GetDesiredWidth(text, paint);
}

// private static float GetDesiredWidthImpl(string text, Java.Object paintHandle) :312
void StaticLayout__GetDesiredWidthImpl_fn(uString* text, ::g::Java::Object* paintHandle, float* __retval)
{
    *__retval = StaticLayout::GetDesiredWidthImpl(text, paintHandle);
}

// private static int GetEllipsizedWidth(Java.Object handle) :282
void StaticLayout__GetEllipsizedWidth_fn(::g::Java::Object* handle, int* __retval)
{
    *__retval = StaticLayout::GetEllipsizedWidth(handle);
}

// private static int GetHeight(Java.Object handle) :270
void StaticLayout__GetHeight_fn(::g::Java::Object* handle, int* __retval)
{
    *__retval = StaticLayout::GetHeight(handle);
}

// public int GetLineBaseline(int line) :253
void StaticLayout__GetLineBaseline_fn(StaticLayout* __this, int* line, int* __retval)
{
    *__retval = __this->GetLineBaseline(*line);
}

// private static int GetLineBaseline(Java.Object handle, int line) :288
void StaticLayout__GetLineBaseline1_fn(::g::Java::Object* handle, int* line, int* __retval)
{
    *__retval = StaticLayout::GetLineBaseline1(handle, *line);
}

// private static int GetLineCount(Java.Object handle) :319
void StaticLayout__GetLineCount_fn(::g::Java::Object* handle, int* __retval)
{
    *__retval = StaticLayout::GetLineCount(handle);
}

// public int GetLineEnd(int line) :243
void StaticLayout__GetLineEnd_fn(StaticLayout* __this, int* line, int* __retval)
{
    *__retval = __this->GetLineEnd(*line);
}

// private static int GetLineEnd(Java.Object handle, int line) :306
void StaticLayout__GetLineEnd1_fn(::g::Java::Object* handle, int* line, int* __retval)
{
    *__retval = StaticLayout::GetLineEnd1(handle, *line);
}

// public float GetLineLeft(int line) :248
void StaticLayout__GetLineLeft_fn(StaticLayout* __this, int* line, float* __retval)
{
    *__retval = __this->GetLineLeft(*line);
}

// private static float GetLineLeft(Java.Object handle, int line) :294
void StaticLayout__GetLineLeft1_fn(::g::Java::Object* handle, int* line, float* __retval)
{
    *__retval = StaticLayout::GetLineLeft1(handle, *line);
}

// public int GetLineStart(int line) :238
void StaticLayout__GetLineStart_fn(StaticLayout* __this, int* line, int* __retval)
{
    *__retval = __this->GetLineStart(*line);
}

// private static int GetLineStart(Java.Object handle, int line) :300
void StaticLayout__GetLineStart1_fn(::g::Java::Object* handle, int* line, int* __retval)
{
    *__retval = StaticLayout::GetLineStart1(handle, *line);
}

// public Java.Object get_Handle() :177
void StaticLayout__get_Handle_fn(StaticLayout* __this, ::g::Java::Object** __retval)
{
    *__retval = __this->Handle();
}

// public int get_Height() :230
void StaticLayout__get_Height_fn(StaticLayout* __this, int* __retval)
{
    *__retval = __this->Height();
}

// public int get_LineCount() :220
void StaticLayout__get_LineCount_fn(StaticLayout* __this, int* __retval)
{
    *__retval = __this->LineCount();
}

// public StaticLayout New(string text, Fuse.Android.TextPaint paint, int width, Fuse.Android.StaticLayout.Alignment align, float spacingMult, float spacingAdd, bool includePad) :187
void StaticLayout__New2_fn(uString* text, ::g::Fuse::Android::TextPaint* paint, int* width, int* align, float* spacingMult, float* spacingAdd, bool* includePad, StaticLayout** __retval)
{
    *__retval = StaticLayout::New2(text, paint, *width, *align, *spacingMult, *spacingAdd, *includePad);
}

// public StaticLayout New(string text, int bufStart, int bufEnd, Fuse.Android.TextPaint paint, int outerWidth, Fuse.Android.StaticLayout.Alignment align, float spacingMult, float spacingAdd, bool includePad, Fuse.Android.TextUtils.TruncateAt truncateAt, int ellipsizedWith) :198
void StaticLayout__New3_fn(uString* text, int* bufStart, int* bufEnd, ::g::Fuse::Android::TextPaint* paint, int* outerWidth, int* align, float* spacingMult, float* spacingAdd, bool* includePad, int* truncateAt, int* ellipsizedWith, StaticLayout** __retval)
{
    *__retval = StaticLayout::New3(text, *bufStart, *bufEnd, paint, *outerWidth, *align, *spacingMult, *spacingAdd, *includePad, *truncateAt, *ellipsizedWith);
}

// public StaticLayout(Java.Object handle) [instance] :182
void StaticLayout::ctor_(::g::Java::Object* handle)
{
    _handle = handle;
}

// public StaticLayout(string text, Fuse.Android.TextPaint paint, int width, Fuse.Android.StaticLayout.Alignment align, float spacingMult, float spacingAdd, bool includePad) [instance] :187
void StaticLayout::ctor_1(uString* text, ::g::Fuse::Android::TextPaint* paint, int width, int align, float spacingMult, float spacingAdd, bool includePad)
{
    ctor_(StaticLayout::Create1(text, uPtr(paint)->Handle(), width, align, spacingMult, spacingAdd, includePad));
}

// public StaticLayout(string text, int bufStart, int bufEnd, Fuse.Android.TextPaint paint, int outerWidth, Fuse.Android.StaticLayout.Alignment align, float spacingMult, float spacingAdd, bool includePad, Fuse.Android.TextUtils.TruncateAt truncateAt, int ellipsizedWith) [instance] :198
void StaticLayout::ctor_2(uString* text, int bufStart, int bufEnd, ::g::Fuse::Android::TextPaint* paint, int outerWidth, int align, float spacingMult, float spacingAdd, bool includePad, int truncateAt, int ellipsizedWith)
{
    ctor_(StaticLayout::Create(text, bufStart, bufEnd, uPtr(paint)->Handle(), outerWidth, align, spacingMult, spacingAdd, includePad, truncateAt, ellipsizedWith));
}

// public void Draw(Fuse.Android.Canvas canvas) [instance] :258
void StaticLayout::Draw(::g::Fuse::Android::Canvas* canvas)
{
    StaticLayout::Draw1(Handle(), uPtr(canvas)->Handle());
}

// public int get_EllipsizedWidth() [instance] :225
int StaticLayout::EllipsizedWidth()
{
    return StaticLayout::GetEllipsizedWidth(Handle());
}

// public int GetLineBaseline(int line) [instance] :253
int StaticLayout::GetLineBaseline(int line)
{
    return StaticLayout::GetLineBaseline1(Handle(), line);
}

// public int GetLineEnd(int line) [instance] :243
int StaticLayout::GetLineEnd(int line)
{
    return StaticLayout::GetLineEnd1(Handle(), line);
}

// public float GetLineLeft(int line) [instance] :248
float StaticLayout::GetLineLeft(int line)
{
    return StaticLayout::GetLineLeft1(Handle(), line);
}

// public int GetLineStart(int line) [instance] :238
int StaticLayout::GetLineStart(int line)
{
    return StaticLayout::GetLineStart1(Handle(), line);
}

// public Java.Object get_Handle() [instance] :177
::g::Java::Object* StaticLayout::Handle()
{
    return _handle;
}

// public int get_Height() [instance] :230
int StaticLayout::Height()
{
    return StaticLayout::GetHeight(Handle());
}

// public int get_LineCount() [instance] :220
int StaticLayout::LineCount()
{
    return StaticLayout::GetLineCount(Handle());
}

// private static Java.Object Create(string text, int bufStart, int bufEnd, Java.Object paintHandle, int outerWidth, int align, float spacingMult, float spacingAdd, bool includePad, int truncateAt, int ellipsizedWith) [static] :345
::g::Java::Object* StaticLayout::Create(uString* text, int bufStart, int bufEnd, ::g::Java::Object* paintHandle, int outerWidth, int align, float spacingMult, float spacingAdd, bool includePad, int truncateAt, int ellipsizedWith)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create204", "(Ljava/lang/String;IILjava/lang/Object;IIFFZII)Ljava/lang/Object;");
        jstring _text = JniHelper::UnoToJavaString(text);
        jobject __jresult = _jni->CallStaticObjectMethod(__cls, __mtd,_text,(jint)bufStart,(jint)bufEnd,(paintHandle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)paintHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(jint)outerWidth,(jint)align,(jfloat)spacingMult,(jfloat)spacingAdd,(jboolean)includePad,(jint)truncateAt,(jint)ellipsizedWith);
        uObject* __result;
        NEW_UNO(__jresult,__result,::g::Android::Base::Wrappers::JWrapper_typeof(),::g::Android::Base::Wrappers::JWrapper*,false,false);
        if (_text!=NULL) { _jni->DeleteLocalRef(_text); }
        ::g::Android::Base::JNI::CheckException();
        return (::g::Java::Object*)__result;
    }
    
}

// private static Java.Object Create(string text, Java.Object paintHandle, int width, int align, float spacingMult, float spacingAdd, bool includePad) [static] :325
::g::Java::Object* StaticLayout::Create1(uString* text, ::g::Java::Object* paintHandle, int width, int align, float spacingMult, float spacingAdd, bool includePad)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create1205", "(Ljava/lang/String;Ljava/lang/Object;IIFFZ)Ljava/lang/Object;");
        jstring _text = JniHelper::UnoToJavaString(text);
        jobject __jresult = _jni->CallStaticObjectMethod(__cls, __mtd,_text,(paintHandle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)paintHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(jint)width,(jint)align,(jfloat)spacingMult,(jfloat)spacingAdd,(jboolean)includePad);
        uObject* __result;
        NEW_UNO(__jresult,__result,::g::Android::Base::Wrappers::JWrapper_typeof(),::g::Android::Base::Wrappers::JWrapper*,false,false);
        if (_text!=NULL) { _jni->DeleteLocalRef(_text); }
        ::g::Android::Base::JNI::CheckException();
        return (::g::Java::Object*)__result;
    }
    
}

// private static void Draw(Java.Object layoutHandle, Java.Object canvasHandle) [static] :264
void StaticLayout::Draw1(::g::Java::Object* layoutHandle, ::g::Java::Object* canvasHandle)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Draw1206", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,(layoutHandle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)layoutHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(canvasHandle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)canvasHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static float GetDesiredWidth(string text, Fuse.Android.TextPaint paint) [static] :213
float StaticLayout::GetDesiredWidth(uString* text, ::g::Fuse::Android::TextPaint* paint)
{
    return StaticLayout::GetDesiredWidthImpl((text != NULL) ? text : ::STRINGS[2/*""*/], uPtr(paint)->Handle());
}

// private static float GetDesiredWidthImpl(string text, Java.Object paintHandle) [static] :312
float StaticLayout::GetDesiredWidthImpl(uString* text, ::g::Java::Object* paintHandle)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetDesiredWidthImpl207", "(Ljava/lang/String;Ljava/lang/Object;)F");
        jstring _text = JniHelper::UnoToJavaString(text);
        jfloat __jresult = _jni->CallStaticFloatMethod(__cls, __mtd,_text,(paintHandle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)paintHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        float __result = (float)__jresult;
        if (_text!=NULL) { _jni->DeleteLocalRef(_text); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static int GetEllipsizedWidth(Java.Object handle) [static] :282
int StaticLayout::GetEllipsizedWidth(::g::Java::Object* handle)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetEllipsizedWidth208", "(Ljava/lang/Object;)I");
        jint __jresult = _jni->CallStaticIntMethod(__cls, __mtd,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int __result = (int)__jresult;
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static int GetHeight(Java.Object handle) [static] :270
int StaticLayout::GetHeight(::g::Java::Object* handle)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetHeight209", "(Ljava/lang/Object;)I");
        jint __jresult = _jni->CallStaticIntMethod(__cls, __mtd,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int __result = (int)__jresult;
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static int GetLineBaseline(Java.Object handle, int line) [static] :288
int StaticLayout::GetLineBaseline1(::g::Java::Object* handle, int line)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetLineBaseline1210", "(Ljava/lang/Object;I)I");
        jint __jresult = _jni->CallStaticIntMethod(__cls, __mtd,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(jint)line);
        int __result = (int)__jresult;
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static int GetLineCount(Java.Object handle) [static] :319
int StaticLayout::GetLineCount(::g::Java::Object* handle)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetLineCount211", "(Ljava/lang/Object;)I");
        jint __jresult = _jni->CallStaticIntMethod(__cls, __mtd,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int __result = (int)__jresult;
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static int GetLineEnd(Java.Object handle, int line) [static] :306
int StaticLayout::GetLineEnd1(::g::Java::Object* handle, int line)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetLineEnd1212", "(Ljava/lang/Object;I)I");
        jint __jresult = _jni->CallStaticIntMethod(__cls, __mtd,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(jint)line);
        int __result = (int)__jresult;
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static float GetLineLeft(Java.Object handle, int line) [static] :294
float StaticLayout::GetLineLeft1(::g::Java::Object* handle, int line)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetLineLeft1213", "(Ljava/lang/Object;I)F");
        jfloat __jresult = _jni->CallStaticFloatMethod(__cls, __mtd,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(jint)line);
        float __result = (float)__jresult;
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static int GetLineStart(Java.Object handle, int line) [static] :300
int StaticLayout::GetLineStart1(::g::Java::Object* handle, int line)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetLineStart1214", "(Ljava/lang/Object;I)I");
        jint __jresult = _jni->CallStaticIntMethod(__cls, __mtd,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(jint)line);
        int __result = (int)__jresult;
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public StaticLayout New(string text, Fuse.Android.TextPaint paint, int width, Fuse.Android.StaticLayout.Alignment align, float spacingMult, float spacingAdd, bool includePad) [static] :187
StaticLayout* StaticLayout::New2(uString* text, ::g::Fuse::Android::TextPaint* paint, int width, int align, float spacingMult, float spacingAdd, bool includePad)
{
    StaticLayout* obj2 = (StaticLayout*)uNew(StaticLayout_typeof());
    obj2->ctor_1(text, paint, width, align, spacingMult, spacingAdd, includePad);
    return obj2;
}

// public StaticLayout New(string text, int bufStart, int bufEnd, Fuse.Android.TextPaint paint, int outerWidth, Fuse.Android.StaticLayout.Alignment align, float spacingMult, float spacingAdd, bool includePad, Fuse.Android.TextUtils.TruncateAt truncateAt, int ellipsizedWith) [static] :198
StaticLayout* StaticLayout::New3(uString* text, int bufStart, int bufEnd, ::g::Fuse::Android::TextPaint* paint, int outerWidth, int align, float spacingMult, float spacingAdd, bool includePad, int truncateAt, int ellipsizedWith)
{
    StaticLayout* obj3 = (StaticLayout*)uNew(StaticLayout_typeof());
    obj3->ctor_2(text, bufStart, bufEnd, paint, outerWidth, align, spacingMult, spacingAdd, includePad, truncateAt, ellipsizedWith);
    return obj3;
}
// }

// /usr/local/share/uno/Packages/Fuse.Android/0.32.14/$.uno
// --------------------------------------------------------

// public sealed class StatusBarConfig :40
// {
static void StatusBarConfig_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Node_type, interface3));
    type->SetFields(13);
}

::g::Fuse::Node_type* StatusBarConfig_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 13;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(StatusBarConfig);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.Android.StatusBarConfig", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_build_ = StatusBarConfig_build;
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

// internal static void SetStatusBarColor(float4 color) :79
void StatusBarConfig__SetStatusBarColor_fn(::g::Uno::Float4* color)
{
    StatusBarConfig::SetStatusBarColor(*color);
}

// private static extern void SetStatusBarColor(int color) :99
void StatusBarConfig__SetStatusBarColor1_fn(int* color)
{
    StatusBarConfig::SetStatusBarColor1(*color);
}

// internal static void SetStatusBarColor(float4 color) [static] :79
void StatusBarConfig::SetStatusBarColor(::g::Uno::Float4 color)
{
    ::g::Uno::Byte4 c = ::g::Uno::Byte4__New2((uint8_t)::g::Uno::Math::Clamp1(color.X * 255.0f, 0.0f, 255.0f), (uint8_t)::g::Uno::Math::Clamp1(color.Y * 255.0f, 0.0f, 255.0f), (uint8_t)::g::Uno::Math::Clamp1(color.Z * 255.0f, 0.0f, 255.0f), (uint8_t)::g::Uno::Math::Clamp1(color.W * 255.0f, 0.0f, 255.0f));
    int androidColor = 0;
    androidColor = androidColor | (c.W << 24);
    androidColor = androidColor | (c.X << 16);
    androidColor = androidColor | (c.Y << 8);
    androidColor = androidColor | (int)c.Z;
    StatusBarConfig::SetStatusBarColor1(androidColor);
}

// private static extern void SetStatusBarColor(int color) [static] :99
void StatusBarConfig::SetStatusBarColor1(int color)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetStatusBarColor1216", "(I)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,(jint)color);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Android/0.32.14/$.uno
// --------------------------------------------------------

// internal sealed extern class TextControlLayout :171
// {
static void TextControlLayout_build(uType* type)
{
    ::STRINGS[3] = uString::Const("wrapWidth");
    ::STRINGS[2] = uString::Const("");
    ::TYPES[9] = ::g::Fuse::IViewport_typeof();
    ::TYPES[8] = ::g::Uno::Int_typeof();
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Android::TextControlLayout, _cacheMin), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Android::TextControlLayout, _cacheValid), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Android::TextControlLayout, _cacheWrapWidthPoints), 0,
        ::g::Fuse::Android::StaticLayout_typeof(), offsetof(::g::Fuse::Android::TextControlLayout, _Layout), 0,
        ::g::Uno::Recti_typeof(), offsetof(::g::Fuse::Android::TextControlLayout, _PixelBounds), 0);
}

uType* TextControlLayout_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(TextControlLayout);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Android.TextControlLayout", options);
    type->fp_build_ = TextControlLayout_build;
    type->fp_ctor_ = (void*)TextControlLayout__New1_fn;
    return type;
}

// public generated TextControlLayout() :171
void TextControlLayout__ctor__fn(TextControlLayout* __this)
{
    __this->ctor_();
}

// public void Invalidate() :185
void TextControlLayout__Invalidate_fn(TextControlLayout* __this)
{
    __this->Invalidate();
}

// public generated Fuse.Android.StaticLayout get_Layout() :173
void TextControlLayout__get_Layout_fn(TextControlLayout* __this, ::g::Fuse::Android::StaticLayout** __retval)
{
    *__retval = __this->Layout();
}

// private generated void set_Layout(Fuse.Android.StaticLayout value) :173
void TextControlLayout__set_Layout_fn(TextControlLayout* __this, ::g::Fuse::Android::StaticLayout* value)
{
    __this->Layout(value);
}

// public bool Measure(Fuse.Controls.TextControl Control, Fuse.Android.TextPaint Paint, float wrapWidthPoints, bool useMin) :190
void TextControlLayout__Measure_fn(TextControlLayout* __this, ::g::Fuse::Controls::TextControl* Control, ::g::Fuse::Android::TextPaint* Paint, float* wrapWidthPoints, bool* useMin, bool* __retval)
{
    *__retval = __this->Measure(Control, Paint, *wrapWidthPoints, *useMin);
}

// public generated TextControlLayout New() :171
void TextControlLayout__New1_fn(TextControlLayout** __retval)
{
    *__retval = TextControlLayout::New1();
}

// public generated Uno.Recti get_PixelBounds() :174
void TextControlLayout__get_PixelBounds_fn(TextControlLayout* __this, ::g::Uno::Recti* __retval)
{
    *__retval = __this->PixelBounds();
}

// private generated void set_PixelBounds(Uno.Recti value) :174
void TextControlLayout__set_PixelBounds_fn(TextControlLayout* __this, ::g::Uno::Recti* value)
{
    __this->PixelBounds(*value);
}

// private Fuse.Android.StaticLayout.Alignment TextAlignmentToAndroidLayoutAlignment(Fuse.Controls.TextAlignment textAlignment) :248
void TextControlLayout__TextAlignmentToAndroidLayoutAlignment_fn(TextControlLayout* __this, int* textAlignment, int* __retval)
{
    *__retval = __this->TextAlignmentToAndroidLayoutAlignment(*textAlignment);
}

// public void UpdatePaint(Fuse.Controls.TextControl Control, Fuse.Android.TextPaint paint) :260
void TextControlLayout__UpdatePaint_fn(TextControlLayout* __this, ::g::Fuse::Controls::TextControl* Control, ::g::Fuse::Android::TextPaint* paint)
{
    __this->UpdatePaint(Control, paint);
}

// public generated TextControlLayout() [instance] :171
void TextControlLayout::ctor_()
{
}

// public void Invalidate() [instance] :185
void TextControlLayout::Invalidate()
{
    _cacheValid = false;
}

// public generated Fuse.Android.StaticLayout get_Layout() [instance] :173
::g::Fuse::Android::StaticLayout* TextControlLayout::Layout()
{
    return _Layout;
}

// private generated void set_Layout(Fuse.Android.StaticLayout value) [instance] :173
void TextControlLayout::Layout(::g::Fuse::Android::StaticLayout* value)
{
    _Layout = value;
}

// public bool Measure(Fuse.Controls.TextControl Control, Fuse.Android.TextPaint Paint, float wrapWidthPoints, bool useMin) [instance] :190
bool TextControlLayout::Measure(::g::Fuse::Controls::TextControl* Control, ::g::Fuse::Android::TextPaint* Paint, float wrapWidthPoints, bool useMin)
{
    if ((((Layout() != NULL) && _cacheValid) && (_cacheWrapWidthPoints == wrapWidthPoints)) && (_cacheMin == useMin))
        return false;

    if (wrapWidthPoints < 0.0f)
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[3/*"wrapWidth"*/]));

    float wrapWidthPixels = wrapWidthPoints * ::g::Fuse::IViewport::PixelsPerPoint(uInterface(uPtr(uPtr(Control)->Viewport()), ::TYPES[9/*Fuse.IViewport*/]));
    int align = TextAlignmentToAndroidLayoutAlignment(Control->TextAlignment());
    uString* ind1 = Control->RenderValue();
    uString* text = (ind1 != NULL) ? ind1 : ::STRINGS[2/*""*/];
    float lineSpacing = Control->LineSpacing() * ::g::Fuse::IViewport::PixelsPerPoint(uInterface(uPtr(Control->Viewport()), ::TYPES[9/*Fuse.IViewport*/]));
    float desiredWidth = ::g::Fuse::Android::StaticLayout::GetDesiredWidth(text, Paint);

    if (useMin)
        wrapWidthPixels = ::g::Uno::Math::Min1(wrapWidthPixels, desiredWidth);

    int width = (int)::g::Uno::Math::Min1(::g::Uno::Math::Ceil1(wrapWidthPixels), 2.14748365e+09f);

    if (Control->TextWrapping() == 0)
    {
        int layoutWidth = (int)::g::Uno::Math::Ceil1(::g::Uno::Math::Max1(wrapWidthPixels, desiredWidth));
        Layout((uPtr(Control)->TextTruncation() == 0) ? (::g::Fuse::Android::StaticLayout*)::g::Fuse::Android::StaticLayout::New3(text, 0, uPtr(text)->Length(), Paint, layoutWidth, align, 1.0f, lineSpacing, false, 0, width) : (::g::Fuse::Android::StaticLayout*)::g::Fuse::Android::StaticLayout::New2(text, Paint, layoutWidth, align, 1.0f, lineSpacing, false));
    }
    else
        Layout(::g::Fuse::Android::StaticLayout::New2(text, Paint, width, align, 1.0f, lineSpacing, false));

    ::g::Uno::Rect bounds = ::g::Uno::Rect__New1(0.0f, 0.0f, 0.0f, 0.0f);

    for (int i = 0; i < uPtr(Layout())->LineCount(); ++i)
    {
        ::g::Uno::Rect rLineBounds = uPtr(Paint)->GetTextBounds1(text, uPtr(Layout())->GetLineStart(i), uPtr(Layout())->GetLineEnd(i));
        ::g::Uno::Rect lineBounds = ::g::Uno::Rect__Translate(rLineBounds, ::g::Uno::Float2__New2(uPtr(Layout())->GetLineLeft(i), (float)uPtr(Layout())->GetLineBaseline(i)));
        bounds = (i == 0) ? lineBounds : ::g::Uno::Rect__Union(bounds, lineBounds);
    }

    ::g::Uno::Int2 min = ::g::Uno::Int2__op_Explicit(::g::Uno::Math::Floor2(bounds.Minimum()));
    ::g::Uno::Int2 max = ::g::Uno::Int2__op_Explicit(::g::Uno::Math::Ceil2(bounds.Maximum()));
    PixelBounds(::g::Uno::Recti__Inflate(::g::Uno::Recti__New1(min.X, min.Y, max.X, max.Y), 1));
    PixelBounds().Size(::g::Uno::Int2__New2(::g::Uno::Math::Min8(PixelBounds().Size().X, uPtr(Layout())->EllipsizedWidth()), PixelBounds().Size().Y));
    _cacheValid = true;
    _cacheWrapWidthPoints = wrapWidthPoints;
    _cacheMin = useMin;
    return true;
}

// public generated Uno.Recti get_PixelBounds() [instance] :174
::g::Uno::Recti TextControlLayout::PixelBounds()
{
    return _PixelBounds;
}

// private generated void set_PixelBounds(Uno.Recti value) [instance] :174
void TextControlLayout::PixelBounds(::g::Uno::Recti value)
{
    _PixelBounds = value;
}

// private Fuse.Android.StaticLayout.Alignment TextAlignmentToAndroidLayoutAlignment(Fuse.Controls.TextAlignment textAlignment) [instance] :248
int TextControlLayout::TextAlignmentToAndroidLayoutAlignment(int textAlignment)
{
    switch (textAlignment)
    {
        case 0:
            return 1;
        case 1:
            return 0;
        case 2:
            return 2;
    }

    return 1;
}

// public void UpdatePaint(Fuse.Controls.TextControl Control, Fuse.Android.TextPaint paint) [instance] :260
void TextControlLayout::UpdatePaint(::g::Fuse::Controls::TextControl* Control, ::g::Fuse::Android::TextPaint* paint)
{
    uPtr(paint)->AntiAlias(true);
    paint->Typeface((uPtr(Control)->Font() != ::g::Fuse::Font::PlatformDefault()) ? (::g::Fuse::Controls::Native::Android::Typeface*)::g::Fuse::Controls::Native::Android::TypefaceCache::GetTypeface(uPtr(Control)->Font()) : (::g::Fuse::Controls::Native::Android::Typeface*)::g::Fuse::Controls::Native::Android::Typeface::Default());
    paint->TextSize(Control->FontSize() * ::g::Fuse::IViewport::PixelsPerPoint(uInterface(uPtr(Control->Viewport()), ::TYPES[9/*Fuse.IViewport*/])));
}

// public generated TextControlLayout New() [static] :171
TextControlLayout* TextControlLayout::New1()
{
    TextControlLayout* obj2 = (TextControlLayout*)uNew(TextControlLayout_typeof());
    obj2->ctor_();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Android/0.32.14/Internal/$.uno
// -----------------------------------------------------------------

// internal sealed extern class TextPaint :393
// {
static void TextPaint_build(uType* type)
{
    ::TYPES[10] = ::g::Uno::Int_typeof()->Array();
    type->SetFields(0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Android::TextPaint, _handle), 0);
}

uType* TextPaint_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(TextPaint);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Android.TextPaint", options);
    type->fp_build_ = TextPaint_build;
    type->fp_ctor_ = (void*)TextPaint__New1_fn;
    return type;
}

// public TextPaint() :402
void TextPaint__ctor__fn(TextPaint* __this)
{
    __this->ctor_();
}

// public TextPaint(Java.Object handle) :404
void TextPaint__ctor_1_fn(TextPaint* __this, ::g::Java::Object* handle)
{
    __this->ctor_1(handle);
}

// public void set_AntiAlias(bool value) :411
void TextPaint__set_AntiAlias_fn(TextPaint* __this, bool* value)
{
    __this->AntiAlias(*value);
}

// public void set_Color(float4 value) :433
void TextPaint__set_Color_fn(TextPaint* __this, ::g::Uno::Float4* value)
{
    __this->Color(*value);
}

// private static Java.Object Create() :472
void TextPaint__Create_fn(::g::Java::Object** __retval)
{
    *__retval = TextPaint::Create();
}

// private static void GetTextBounds(Java.Object handle, string text, int start, int end, int[] r) :443
void TextPaint__GetTextBounds_fn(::g::Java::Object* handle, uString* text, int* start, int* end, uArray* r)
{
    TextPaint::GetTextBounds(handle, text, *start, *end, r);
}

// public Uno.Rect GetTextBounds(string text, int start, int end) :414
void TextPaint__GetTextBounds1_fn(TextPaint* __this, uString* text, int* start, int* end, ::g::Uno::Rect* __retval)
{
    *__retval = __this->GetTextBounds1(text, *start, *end);
}

// public Java.Object get_Handle() :397
void TextPaint__get_Handle_fn(TextPaint* __this, ::g::Java::Object** __retval)
{
    *__retval = __this->Handle();
}

// public TextPaint New() :402
void TextPaint__New1_fn(TextPaint** __retval)
{
    *__retval = TextPaint::New1();
}

// private static void SetAntiAlias(Java.Object handle, bool value) :454
void TextPaint__SetAntiAlias_fn(::g::Java::Object* handle, bool* value)
{
    TextPaint::SetAntiAlias(handle, *value);
}

// private static void SetColor(Java.Object handle, int color) :437
void TextPaint__SetColor_fn(::g::Java::Object* handle, int* color)
{
    TextPaint::SetColor(handle, *color);
}

// private static void SetTextSize(Java.Object handle, float textSize) :466
void TextPaint__SetTextSize_fn(::g::Java::Object* handle, float* textSize)
{
    TextPaint::SetTextSize(handle, *textSize);
}

// private static void SetTypeface(Java.Object paintHandle, Java.Object typefaceHandle) :460
void TextPaint__SetTypeface_fn(::g::Java::Object* paintHandle, ::g::Java::Object* typefaceHandle)
{
    TextPaint::SetTypeface(paintHandle, typefaceHandle);
}

// public void set_TextSize(float value) :428
void TextPaint__set_TextSize_fn(TextPaint* __this, float* value)
{
    __this->TextSize(*value);
}

// public void set_Typeface(Fuse.Controls.Native.Android.Typeface value) :423
void TextPaint__set_Typeface_fn(TextPaint* __this, ::g::Fuse::Controls::Native::Android::Typeface* value)
{
    __this->Typeface(value);
}

// public TextPaint() [instance] :402
void TextPaint::ctor_()
{
    ctor_1(TextPaint::Create());
}

// public TextPaint(Java.Object handle) [instance] :404
void TextPaint::ctor_1(::g::Java::Object* handle)
{
    _handle = handle;
}

// public void set_AntiAlias(bool value) [instance] :411
void TextPaint::AntiAlias(bool value)
{
    TextPaint::SetAntiAlias(Handle(), value);
}

// public void set_Color(float4 value) [instance] :433
void TextPaint::Color(::g::Uno::Float4 value)
{
    TextPaint::SetColor(Handle(), ::g::Fuse::Android::Helpers::EncodeColor(value));
}

// public Uno.Rect GetTextBounds(string text, int start, int end) [instance] :414
::g::Uno::Rect TextPaint::GetTextBounds1(uString* text, int start, int end)
{
    uArray* r = uArray::New(::TYPES[10/*int[]*/], 4);
    TextPaint::GetTextBounds(Handle(), text, start, end, r);
    return ::g::Uno::Rect__New1((float)r->Item<int>(0), (float)r->Item<int>(1), (float)r->Item<int>(2), (float)r->Item<int>(3));
}

// public Java.Object get_Handle() [instance] :397
::g::Java::Object* TextPaint::Handle()
{
    return _handle;
}

// public void set_TextSize(float value) [instance] :428
void TextPaint::TextSize(float value)
{
    TextPaint::SetTextSize(Handle(), value);
}

// public void set_Typeface(Fuse.Controls.Native.Android.Typeface value) [instance] :423
void TextPaint::Typeface(::g::Fuse::Controls::Native::Android::Typeface* value)
{
    TextPaint::SetTypeface(Handle(), uPtr(value)->Handle());
}

// private static Java.Object Create() [static] :472
::g::Java::Object* TextPaint::Create()
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create218", "()Ljava/lang/Object;");
        jobject __jresult = _jni->CallStaticObjectMethod(__cls, __mtd);
        uObject* __result;
        NEW_UNO(__jresult,__result,::g::Android::Base::Wrappers::JWrapper_typeof(),::g::Android::Base::Wrappers::JWrapper*,false,false);
        ::g::Android::Base::JNI::CheckException();
        return (::g::Java::Object*)__result;
    }
    
}

// private static void GetTextBounds(Java.Object handle, string text, int start, int end, int[] r) [static] :443
void TextPaint::GetTextBounds(::g::Java::Object* handle, uString* text, int start, int end, uArray* r)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetTextBounds219", "(Ljava/lang/Object;Ljava/lang/String;IILcom/uno/IntArray;)V");
        jstring _text = JniHelper::UnoToJavaString(text);
        jobject _r = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box3(r);
        _jni->CallStaticVoidMethod(__cls, __mtd,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),_text,(jint)start,(jint)end,_r);
        
        if (_text!=NULL) { _jni->DeleteLocalRef(_text); }
        if (_r!=NULL) { _jni->DeleteLocalRef(_r); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public TextPaint New() [static] :402
TextPaint* TextPaint::New1()
{
    TextPaint* obj1 = (TextPaint*)uNew(TextPaint_typeof());
    obj1->ctor_();
    return obj1;
}

// private static void SetAntiAlias(Java.Object handle, bool value) [static] :454
void TextPaint::SetAntiAlias(::g::Java::Object* handle, bool value)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetAntiAlias220", "(Ljava/lang/Object;Z)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(jboolean)value);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetColor(Java.Object handle, int color) [static] :437
void TextPaint::SetColor(::g::Java::Object* handle, int color)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetColor221", "(Ljava/lang/Object;I)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(jint)color);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetTextSize(Java.Object handle, float textSize) [static] :466
void TextPaint::SetTextSize(::g::Java::Object* handle, float textSize)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetTextSize222", "(Ljava/lang/Object;F)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,(handle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)handle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(jfloat)textSize);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetTypeface(Java.Object paintHandle, Java.Object typefaceHandle) [static] :460
void TextPaint::SetTypeface(::g::Java::Object* paintHandle, ::g::Java::Object* typefaceHandle)
{
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetTypeface223", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,(paintHandle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)paintHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))),(typefaceHandle==NULL ? NULL : ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)typefaceHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /usr/local/share/uno/Packages/Fuse.Android/0.32.14/$.uno
// --------------------------------------------------------

// internal sealed extern class TextRenderer :271
// {
static void TextRenderer_build(uType* type)
{
    ::TYPES[11] = ::g::Fuse::Controls::ITextRenderer_typeof();
    ::TYPES[9] = ::g::Fuse::IViewport_typeof();
    ::TYPES[6] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::g::Fuse::Controls::ITextRenderer_typeof(), offsetof(TextRenderer_type, interface0));
    type->SetFields(0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Android::TextRenderer, _arrangePosition), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Android::TextRenderer, _arrangeSize), 0,
        ::g::Fuse::Controls::TextControl_typeof(), offsetof(::g::Fuse::Android::TextRenderer, _control), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Android::TextRenderer, _emitNewTexture), 0,
        ::g::Fuse::Android::TextControlLayout_typeof(), offsetof(::g::Fuse::Android::TextRenderer, _measureLayout), 0,
        ::g::Fuse::Android::TextPaint_typeof(), offsetof(::g::Fuse::Android::TextRenderer, _paint), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Android::TextRenderer, _renderThreaded), 0,
        ::g::Fuse::Android::TextControlLayout_typeof(), offsetof(::g::Fuse::Android::TextRenderer, _textLayout), 0,
        ::g::OpenGL::GLTextureHandle_typeof(), offsetof(::g::Fuse::Android::TextRenderer, _texture), 0,
        ::g::Uno::ULong_typeof(), offsetof(::g::Fuse::Android::TextRenderer, _textureVersion), 0,
        ::g::Uno::ULong_typeof(), offsetof(::g::Fuse::Android::TextRenderer, _wantedVersion), 0);
}

TextRenderer_type* TextRenderer_typeof()
{
    static uSStrong<TextRenderer_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 11;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TextRenderer);
    options.TypeSize = sizeof(TextRenderer_type);
    type = (TextRenderer_type*)uClassType::New("Fuse.Android.TextRenderer", options);
    type->fp_build_ = TextRenderer_build;
    type->interface0.fp_GetContentSize = (void(*)(uObject*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))TextRenderer__GetContentSize_fn;
    type->interface0.fp_Draw = (void(*)(uObject*, ::g::Fuse::DrawContext*, ::g::Fuse::Visual*))TextRenderer__Draw_fn;
    type->interface0.fp_Arrange = (void(*)(uObject*, ::g::Uno::Float2*, ::g::Uno::Float2*))TextRenderer__Arrange_fn;
    type->interface0.fp_Invalidate = (void(*)(uObject*))TextRenderer__Invalidate_fn;
    type->interface0.fp_GetRenderBounds = (void(*)(uObject*, ::g::Uno::Rect*))TextRenderer__GetRenderBounds_fn;
    type->interface0.fp_SoftDispose = (void(*)(uObject*))TextRenderer__SoftDispose_fn;
    return type;
}

// private TextRenderer(Fuse.Controls.TextControl Control) :279
void TextRenderer__ctor__fn(TextRenderer* __this, ::g::Fuse::Controls::TextControl* Control)
{
    __this->ctor_(Control);
}

// public void Arrange(float2 position, float2 size) :298
void TextRenderer__Arrange_fn(TextRenderer* __this, ::g::Uno::Float2* position, ::g::Uno::Float2* size)
{
    __this->Arrange(*position, *size);
}

// public static Fuse.Controls.ITextRenderer Create(Fuse.Controls.TextControl control) :273
void TextRenderer__Create_fn(::g::Fuse::Controls::TextControl* control, uObject** __retval)
{
    *__retval = TextRenderer::Create(control);
}

// private void DisposeTexture() :373
void TextRenderer__DisposeTexture_fn(TextRenderer* __this)
{
    __this->DisposeTexture();
}

// public void Draw(Fuse.DrawContext dc, Fuse.Visual where) :501
void TextRenderer__Draw_fn(TextRenderer* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* where)
{
    __this->Draw(dc, where);
}

// public float2 GetContentSize(Fuse.LayoutParams lp) :330
void TextRenderer__GetContentSize_fn(TextRenderer* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetContentSize(*lp);
}

// public Uno.Rect GetRenderBounds() :350
void TextRenderer__GetRenderBounds_fn(TextRenderer* __this, ::g::Uno::Rect* __retval)
{
    *__retval = __this->GetRenderBounds();
}

// public void Invalidate() :317
void TextRenderer__Invalidate_fn(TextRenderer* __this)
{
    __this->Invalidate();
}

// private TextRenderer New(Fuse.Controls.TextControl Control) :279
void TextRenderer__New1_fn(::g::Fuse::Controls::TextControl* Control, TextRenderer** __retval)
{
    *__retval = TextRenderer::New1(Control);
}

// private void OnBitmapDraw(Fuse.DrawContext dc, Fuse.Visual where, float2 dposition, float2 size) :473
void TextRenderer__OnBitmapDraw_fn(TextRenderer* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* where, ::g::Uno::Float2* dposition, ::g::Uno::Float2* size)
{
    __this->OnBitmapDraw(dc, where, *dposition, *size);
}

// private void PrepareDraw() :381
void TextRenderer__PrepareDraw_fn(TextRenderer* __this)
{
    __this->PrepareDraw();
}

// private void SetTexture(OpenGL.GLTextureHandle newTexture) :364
void TextRenderer__SetTexture_fn(TextRenderer* __this, uint32_t* newTexture)
{
    __this->SetTexture(*newTexture);
}

// public void SoftDispose() :324
void TextRenderer__SoftDispose_fn(TextRenderer* __this)
{
    __this->SoftDispose();
}

// private void UpdateLayout() :305
void TextRenderer__UpdateLayout_fn(TextRenderer* __this)
{
    __this->UpdateLayout();
}

// private void UpdatePaint() :285
void TextRenderer__UpdatePaint_fn(TextRenderer* __this)
{
    __this->UpdatePaint();
}

// private OpenGL.GLTextureHandle UpdateTexture(Fuse.Android.StaticLayout layout, float4 renderColor, Uno.Recti pixelBounds) :416
void TextRenderer__UpdateTexture_fn(TextRenderer* __this, ::g::Fuse::Android::StaticLayout* layout, ::g::Uno::Float4* renderColor, ::g::Uno::Recti* pixelBounds, uint32_t* __retval)
{
    *__retval = __this->UpdateTexture(layout, *renderColor, *pixelBounds);
}

// private TextRenderer(Fuse.Controls.TextControl Control) [instance] :279
void TextRenderer::ctor_(::g::Fuse::Controls::TextControl* Control)
{
    _textLayout = ::g::Fuse::Android::TextControlLayout::New1();
    _emitNewTexture = true;
    _texture = ::g::OpenGL::GLTextureHandle::Zero_;
    _control = Control;
}

// public void Arrange(float2 position, float2 size) [instance] :298
void TextRenderer::Arrange(::g::Uno::Float2 position, ::g::Uno::Float2 size)
{
    _arrangePosition = position;
    _arrangeSize = size;
    UpdateLayout();
}

// private void DisposeTexture() [instance] :373
void TextRenderer::DisposeTexture()
{
    SetTexture(::g::OpenGL::GLTextureHandle::Zero_);
    _textureVersion = 0ULL;
    _wantedVersion = 0ULL;
    _emitNewTexture = true;
}

// public void Draw(Fuse.DrawContext dc, Fuse.Visual where) [instance] :501
void TextRenderer::Draw(::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* where)
{
    PrepareDraw();
    OnBitmapDraw(dc, where, _arrangePosition, _arrangeSize);
}

// public float2 GetContentSize(Fuse.LayoutParams lp) [instance] :330
::g::Uno::Float2 TextRenderer::GetContentSize(::g::Fuse::LayoutParams lp)
{
    if (_measureLayout == NULL)
        _measureLayout = ::g::Fuse::Android::TextControlLayout::New1();

    if (_paint == NULL)
        _paint = ::g::Fuse::Android::TextPaint::New1();

    float wrapWidth = lp.HasX() ? lp.X() : FLT_INF;

    if (lp.HasMaxX())
        wrapWidth = ::g::Uno::Math::Min1(wrapWidth, lp.MaxX());

    UpdatePaint();
    uPtr(_measureLayout)->Measure(_control, _paint, wrapWidth, true);
    ::g::Uno::Float2 q = ::g::Uno::Float2__op_Division1(::g::Uno::Float2__New2((float)uPtr(uPtr(_measureLayout)->Layout())->EllipsizedWidth(), (float)uPtr(uPtr(_measureLayout)->Layout())->Height()), ::g::Fuse::IViewport::PixelsPerPoint(uInterface(uPtr(uPtr(_control)->Viewport()), ::TYPES[9/*Fuse.IViewport*/])));
    return q;
}

// public Uno.Rect GetRenderBounds() [instance] :350
::g::Uno::Rect TextRenderer::GetRenderBounds()
{
    UpdateLayout();
    return ::g::Uno::Rect__Translate(::g::Uno::Rect__New2(::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Implicit1(uPtr(_textLayout)->PixelBounds().Position()), ::g::Fuse::IViewport::PixelsPerPoint(uInterface(uPtr(uPtr(_control)->Viewport()), ::TYPES[9/*Fuse.IViewport*/]))), ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Implicit1(uPtr(_textLayout)->PixelBounds().Size()), ::g::Fuse::IViewport::PixelsPerPoint(uInterface(uPtr(uPtr(_control)->Viewport()), ::TYPES[9/*Fuse.IViewport*/])))), _arrangePosition);
}

// public void Invalidate() [instance] :317
void TextRenderer::Invalidate()
{
    uPtr(_textLayout)->Invalidate();

    if (_measureLayout != NULL)
        uPtr(_measureLayout)->Invalidate();
}

// private void OnBitmapDraw(Fuse.DrawContext dc, Fuse.Visual where, float2 dposition, float2 size) [instance] :473
void TextRenderer::OnBitmapDraw(::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* where, ::g::Uno::Float2 dposition, ::g::Uno::Float2 size)
{
    if ((_textureVersion != _wantedVersion) || ::g::OpenGL::GLTextureHandle::op_Equality(_texture, ::g::OpenGL::GLTextureHandle::Zero_))
        return;

    ::g::Uno::Int2 pixelSize = uPtr(_textLayout)->PixelBounds().Size();
    ::g::Uno::Float2 pointSize = ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Implicit1(pixelSize), ::g::Fuse::IViewport::PixelsPerPoint(uInterface(uPtr(uPtr(_control)->Viewport()), ::TYPES[9/*Fuse.IViewport*/])));
    ::g::Uno::Float2 position = ::g::Uno::Float2__op_Addition2(::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Implicit1(uPtr(_textLayout)->PixelBounds().Position()), ::g::Fuse::IViewport::PixelsPerPoint(uInterface(uPtr(uPtr(_control)->Viewport()), ::TYPES[9/*Fuse.IViewport*/]))), dposition);
    ::g::Uno::Float4x4 m = uPtr(dc)->GetLocalToClipTransform(where);
    uPtr(::g::Fuse::Android::Blitter::Singleton())->Blit(::g::Uno::Graphics::Texture2D::New2(_texture, pixelSize, 1, 3), position, pointSize, m);
    ::g::OpenGL::GL::BindTexture(3553, ::g::OpenGL::GLTextureHandle::Zero_);
}

// private void PrepareDraw() [instance] :381
void TextRenderer::PrepareDraw()
{
    UpdateLayout();

    if (!_emitNewTexture)
        return;

    _wantedVersion++;
    ::g::Uno::Recti pixelBounds = uPtr(_textLayout)->PixelBounds();

    if ((pixelBounds.Size().X <= 0) || (pixelBounds.Size().Y <= 0))
    {
        SetTexture(::g::OpenGL::GLTextureHandle::Zero_);
        return;
    }

    if (_renderThreaded)
    {
        TextRenderer__BackgroundRender* backgroundRender = TextRenderer__BackgroundRender::New1(this, _wantedVersion, uPtr(_textLayout)->Layout(), uPtr(_control)->TextColor(), pixelBounds);
        ::g::Fuse::GraphicsWorker::Dispatch(uDelegate::New(::TYPES[6/*Uno.Action*/], (void*)TextRenderer__BackgroundRender__UpdateTextureAsync_fn, backgroundRender));
    }
    else
    {
        SetTexture(UpdateTexture(uPtr(_textLayout)->Layout(), uPtr(_control)->TextColor(), pixelBounds));
        _textureVersion = _wantedVersion;
    }

    _emitNewTexture = false;
}

// private void SetTexture(OpenGL.GLTextureHandle newTexture) [instance] :364
void TextRenderer::SetTexture(uint32_t newTexture)
{
    if (::g::OpenGL::GLTextureHandle::op_Inequality(_texture, ::g::OpenGL::GLTextureHandle::Zero_))
        ::g::OpenGL::GL::DeleteTexture(_texture);

    _texture = newTexture;
    uPtr(_control)->InvalidateVisual();
}

// public void SoftDispose() [instance] :324
void TextRenderer::SoftDispose()
{
    DisposeTexture();
    _paint = NULL;
}

// private void UpdateLayout() [instance] :305
void TextRenderer::UpdateLayout()
{
    UpdatePaint();

    if (uPtr(_textLayout)->Measure(_control, _paint, _arrangeSize.X, false))
        _emitNewTexture = true;

    int textLength = ::g::Uno::String::op_Inequality(uPtr(_control)->RenderValue(), NULL) ? uPtr(uPtr(_control)->RenderValue())->Length() : 0;
    _renderThreaded = (textLength > 50);
}

// private void UpdatePaint() [instance] :285
void TextRenderer::UpdatePaint()
{
    if (_paint == NULL)
        _paint = ::g::Fuse::Android::TextPaint::New1();

    uPtr(_textLayout)->UpdatePaint(_control, _paint);
}

// private OpenGL.GLTextureHandle UpdateTexture(Fuse.Android.StaticLayout layout, float4 renderColor, Uno.Recti pixelBounds) [instance] :416
uint32_t TextRenderer::UpdateTexture(::g::Fuse::Android::StaticLayout* layout, ::g::Uno::Float4 renderColor, ::g::Uno::Recti pixelBounds)
{
    ::g::Fuse::Android::Bitmap* bitmap = ::g::Fuse::Android::Bitmap::CreateBitmapARGB8888(pixelBounds.Size().X, pixelBounds.Size().Y);
    ::g::Fuse::Android::Canvas* canvas = ::g::Fuse::Android::Canvas::New1(bitmap);
    canvas->Translate((float)-pixelBounds.Position().X, (float)-pixelBounds.Position().Y);
    uPtr(bitmap)->EraseColor(::g::Uno::Float4__New1(0.0f));
    UpdatePaint();
    uPtr(_paint)->Color(renderColor);
    uPtr(layout)->Draw(canvas);
    uint32_t texture = ::g::OpenGL::GL::CreateTexture();
    ::g::OpenGL::GL::BindTexture(3553, texture);
    ::g::Fuse::Android::GLUtils::TexImage2D1(3553, 0, bitmap, 0);
    bitmap->Recycle();
    return texture;
}

// public static Fuse.Controls.ITextRenderer Create(Fuse.Controls.TextControl control) [static] :273
uObject* TextRenderer::Create(::g::Fuse::Controls::TextControl* control)
{
    return (uObject*)TextRenderer::New1(control);
}

// private TextRenderer New(Fuse.Controls.TextControl Control) [static] :279
TextRenderer* TextRenderer::New1(::g::Fuse::Controls::TextControl* Control)
{
    TextRenderer* obj1 = (TextRenderer*)uNew(TextRenderer_typeof());
    obj1->ctor_(Control);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Android/0.32.14/Internal/$.uno
// -----------------------------------------------------------------

// internal sealed extern class TextUtils :494
// {
static void TextUtils_build(uType* type)
{
}

uType* TextUtils_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(TextUtils);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Android.TextUtils", options);
    type->fp_build_ = TextUtils_build;
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Android/0.32.14/Internal/$.uno
// -----------------------------------------------------------------

// public enum TextUtils.TruncateAt :496
uEnumType* TextUtils__TruncateAt_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Android.TextUtils.TruncateAt", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "End", 0LL,
        "Marquee", 1LL,
        "Middle", 2LL,
        "Start", 3LL);
    return type;
}

}}} // ::g::Fuse::Android
