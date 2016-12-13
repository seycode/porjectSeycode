// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseControlsVideo_bundle.h>
#include <Fuse.Controls.Graphics.Visual.h>
#include <Fuse.Controls.VideoImpl.Android.VideoLoader.h>
#include <Fuse.Controls.VideoImpl.EmptyVideo.h>
#include <Fuse.Controls.VideoImpl.GraphicsVideoService.h>
#include <Fuse.Controls.VideoImpl.IVideoCallbacks.h>
#include <Fuse.Controls.VideoImpl.IVideoPlayer.h>
#include <Fuse.Controls.VideoImpl.IVideoService.h>
#include <Fuse.Controls.VideoImpl.LoadingClosure.h>
#include <Fuse.Controls.VideoImpl.Scale9Rectangle.h>
#include <Fuse.Controls.VideoImpl.VideoDiskCache.h>
#include <Fuse.Controls.VideoImpl.VideoDrawElement.h>
#include <Fuse.Controls.VideoImpl.VideoLoader.h>
#include <Fuse.Controls.VideoImpl.VideoVisual.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.DrawContext.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.StretchDirection.h>
#include <Fuse.Elements.StretchMode.h>
#include <Fuse.Elements.StretchSizing.h>
#include <Fuse.HitTestContext.h>
#include <Fuse.Internal.SizingContainer.h>
#include <Fuse.InvalidateLayoutReason.h>
#include <Fuse.IViewport.h>
#include <Fuse.LayoutParams.h>
#include <Fuse.Triggers.WhileCompleted.h>
#include <Fuse.Triggers.WhileFailed.h>
#include <Fuse.Triggers.WhileLoading.h>
#include <Fuse.Triggers.WhilePaused.h>
#include <Fuse.Triggers.WhilePlaying.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Fuse.Visual.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Application.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Byte.h>
#include <Uno.Char.h>
#include <Uno.Collections.Dictionary-2.Enumerator.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Graphics.BlendOperand.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.IndexBuffer.h>
#include <Uno.Graphics.IndexType.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.VertexAttributeType.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.Graphics.VideoTexture.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.IO.Directory.h>
#include <Uno.IO.File.h>
#include <Uno.IO.UserDirectory.h>
#include <Uno.Math.h>
#include <Uno.Matrix.h>
#include <Uno.Object.h>
#include <Uno.Platform.Window.h>
#include <Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <Uno.String.h>
#include <Uno.Threading.Future.h>
#include <Uno.Threading.Future-1.h>
#include <Uno.UShort.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.ValueChangedArgs-1.h>
#include <Uno.UX.ValueChangedHandler-1.h>
static uString* STRINGS[10];
static uType* TYPES[26];

namespace g{
namespace Fuse{
namespace Controls{
namespace VideoImpl{

// /usr/local/share/uno/Packages/Fuse.Controls.Video/0.32.14/$.uno
// ---------------------------------------------------------------

// internal sealed class EmptyVideo :31
// {
static void EmptyVideo_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Controls::VideoImpl::IVideoPlayer_typeof(), offsetof(EmptyVideo_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(EmptyVideo_type, interface1));
}

EmptyVideo_type* EmptyVideo_typeof()
{
    static uSStrong<EmptyVideo_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(EmptyVideo);
    options.TypeSize = sizeof(EmptyVideo_type);
    type = (EmptyVideo_type*)uClassType::New("Fuse.Controls.VideoImpl.EmptyVideo", options);
    type->fp_build_ = EmptyVideo_build;
    type->fp_ctor_ = (void*)EmptyVideo__New1_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))EmptyVideo__UnoIDisposableDispose_fn;
    type->interface0.fp_Pause = (void(*)(uObject*))EmptyVideo__FuseControlsVideoImplIVideoPlayerPause_fn;
    type->interface0.fp_Play = (void(*)(uObject*))EmptyVideo__FuseControlsVideoImplIVideoPlayerPlay_fn;
    type->interface0.fp_Update = (void(*)(uObject*))EmptyVideo__FuseControlsVideoImplIVideoPlayerUpdate_fn;
    type->interface0.fp_get_Duration = (void(*)(uObject*, double*))EmptyVideo__FuseControlsVideoImplIVideoPlayerget_Duration_fn;
    type->interface0.fp_get_Position = (void(*)(uObject*, double*))EmptyVideo__FuseControlsVideoImplIVideoPlayerget_Position_fn;
    type->interface0.fp_set_Position = (void(*)(uObject*, double*))EmptyVideo__FuseControlsVideoImplIVideoPlayerset_Position_fn;
    type->interface0.fp_get_Volume = (void(*)(uObject*, float*))EmptyVideo__FuseControlsVideoImplIVideoPlayerget_Volume_fn;
    type->interface0.fp_set_Volume = (void(*)(uObject*, float*))EmptyVideo__FuseControlsVideoImplIVideoPlayerset_Volume_fn;
    type->interface0.fp_get_Size = (void(*)(uObject*, ::g::Uno::Int2*))EmptyVideo__FuseControlsVideoImplIVideoPlayerget_Size_fn;
    type->interface0.fp_get_VideoTexture = (void(*)(uObject*, ::g::Uno::Graphics::VideoTexture**))EmptyVideo__FuseControlsVideoImplIVideoPlayerget_VideoTexture_fn;
    type->interface0.fp_add_FrameAvailable = (void(*)(uObject*, uDelegate*))EmptyVideo__FuseControlsVideoImplIVideoPlayeradd_FrameAvailable_fn;
    type->interface0.fp_remove_FrameAvailable = (void(*)(uObject*, uDelegate*))EmptyVideo__FuseControlsVideoImplIVideoPlayerremove_FrameAvailable_fn;
    type->interface0.fp_add_ErrorOccurred = (void(*)(uObject*, uDelegate*))EmptyVideo__FuseControlsVideoImplIVideoPlayeradd_ErrorOccurred_fn;
    type->interface0.fp_remove_ErrorOccurred = (void(*)(uObject*, uDelegate*))EmptyVideo__FuseControlsVideoImplIVideoPlayerremove_ErrorOccurred_fn;
    return type;
}

// public generated EmptyVideo() :31
void EmptyVideo__ctor__fn(EmptyVideo* __this)
{
    __this->ctor_();
}

// private double Fuse.Controls.VideoImpl.IVideoPlayer.get_Duration() :33
void EmptyVideo__FuseControlsVideoImplIVideoPlayerget_Duration_fn(EmptyVideo* __this, double* __retval)
{
    return *__retval = 0.0, void();
}

// private void Fuse.Controls.VideoImpl.IVideoPlayer.add_ErrorOccurred(Uno.EventHandler<Uno.Exception> value) :36
void EmptyVideo__FuseControlsVideoImplIVideoPlayeradd_ErrorOccurred_fn(EmptyVideo* __this, uDelegate* value)
{
}

// private void Fuse.Controls.VideoImpl.IVideoPlayer.remove_ErrorOccurred(Uno.EventHandler<Uno.Exception> value) :36
void EmptyVideo__FuseControlsVideoImplIVideoPlayerremove_ErrorOccurred_fn(EmptyVideo* __this, uDelegate* value)
{
}

// private void Fuse.Controls.VideoImpl.IVideoPlayer.add_FrameAvailable(Uno.EventHandler value) :35
void EmptyVideo__FuseControlsVideoImplIVideoPlayeradd_FrameAvailable_fn(EmptyVideo* __this, uDelegate* value)
{
}

// private void Fuse.Controls.VideoImpl.IVideoPlayer.remove_FrameAvailable(Uno.EventHandler value) :35
void EmptyVideo__FuseControlsVideoImplIVideoPlayerremove_FrameAvailable_fn(EmptyVideo* __this, uDelegate* value)
{
}

// private void Fuse.Controls.VideoImpl.IVideoPlayer.Pause() :41
void EmptyVideo__FuseControlsVideoImplIVideoPlayerPause_fn(EmptyVideo* __this)
{
}

// private void Fuse.Controls.VideoImpl.IVideoPlayer.Play() :42
void EmptyVideo__FuseControlsVideoImplIVideoPlayerPlay_fn(EmptyVideo* __this)
{
}

// private double Fuse.Controls.VideoImpl.IVideoPlayer.get_Position() :34
void EmptyVideo__FuseControlsVideoImplIVideoPlayerget_Position_fn(EmptyVideo* __this, double* __retval)
{
    return *__retval = 0.0, void();
}

// private void Fuse.Controls.VideoImpl.IVideoPlayer.set_Position(double value) :34
void EmptyVideo__FuseControlsVideoImplIVideoPlayerset_Position_fn(EmptyVideo* __this, double* value)
{
}

// private int2 Fuse.Controls.VideoImpl.IVideoPlayer.get_Size() :38
void EmptyVideo__FuseControlsVideoImplIVideoPlayerget_Size_fn(EmptyVideo* __this, ::g::Uno::Int2* __retval)
{
    return *__retval = ::g::Uno::Int2__New1(0), void();
}

// private void Fuse.Controls.VideoImpl.IVideoPlayer.Update() :43
void EmptyVideo__FuseControlsVideoImplIVideoPlayerUpdate_fn(EmptyVideo* __this)
{
}

// private Uno.Graphics.VideoTexture Fuse.Controls.VideoImpl.IVideoPlayer.get_VideoTexture() :39
void EmptyVideo__FuseControlsVideoImplIVideoPlayerget_VideoTexture_fn(EmptyVideo* __this, ::g::Uno::Graphics::VideoTexture** __retval)
{
    return *__retval = NULL, void();
}

// private float Fuse.Controls.VideoImpl.IVideoPlayer.get_Volume() :37
void EmptyVideo__FuseControlsVideoImplIVideoPlayerget_Volume_fn(EmptyVideo* __this, float* __retval)
{
    return *__retval = 0.0f, void();
}

// private void Fuse.Controls.VideoImpl.IVideoPlayer.set_Volume(float value) :37
void EmptyVideo__FuseControlsVideoImplIVideoPlayerset_Volume_fn(EmptyVideo* __this, float* value)
{
}

// public generated EmptyVideo New() :31
void EmptyVideo__New1_fn(EmptyVideo** __retval)
{
    *__retval = EmptyVideo::New1();
}

// private void Uno.IDisposable.Dispose() :40
void EmptyVideo__UnoIDisposableDispose_fn(EmptyVideo* __this)
{
}

// public generated EmptyVideo() [instance] :31
void EmptyVideo::ctor_()
{
}

// public generated EmptyVideo New() [static] :31
EmptyVideo* EmptyVideo::New1()
{
    EmptyVideo* obj1 = (EmptyVideo*)uNew(EmptyVideo_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Video/0.32.14/$.uno
// ---------------------------------------------------------------

// internal sealed class GraphicsVideoService :554
// {
// static GraphicsVideoService() :554
static void GraphicsVideoService__cctor__fn(uType* __type)
{
    GraphicsVideoService::CompletionTimeThreshold_ = 0.05f;
}

static void GraphicsVideoService_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Controls::VideoImpl::IVideoPlayer_typeof();
    ::TYPES[1] = ::g::Uno::Exception_typeof();
    ::TYPES[2] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Controls::VideoImpl::IVideoPlayer_typeof());
    ::TYPES[3] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Exception_typeof());
    ::TYPES[4] = ::g::Fuse::Controls::VideoImpl::IVideoCallbacks_typeof();
    ::TYPES[5] = ::g::Uno::EventHandler_typeof();
    ::TYPES[6] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Exception_typeof());
    ::TYPES[7] = ::g::Uno::IDisposable_typeof();
    type->SetInterfaces(
        ::g::Fuse::Controls::VideoImpl::IVideoService_typeof(), offsetof(GraphicsVideoService_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(GraphicsVideoService_type, interface1));
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::VideoImpl::GraphicsVideoService, _autoPlay), 0,
        ::g::Fuse::Controls::VideoImpl::IVideoCallbacks_typeof(), offsetof(::g::Fuse::Controls::VideoImpl::GraphicsVideoService, _callbacks), 0,
        ::g::Fuse::Controls::VideoImpl::IVideoPlayer_typeof(), offsetof(::g::Fuse::Controls::VideoImpl::GraphicsVideoService, _empty), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::VideoImpl::GraphicsVideoService, _isLooping), 0,
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Controls::VideoImpl::GraphicsVideoService, _loading), 0,
        ::g::Fuse::Controls::VideoImpl::IVideoPlayer_typeof(), offsetof(::g::Fuse::Controls::VideoImpl::GraphicsVideoService, _player), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::VideoImpl::GraphicsVideoService, _volume), 0,
        ::g::Uno::Float_typeof(), (uintptr_t)&::g::Fuse::Controls::VideoImpl::GraphicsVideoService::CompletionTimeThreshold_, uFieldFlagsStatic);
}

GraphicsVideoService_type* GraphicsVideoService_typeof()
{
    static uSStrong<GraphicsVideoService_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(GraphicsVideoService);
    options.TypeSize = sizeof(GraphicsVideoService_type);
    type = (GraphicsVideoService_type*)uClassType::New("Fuse.Controls.VideoImpl.GraphicsVideoService", options);
    type->fp_build_ = GraphicsVideoService_build;
    type->fp_cctor_ = GraphicsVideoService__cctor__fn;
    type->interface0.fp_Play = (void(*)(uObject*))GraphicsVideoService__FuseControlsVideoImplIVideoServicePlay_fn;
    type->interface0.fp_Pause = (void(*)(uObject*))GraphicsVideoService__FuseControlsVideoImplIVideoServicePause_fn;
    type->interface0.fp_Load = (void(*)(uObject*, uString*))GraphicsVideoService__FuseControlsVideoImplIVideoServiceLoad_fn;
    type->interface0.fp_Load1 = (void(*)(uObject*, ::g::Uno::UX::FileSource*))GraphicsVideoService__FuseControlsVideoImplIVideoServiceLoad1_fn;
    type->interface0.fp_Update = (void(*)(uObject*))GraphicsVideoService__FuseControlsVideoImplIVideoServiceUpdate_fn;
    type->interface0.fp_Unload = (void(*)(uObject*))GraphicsVideoService__FuseControlsVideoImplIVideoServiceUnload_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))GraphicsVideoService__UnoIDisposableDispose_fn;
    type->interface0.fp_get_Duration = (void(*)(uObject*, double*))GraphicsVideoService__FuseControlsVideoImplIVideoServiceget_Duration_fn;
    type->interface0.fp_get_Size = (void(*)(uObject*, ::g::Uno::Int2*))GraphicsVideoService__FuseControlsVideoImplIVideoServiceget_Size_fn;
    type->interface0.fp_get_VideoTexture = (void(*)(uObject*, ::g::Uno::Graphics::VideoTexture**))GraphicsVideoService__FuseControlsVideoImplIVideoServiceget_VideoTexture_fn;
    type->interface0.fp_set_Volume = (void(*)(uObject*, float*))GraphicsVideoService__FuseControlsVideoImplIVideoServiceset_Volume_fn;
    type->interface0.fp_get_Position = (void(*)(uObject*, double*))GraphicsVideoService__FuseControlsVideoImplIVideoServiceget_Position_fn;
    type->interface0.fp_set_Position = (void(*)(uObject*, double*))GraphicsVideoService__FuseControlsVideoImplIVideoServiceset_Position_fn;
    type->interface0.fp_set_IsLooping = (void(*)(uObject*, bool*))GraphicsVideoService__FuseControlsVideoImplIVideoServiceset_IsLooping_fn;
    type->interface0.fp_set_AutoPlay = (void(*)(uObject*, bool*))GraphicsVideoService__FuseControlsVideoImplIVideoServiceset_AutoPlay_fn;
    type->interface0.fp_get_IsValid = (void(*)(uObject*, bool*))GraphicsVideoService__FuseControlsVideoImplIVideoServiceget_IsValid_fn;
    return type;
}

// public GraphicsVideoService(Fuse.Controls.VideoImpl.IVideoCallbacks callbacks) :568
void GraphicsVideoService__ctor__fn(GraphicsVideoService* __this, uObject* callbacks)
{
    __this->ctor_(callbacks);
}

// private void Fuse.Controls.VideoImpl.IVideoService.set_AutoPlay(bool value) :619
void GraphicsVideoService__FuseControlsVideoImplIVideoServiceset_AutoPlay_fn(GraphicsVideoService* __this, bool* value)
{
    bool value_ = *value;
    __this->_autoPlay = value_;
}

// private double Fuse.Controls.VideoImpl.IVideoService.get_Duration() :590
void GraphicsVideoService__FuseControlsVideoImplIVideoServiceget_Duration_fn(GraphicsVideoService* __this, double* __retval)
{
    return *__retval = ::g::Fuse::Controls::VideoImpl::IVideoPlayer::Duration(uInterface(uPtr(__this->Player()), ::TYPES[0/*Fuse.Controls.VideoImpl.IVideoPlayer*/])), void();
}

// private void Fuse.Controls.VideoImpl.IVideoService.set_IsLooping(bool value) :616
void GraphicsVideoService__FuseControlsVideoImplIVideoServiceset_IsLooping_fn(GraphicsVideoService* __this, bool* value)
{
    bool value_ = *value;
    __this->_isLooping = value_;
}

// private bool Fuse.Controls.VideoImpl.IVideoService.get_IsValid() :621
void GraphicsVideoService__FuseControlsVideoImplIVideoServiceget_IsValid_fn(GraphicsVideoService* __this, bool* __retval)
{
    return *__retval = __this->_player != NULL, void();
}

// private void Fuse.Controls.VideoImpl.IVideoService.Load(string url) :623
void GraphicsVideoService__FuseControlsVideoImplIVideoServiceLoad_fn(GraphicsVideoService* __this, uString* url)
{
    try
    {
        __this->Reset();
        __this->_loading = ::g::Fuse::Controls::VideoImpl::LoadingClosure::Load(url, uDelegate::New(::TYPES[2/*Uno.Action<Fuse.Controls.VideoImpl.IVideoPlayer>*/], (void*)GraphicsVideoService__OnLoaded_fn, __this), uDelegate::New(::TYPES[3/*Uno.Action<Uno.Exception>*/], (void*)GraphicsVideoService__OnLoadingError_fn, __this));
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::Controls::VideoImpl::IVideoCallbacks::OnError(uInterface(uPtr(__this->_callbacks), ::TYPES[4/*Fuse.Controls.VideoImpl.IVideoCallbacks*/]), e);
        return;
    }

    ::g::Fuse::Controls::VideoImpl::IVideoCallbacks::OnLoading(uInterface(uPtr(__this->_callbacks), ::TYPES[4/*Fuse.Controls.VideoImpl.IVideoCallbacks*/]));
}

// private void Fuse.Controls.VideoImpl.IVideoService.Load(Uno.UX.FileSource file) :638
void GraphicsVideoService__FuseControlsVideoImplIVideoServiceLoad1_fn(GraphicsVideoService* __this, ::g::Uno::UX::FileSource* file)
{
    try
    {
        __this->Reset();
        __this->_loading = ::g::Fuse::Controls::VideoImpl::LoadingClosure::Load1(file, uDelegate::New(::TYPES[2/*Uno.Action<Fuse.Controls.VideoImpl.IVideoPlayer>*/], (void*)GraphicsVideoService__OnLoaded_fn, __this), uDelegate::New(::TYPES[3/*Uno.Action<Uno.Exception>*/], (void*)GraphicsVideoService__OnLoadingError_fn, __this));
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::Controls::VideoImpl::IVideoCallbacks::OnError(uInterface(uPtr(__this->_callbacks), ::TYPES[4/*Fuse.Controls.VideoImpl.IVideoCallbacks*/]), e);
        return;
    }

    ::g::Fuse::Controls::VideoImpl::IVideoCallbacks::OnLoading(uInterface(uPtr(__this->_callbacks), ::TYPES[4/*Fuse.Controls.VideoImpl.IVideoCallbacks*/]));
}

// private void Fuse.Controls.VideoImpl.IVideoService.Pause() :583
void GraphicsVideoService__FuseControlsVideoImplIVideoServicePause_fn(GraphicsVideoService* __this)
{
    ::g::Fuse::Controls::VideoImpl::IVideoPlayer::Pause(uInterface(uPtr(__this->Player()), ::TYPES[0/*Fuse.Controls.VideoImpl.IVideoPlayer*/]));
}

// private void Fuse.Controls.VideoImpl.IVideoService.Play() :573
void GraphicsVideoService__FuseControlsVideoImplIVideoServicePlay_fn(GraphicsVideoService* __this)
{
    if (__this->IsCompleted())
        ::g::Fuse::Controls::VideoImpl::IVideoPlayer::Position(uInterface(uPtr(__this->Player()), ::TYPES[0/*Fuse.Controls.VideoImpl.IVideoPlayer*/]), 0.0);

    ::g::Fuse::Controls::VideoImpl::IVideoPlayer::Play(uInterface(uPtr(__this->Player()), ::TYPES[0/*Fuse.Controls.VideoImpl.IVideoPlayer*/]));
}

// private double Fuse.Controls.VideoImpl.IVideoService.get_Position() :611
void GraphicsVideoService__FuseControlsVideoImplIVideoServiceget_Position_fn(GraphicsVideoService* __this, double* __retval)
{
    return *__retval = ::g::Fuse::Controls::VideoImpl::IVideoPlayer::Position(uInterface(uPtr(__this->Player()), ::TYPES[0/*Fuse.Controls.VideoImpl.IVideoPlayer*/])), void();
}

// private void Fuse.Controls.VideoImpl.IVideoService.set_Position(double value) :612
void GraphicsVideoService__FuseControlsVideoImplIVideoServiceset_Position_fn(GraphicsVideoService* __this, double* value)
{
    double value_ = *value;
    ::g::Fuse::Controls::VideoImpl::IVideoPlayer::Position(uInterface(uPtr(__this->Player()), ::TYPES[0/*Fuse.Controls.VideoImpl.IVideoPlayer*/]), value_);
}

// private int2 Fuse.Controls.VideoImpl.IVideoService.get_Size() :595
void GraphicsVideoService__FuseControlsVideoImplIVideoServiceget_Size_fn(GraphicsVideoService* __this, ::g::Uno::Int2* __retval)
{
    return *__retval = ::g::Fuse::Controls::VideoImpl::IVideoPlayer::Size(uInterface(uPtr(__this->Player()), ::TYPES[0/*Fuse.Controls.VideoImpl.IVideoPlayer*/])), void();
}

// private void Fuse.Controls.VideoImpl.IVideoService.Unload() :684
void GraphicsVideoService__FuseControlsVideoImplIVideoServiceUnload_fn(GraphicsVideoService* __this)
{
    __this->Reset();
}

// private void Fuse.Controls.VideoImpl.IVideoService.Update() :662
void GraphicsVideoService__FuseControlsVideoImplIVideoServiceUpdate_fn(GraphicsVideoService* __this)
{
    if (__this->_player != NULL)
    {
        ::g::Fuse::Controls::VideoImpl::IVideoPlayer::Update(uInterface(uPtr(__this->_player), ::TYPES[0/*Fuse.Controls.VideoImpl.IVideoPlayer*/]));

        if (__this->IsCompleted())
        {
            if (__this->_isLooping)
            {
                ::g::Fuse::Controls::VideoImpl::IVideoPlayer::Pause(uInterface(uPtr(__this->_player), ::TYPES[0/*Fuse.Controls.VideoImpl.IVideoPlayer*/]));
                ::g::Fuse::Controls::VideoImpl::IVideoPlayer::Position(uInterface(uPtr(__this->_player), ::TYPES[0/*Fuse.Controls.VideoImpl.IVideoPlayer*/]), 0.0);
                ::g::Fuse::Controls::VideoImpl::IVideoPlayer::Play(uInterface(uPtr(__this->_player), ::TYPES[0/*Fuse.Controls.VideoImpl.IVideoPlayer*/]));
            }
            else
            {
                ::g::Fuse::Controls::VideoImpl::IVideoPlayer::Pause(uInterface(uPtr(__this->_player), ::TYPES[0/*Fuse.Controls.VideoImpl.IVideoPlayer*/]));
                ::g::Fuse::Controls::VideoImpl::IVideoCallbacks::OnCompleted(uInterface(uPtr(__this->_callbacks), ::TYPES[4/*Fuse.Controls.VideoImpl.IVideoCallbacks*/]));
            }
        }
    }
}

// private Uno.Graphics.VideoTexture Fuse.Controls.VideoImpl.IVideoService.get_VideoTexture() :600
void GraphicsVideoService__FuseControlsVideoImplIVideoServiceget_VideoTexture_fn(GraphicsVideoService* __this, ::g::Uno::Graphics::VideoTexture** __retval)
{
    return *__retval = ::g::Fuse::Controls::VideoImpl::IVideoPlayer::VideoTexture(uInterface(uPtr(__this->Player()), ::TYPES[0/*Fuse.Controls.VideoImpl.IVideoPlayer*/])), void();
}

// private void Fuse.Controls.VideoImpl.IVideoService.set_Volume(float value) :606
void GraphicsVideoService__FuseControlsVideoImplIVideoServiceset_Volume_fn(GraphicsVideoService* __this, float* value)
{
    float value_ = *value;
    ::g::Fuse::Controls::VideoImpl::IVideoPlayer::Volume(uInterface(uPtr(__this->Player()), ::TYPES[0/*Fuse.Controls.VideoImpl.IVideoPlayer*/]), __this->_volume = value_);
}

// private bool get_IsCompleted() :655
void GraphicsVideoService__get_IsCompleted_fn(GraphicsVideoService* __this, bool* __retval)
{
    *__retval = __this->IsCompleted();
}

// public GraphicsVideoService New(Fuse.Controls.VideoImpl.IVideoCallbacks callbacks) :568
void GraphicsVideoService__New1_fn(uObject* callbacks, GraphicsVideoService** __retval)
{
    *__retval = GraphicsVideoService::New1(callbacks);
}

// private void OnLoaded(Fuse.Controls.VideoImpl.IVideoPlayer player) :719
void GraphicsVideoService__OnLoaded_fn(GraphicsVideoService* __this, uObject* player)
{
    __this->OnLoaded(player);
}

// private void OnLoadingError(Uno.Exception e) :728
void GraphicsVideoService__OnLoadingError_fn(GraphicsVideoService* __this, ::g::Uno::Exception* e)
{
    __this->OnLoadingError(e);
}

// private void OnPlayerError(object sender, Uno.Exception e) :733
void GraphicsVideoService__OnPlayerError_fn(GraphicsVideoService* __this, uObject* sender, ::g::Uno::Exception* e)
{
    __this->OnPlayerError(sender, e);
}

// private void OnPlayerFrameAvailable(object sender, Uno.EventArgs args) :738
void GraphicsVideoService__OnPlayerFrameAvailable_fn(GraphicsVideoService* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnPlayerFrameAvailable(sender, args);
}

// private Fuse.Controls.VideoImpl.IVideoPlayer get_Player() :560
void GraphicsVideoService__get_Player_fn(GraphicsVideoService* __this, uObject** __retval)
{
    *__retval = __this->Player();
}

// private void Reset() :695
void GraphicsVideoService__Reset_fn(GraphicsVideoService* __this)
{
    __this->Reset();
}

// private void SetPlayer(Fuse.Controls.VideoImpl.IVideoPlayer player) :711
void GraphicsVideoService__SetPlayer_fn(GraphicsVideoService* __this, uObject* player)
{
    __this->SetPlayer(player);
}

// private void Uno.IDisposable.Dispose() :689
void GraphicsVideoService__UnoIDisposableDispose_fn(GraphicsVideoService* __this)
{
    __this->Reset();
    __this->_callbacks = NULL;
}

float GraphicsVideoService::CompletionTimeThreshold_;

// public GraphicsVideoService(Fuse.Controls.VideoImpl.IVideoCallbacks callbacks) [instance] :568
void GraphicsVideoService::ctor_(uObject* callbacks)
{
    _empty = (uObject*)::g::Fuse::Controls::VideoImpl::EmptyVideo::New1();
    _volume = 1.0f;
    _callbacks = callbacks;
}

// private bool get_IsCompleted() [instance] :655
bool GraphicsVideoService::IsCompleted()
{
    return ::g::Uno::Math::Abs(::g::Fuse::Controls::VideoImpl::IVideoPlayer::Duration(uInterface(uPtr(Player()), ::TYPES[0/*Fuse.Controls.VideoImpl.IVideoPlayer*/])) - ::g::Fuse::Controls::VideoImpl::IVideoPlayer::Position(uInterface(uPtr(Player()), ::TYPES[0/*Fuse.Controls.VideoImpl.IVideoPlayer*/]))) < (double)GraphicsVideoService::CompletionTimeThreshold();
}

// private void OnLoaded(Fuse.Controls.VideoImpl.IVideoPlayer player) [instance] :719
void GraphicsVideoService::OnLoaded(uObject* player)
{
    SetPlayer(player);
    ::g::Fuse::Controls::VideoImpl::IVideoCallbacks::OnReady(uInterface(uPtr(_callbacks), ::TYPES[4/*Fuse.Controls.VideoImpl.IVideoCallbacks*/]));

    if (_autoPlay)
        ::g::Fuse::Controls::VideoImpl::IVideoPlayer::Play(uInterface(uPtr(Player()), ::TYPES[0/*Fuse.Controls.VideoImpl.IVideoPlayer*/]));
}

// private void OnLoadingError(Uno.Exception e) [instance] :728
void GraphicsVideoService::OnLoadingError(::g::Uno::Exception* e)
{
    ::g::Fuse::Controls::VideoImpl::IVideoCallbacks::OnError(uInterface(uPtr(_callbacks), ::TYPES[4/*Fuse.Controls.VideoImpl.IVideoCallbacks*/]), e);
}

// private void OnPlayerError(object sender, Uno.Exception e) [instance] :733
void GraphicsVideoService::OnPlayerError(uObject* sender, ::g::Uno::Exception* e)
{
    ::g::Fuse::Controls::VideoImpl::IVideoCallbacks::OnError(uInterface(uPtr(_callbacks), ::TYPES[4/*Fuse.Controls.VideoImpl.IVideoCallbacks*/]), e);
}

// private void OnPlayerFrameAvailable(object sender, Uno.EventArgs args) [instance] :738
void GraphicsVideoService::OnPlayerFrameAvailable(uObject* sender, ::g::Uno::EventArgs* args)
{
    ::g::Fuse::Controls::VideoImpl::IVideoCallbacks::OnFrameAvailable(uInterface(uPtr(_callbacks), ::TYPES[4/*Fuse.Controls.VideoImpl.IVideoCallbacks*/]));
}

// private Fuse.Controls.VideoImpl.IVideoPlayer get_Player() [instance] :560
uObject* GraphicsVideoService::Player()
{
    uObject* ind1 = _player;
    return (ind1 != NULL) ? ind1 : (uObject*)_empty;
}

// private void Reset() [instance] :695
void GraphicsVideoService::Reset()
{
    if (_player != NULL)
    {
        ::g::Fuse::Controls::VideoImpl::IVideoPlayer::remove_FrameAvailable(uInterface(uPtr(_player), ::TYPES[0/*Fuse.Controls.VideoImpl.IVideoPlayer*/]), uDelegate::New(::TYPES[5/*Uno.EventHandler*/], (void*)GraphicsVideoService__OnPlayerFrameAvailable_fn, this));
        ::g::Fuse::Controls::VideoImpl::IVideoPlayer::remove_ErrorOccurred(uInterface(uPtr(_player), ::TYPES[0/*Fuse.Controls.VideoImpl.IVideoPlayer*/]), uDelegate::New(::TYPES[6/*Uno.EventHandler<Uno.Exception>*/], (void*)GraphicsVideoService__OnPlayerError_fn, this));
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_player), ::TYPES[7/*Uno.IDisposable*/]));
        _player = NULL;
    }

    if (_loading != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_loading), ::TYPES[7/*Uno.IDisposable*/]));
        _loading = NULL;
    }
}

// private void SetPlayer(Fuse.Controls.VideoImpl.IVideoPlayer player) [instance] :711
void GraphicsVideoService::SetPlayer(uObject* player)
{
    _player = player;
    ::g::Fuse::Controls::VideoImpl::IVideoPlayer::add_FrameAvailable(uInterface(uPtr(_player), ::TYPES[0/*Fuse.Controls.VideoImpl.IVideoPlayer*/]), uDelegate::New(::TYPES[5/*Uno.EventHandler*/], (void*)GraphicsVideoService__OnPlayerFrameAvailable_fn, this));
    ::g::Fuse::Controls::VideoImpl::IVideoPlayer::add_ErrorOccurred(uInterface(uPtr(_player), ::TYPES[0/*Fuse.Controls.VideoImpl.IVideoPlayer*/]), uDelegate::New(::TYPES[6/*Uno.EventHandler<Uno.Exception>*/], (void*)GraphicsVideoService__OnPlayerError_fn, this));
    ::g::Fuse::Controls::VideoImpl::IVideoPlayer::Volume(uInterface(uPtr(_player), ::TYPES[0/*Fuse.Controls.VideoImpl.IVideoPlayer*/]), _volume);
}

// public GraphicsVideoService New(Fuse.Controls.VideoImpl.IVideoCallbacks callbacks) [static] :568
GraphicsVideoService* GraphicsVideoService::New1(uObject* callbacks)
{
    GraphicsVideoService* obj2 = (GraphicsVideoService*)uNew(GraphicsVideoService_typeof());
    obj2->ctor_(callbacks);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Video/0.32.14/$.uno
// ---------------------------------------------------------------

// internal abstract interface IVideoCallbacks :503
// {
uInterfaceType* IVideoCallbacks_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.VideoImpl.IVideoCallbacks", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Video/0.32.14/$.uno
// ---------------------------------------------------------------

// internal abstract interface IVideoPlayer :13
// {
uInterfaceType* IVideoPlayer_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.VideoImpl.IVideoPlayer", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Video/0.32.14/$.uno
// ---------------------------------------------------------------

// internal abstract interface IVideoService :478
// {
uInterfaceType* IVideoService_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.VideoImpl.IVideoService", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Video/0.32.14/$.uno
// ---------------------------------------------------------------

// internal sealed class LoadingClosure :512
// {
static void LoadingClosure_build(uType* type)
{
    ::TYPES[7] = ::g::Uno::IDisposable_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(LoadingClosure_type, interface0));
    type->SetFields(0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Exception_typeof()), offsetof(::g::Fuse::Controls::VideoImpl::LoadingClosure, _error), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::VideoImpl::LoadingClosure, _isDisposed), 0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Controls::VideoImpl::IVideoPlayer_typeof()), offsetof(::g::Fuse::Controls::VideoImpl::LoadingClosure, _loaded), 0,
        ::g::Uno::Threading::Future1_typeof()->MakeType(::g::Fuse::Controls::VideoImpl::IVideoPlayer_typeof()), offsetof(::g::Fuse::Controls::VideoImpl::LoadingClosure, _loaderFuture), 0,
        ::g::Uno::Threading::Future1_typeof()->MakeType(::g::Fuse::Controls::VideoImpl::IVideoPlayer_typeof()), offsetof(::g::Fuse::Controls::VideoImpl::LoadingClosure, _thenFuture), 0);
}

LoadingClosure_type* LoadingClosure_typeof()
{
    static uSStrong<LoadingClosure_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(LoadingClosure);
    options.TypeSize = sizeof(LoadingClosure_type);
    type = (LoadingClosure_type*)uClassType::New("Fuse.Controls.VideoImpl.LoadingClosure", options);
    type->fp_build_ = LoadingClosure_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))LoadingClosure__UnoIDisposableDispose_fn;
    return type;
}

// private LoadingClosure(Uno.Threading.Future<Fuse.Controls.VideoImpl.IVideoPlayer> loadedFuture, Uno.Action<Fuse.Controls.VideoImpl.IVideoPlayer> loaded, Uno.Action<Uno.Exception> error) :530
void LoadingClosure__ctor__fn(LoadingClosure* __this, ::g::Uno::Threading::Future1* loadedFuture, uDelegate* loaded, uDelegate* error)
{
    __this->ctor_(loadedFuture, loaded, error);
}

// public static Uno.IDisposable Load(string url, Uno.Action<Fuse.Controls.VideoImpl.IVideoPlayer> loaded, Uno.Action<Uno.Exception> error) :514
void LoadingClosure__Load_fn(uString* url, uDelegate* loaded, uDelegate* error, uObject** __retval)
{
    *__retval = LoadingClosure::Load(url, loaded, error);
}

// public static Uno.IDisposable Load(Uno.UX.FileSource file, Uno.Action<Fuse.Controls.VideoImpl.IVideoPlayer> loaded, Uno.Action<Uno.Exception> error) :519
void LoadingClosure__Load1_fn(::g::Uno::UX::FileSource* file, uDelegate* loaded, uDelegate* error, uObject** __retval)
{
    *__retval = LoadingClosure::Load1(file, loaded, error);
}

// private LoadingClosure New(Uno.Threading.Future<Fuse.Controls.VideoImpl.IVideoPlayer> loadedFuture, Uno.Action<Fuse.Controls.VideoImpl.IVideoPlayer> loaded, Uno.Action<Uno.Exception> error) :530
void LoadingClosure__New1_fn(::g::Uno::Threading::Future1* loadedFuture, uDelegate* loaded, uDelegate* error, LoadingClosure** __retval)
{
    *__retval = LoadingClosure::New1(loadedFuture, loaded, error);
}

// private void Uno.IDisposable.Dispose() :542
void LoadingClosure__UnoIDisposableDispose_fn(LoadingClosure* __this)
{
    if (!__this->_isDisposed)
    {
        uPtr(__this->_loaderFuture)->Cancel(false);
        uPtr(__this->_loaderFuture)->Dispose();
        uPtr(__this->_thenFuture)->Dispose();
        __this->_isDisposed = true;
    }
}

// private LoadingClosure(Uno.Threading.Future<Fuse.Controls.VideoImpl.IVideoPlayer> loadedFuture, Uno.Action<Fuse.Controls.VideoImpl.IVideoPlayer> loaded, Uno.Action<Uno.Exception> error) [instance] :530
void LoadingClosure::ctor_(::g::Uno::Threading::Future1* loadedFuture, uDelegate* loaded, uDelegate* error)
{
    _loaded = loaded;
    _error = error;
    _loaderFuture = loadedFuture;
    _thenFuture = ((::g::Uno::Threading::Future1*)uPtr(_loaderFuture)->Then1(_loaded, _error));
}

// public static Uno.IDisposable Load(string url, Uno.Action<Fuse.Controls.VideoImpl.IVideoPlayer> loaded, Uno.Action<Uno.Exception> error) [static] :514
uObject* LoadingClosure::Load(uString* url, uDelegate* loaded, uDelegate* error)
{
    return (uObject*)LoadingClosure::New1(::g::Fuse::Controls::VideoImpl::VideoLoader::Load(url), loaded, error);
}

// public static Uno.IDisposable Load(Uno.UX.FileSource file, Uno.Action<Fuse.Controls.VideoImpl.IVideoPlayer> loaded, Uno.Action<Uno.Exception> error) [static] :519
uObject* LoadingClosure::Load1(::g::Uno::UX::FileSource* file, uDelegate* loaded, uDelegate* error)
{
    return (uObject*)LoadingClosure::New1(::g::Fuse::Controls::VideoImpl::VideoLoader::Load1(file), loaded, error);
}

// private LoadingClosure New(Uno.Threading.Future<Fuse.Controls.VideoImpl.IVideoPlayer> loadedFuture, Uno.Action<Fuse.Controls.VideoImpl.IVideoPlayer> loaded, Uno.Action<Uno.Exception> error) [static] :530
LoadingClosure* LoadingClosure::New1(::g::Uno::Threading::Future1* loadedFuture, uDelegate* loaded, uDelegate* error)
{
    LoadingClosure* obj1 = (LoadingClosure*)uNew(LoadingClosure_typeof());
    obj1->ctor_(loadedFuture, loaded, error);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Video/0.32.14/$.uno
// ---------------------------------------------------------------

// internal sealed class Scale9Rectangle :1186
// {
// static Scale9Rectangle() :1186
static void Scale9Rectangle__cctor__fn(uType* __type)
{
    Scale9Rectangle::Impl_ = Scale9Rectangle::New1();
}

static void Scale9Rectangle_build(uType* type)
{
    ::TYPES[8] = ::g::Fuse::IViewport_typeof();
    ::TYPES[9] = ::g::Uno::UShort_typeof()->Array();
    ::TYPES[10] = ::g::Uno::Float3_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Controls::VideoImpl::Scale9Rectangle, _draw_a20daf7), 0,
        ::g::Uno::UShort_typeof()->Array(), offsetof(::g::Fuse::Controls::VideoImpl::Scale9Rectangle, Draw_indices_a20daf7_1_2_12), 0,
        ::g::Uno::Graphics::IndexBuffer_typeof(), offsetof(::g::Fuse::Controls::VideoImpl::Scale9Rectangle, Draw_xv_a20daf7_1_3_2), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Controls::VideoImpl::Scale9Rectangle, Draw_xv_a20daf7_1_3_3), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Controls::VideoImpl::Scale9Rectangle, Draw_yv_a20daf7_1_4_6), 0,
        Scale9Rectangle_typeof(), (uintptr_t)&::g::Fuse::Controls::VideoImpl::Scale9Rectangle::Impl_, uFieldFlagsStatic);
}

uType* Scale9Rectangle_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(Scale9Rectangle);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.VideoImpl.Scale9Rectangle", options);
    type->fp_build_ = Scale9Rectangle_build;
    type->fp_ctor_ = (void*)Scale9Rectangle__New1_fn;
    type->fp_cctor_ = Scale9Rectangle__cctor__fn;
    return type;
}

// public generated Scale9Rectangle() :1186
void Scale9Rectangle__ctor__fn(Scale9Rectangle* __this)
{
    __this->ctor_();
}

// public void Draw(Fuse.DrawContext dc, Fuse.Visual element, float2 size, float2 scaleTextureSize, Uno.Graphics.VideoTexture tex, float4 margin) :1190
void Scale9Rectangle__Draw_fn(Scale9Rectangle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* element, ::g::Uno::Float2* size, ::g::Uno::Float2* scaleTextureSize, ::g::Uno::Graphics::VideoTexture* tex, ::g::Uno::Float4* margin)
{
    __this->Draw(dc, element, *size, *scaleTextureSize, tex, *margin);
}

// private generated void init_DrawCalls() :1186
void Scale9Rectangle__init_DrawCalls_fn(Scale9Rectangle* __this)
{
    __this->init_DrawCalls();
}

// public generated Scale9Rectangle New() :1186
void Scale9Rectangle__New1_fn(Scale9Rectangle** __retval)
{
    *__retval = Scale9Rectangle::New1();
}

uSStrong<Scale9Rectangle*> Scale9Rectangle::Impl_;

// public generated Scale9Rectangle() [instance] :1186
void Scale9Rectangle::ctor_()
{
    init_DrawCalls();
}

// public void Draw(Fuse.DrawContext dc, Fuse.Visual element, float2 size, float2 scaleTextureSize, Uno.Graphics.VideoTexture tex, float4 margin) [instance] :1190
void Scale9Rectangle::Draw(::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* element, ::g::Uno::Float2 size, ::g::Uno::Float2 scaleTextureSize, ::g::Uno::Graphics::VideoTexture* tex, ::g::Uno::Float4 margin)
{
    _draw_a20daf7.BlendEnabled(true);
    _draw_a20daf7.DepthTestEnabled(false);
    _draw_a20daf7.CullFace(0);
    _draw_a20daf7.BlendSrcRgb(2);
    _draw_a20daf7.BlendDstRgb(3);
    _draw_a20daf7.BlendDstAlpha(3);
    _draw_a20daf7.Use();
    _draw_a20daf7.Attrib1(0, 3, Draw_xv_a20daf7_1_3_3, 12, 0);
    _draw_a20daf7.Attrib1(1, 3, Draw_yv_a20daf7_1_4_6, 12, 0);
    _draw_a20daf7.Uniform(2, margin.X);
    _draw_a20daf7.Uniform(3, size.X - margin.Z);
    _draw_a20daf7.Uniform(4, size.X);
    _draw_a20daf7.Uniform(5, margin.Y);
    _draw_a20daf7.Uniform(6, size.Y - margin.W);
    _draw_a20daf7.Uniform(7, size.Y);
    _draw_a20daf7.Uniform12(8, uPtr(element)->WorldTransform());
    _draw_a20daf7.Uniform12(9, ::g::Fuse::IViewport::ViewProjectionTransform(uInterface(uPtr(uPtr(dc)->Viewport()), ::TYPES[8/*Fuse.IViewport*/])));
    _draw_a20daf7.Uniform(10, scaleTextureSize.X - margin.Z);
    _draw_a20daf7.Uniform(11, scaleTextureSize.X);
    _draw_a20daf7.Uniform(12, scaleTextureSize.Y - margin.W);
    _draw_a20daf7.Uniform(13, scaleTextureSize.Y);
    _draw_a20daf7.Uniform2(14, scaleTextureSize);
    _draw_a20daf7.Sampler6(15, tex);
    _draw_a20daf7.Draw(uPtr(Draw_indices_a20daf7_1_2_12)->Length(), 2, Draw_xv_a20daf7_1_3_2);
}

// private generated void init_DrawCalls() [instance] :1186
void Scale9Rectangle::init_DrawCalls()
{
    uArray* indices_a20daf7_1_2_1 = uArray::Init<int>(::TYPES[9/*ushort[]*/], 54, 0, 4, 5, 0, 5, 1, 1, 5, 6, 1, 6, 2, 2, 6, 7, 2, 7, 3, 4, 8, 9, 4, 9, 5, 5, 9, 10, 5, 10, 6, 6, 10, 11, 6, 11, 7, 8, 12, 13, 8, 13, 9, 9, 13, 14, 9, 14, 10, 10, 14, 15, 10, 15, 11);
    Draw_xv_a20daf7_1_3_2 = ::g::Uno::Graphics::IndexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer9(indices_a20daf7_1_2_1), 0);
    Draw_xv_a20daf7_1_3_3 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer4(uArray::Init< ::g::Uno::Float3>(::TYPES[10/*float3[]*/], 16, ::g::Uno::Float3__New2(0.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(1.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 1.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 1.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(1.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 1.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 1.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(1.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 1.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 1.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(1.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 1.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 1.0f))), 0);
    Draw_yv_a20daf7_1_4_6 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer4(uArray::Init< ::g::Uno::Float3>(::TYPES[10/*float3[]*/], 16, ::g::Uno::Float3__New2(0.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(1.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(1.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(1.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(1.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 1.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 1.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 1.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 1.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 1.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 1.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 1.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 1.0f))), 0);
    Draw_indices_a20daf7_1_2_12 = indices_a20daf7_1_2_1;
    _draw_a20daf7 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseControlsVideo_bundle::Scale9Rectangleb08a8ede());
}

// public generated Scale9Rectangle New() [static] :1186
Scale9Rectangle* Scale9Rectangle::New1()
{
    Scale9Rectangle* obj1 = (Scale9Rectangle*)uNew(Scale9Rectangle_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Video/0.32.14/$.uno
// ---------------------------------------------------------------

// internal static class VideoDiskCache :759
// {
// static VideoDiskCache() :765
static void VideoDiskCache__cctor__fn(uType* __type)
{
    VideoDiskCache::_files_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[11/*Uno.Collections.Dictionary<string, string>*/]));
    uPtr(uPtr(::g::Uno::Application::Current())->Window())->add_Closed(uDelegate::New(::TYPES[5/*Uno.EventHandler*/], (void*)VideoDiskCache__OnWindowClosed_fn));
}

static void VideoDiskCache_build(uType* type)
{
    ::STRINGS[0] = uString::Const("/tempVideo");
    ::STRINGS[1] = uString::Const(".");
    ::STRINGS[2] = uString::Const("Deleting temporary file: ");
    ::STRINGS[3] = uString::Const("/usr/local/share/uno/Packages/Fuse.Controls.Video/0.32.14/$.uno");
    ::TYPES[11] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof());
    ::TYPES[5] = ::g::Uno::EventHandler_typeof();
    ::TYPES[12] = ::g::Uno::Char_typeof()->Array();
    ::TYPES[13] = ::g::Uno::Int_typeof();
    ::TYPES[14] = ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof());
    ::TYPES[15] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof());
    type->SetFields(0,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Fuse::Controls::VideoImpl::VideoDiskCache::_fileCount_, uFieldFlagsStatic,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof()), (uintptr_t)&::g::Fuse::Controls::VideoImpl::VideoDiskCache::_files_, uFieldFlagsStatic);
}

uClassType* VideoDiskCache_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.VideoImpl.VideoDiskCache", options);
    type->fp_build_ = VideoDiskCache_build;
    type->fp_cctor_ = VideoDiskCache__cctor__fn;
    return type;
}

// public static string GetFileExtension(string fileName) :796
void VideoDiskCache__GetFileExtension_fn(uString* fileName, uString** __retval)
{
    *__retval = VideoDiskCache::GetFileExtension(fileName);
}

// public static string GetFilePath(Uno.UX.FileSource fileSource) :783
void VideoDiskCache__GetFilePath_fn(::g::Uno::UX::FileSource* fileSource, uString** __retval)
{
    *__retval = VideoDiskCache::GetFilePath(fileSource);
}

// private static void OnWindowClosed(object sender, Uno.EventArgs args) :770
void VideoDiskCache__OnWindowClosed_fn(uObject* sender, ::g::Uno::EventArgs* args)
{
    VideoDiskCache::OnWindowClosed(sender, args);
}

int VideoDiskCache::_fileCount_;
uSStrong< ::g::Uno::Collections::Dictionary*> VideoDiskCache::_files_;

// public static string GetFileExtension(string fileName) [static] :796
uString* VideoDiskCache::GetFileExtension(uString* fileName)
{
    VideoDiskCache_typeof()->Init();
    uArray* strings = ::g::Uno::String::Split(uPtr(fileName), uArray::Init<int>(::TYPES[12/*char[]*/], 1, '.'));
    return uPtr(strings)->Strong<uString*>(uPtr(strings)->Length() - 1);
}

// public static string GetFilePath(Uno.UX.FileSource fileSource) [static] :783
uString* VideoDiskCache::GetFilePath(::g::Uno::UX::FileSource* fileSource)
{
    VideoDiskCache_typeof()->Init();
    bool ret2;
    uString* ret3;

    if (!(::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(VideoDiskCache::_files()), uPtr(fileSource)->Name, &ret2), ret2))
    {
        uArray* bytes = uPtr(fileSource)->ReadAllBytes();
        uString* path = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::IO::Directory::GetUserDirectory(1), ::STRINGS[0/*"/tempVideo"*/]), ::g::Uno::Int::ToString(VideoDiskCache::_fileCount(), ::TYPES[13/*int*/])), ::STRINGS[1/*"."*/]), VideoDiskCache::GetFileExtension(fileSource->Name));
        VideoDiskCache::_fileCount()++;
        ::g::Uno::IO::File::WriteAllBytes(path, bytes);
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(VideoDiskCache::_files()), fileSource->Name, path);
    }

    return (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(VideoDiskCache::_files()), uPtr(fileSource)->Name, &ret3), ret3);
}

// private static void OnWindowClosed(object sender, Uno.EventArgs args) [static] :770
void VideoDiskCache::OnWindowClosed(uObject* sender, ::g::Uno::EventArgs* args)
{
    VideoDiskCache_typeof()->Init();
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong<uString*> > ret4;
    uPtr(uPtr(::g::Uno::Application::Current())->Window())->remove_Closed(uDelegate::New(::TYPES[5/*Uno.EventHandler*/], (void*)VideoDiskCache__OnWindowClosed_fn));

    for (::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong<uString*> > enum1 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(VideoDiskCache::_files()), &ret4), ret4); enum1.MoveNext(::TYPES[14/*Uno.Collections.Dictionary<string, string>.Enumerator*/]); )
    {
        ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, uStrong<uString*> > pair = enum1.Current(::TYPES[14/*Uno.Collections.Dictionary<string, string>.Enumerator*/]);

        if (::g::Uno::IO::File::Exists(pair.Value(::TYPES[15/*Uno.Collections.KeyValuePair<string, string>*/])))
        {
            ::g::Uno::Diagnostics::Debug::Log5(::g::Uno::String::op_Addition2(::STRINGS[2/*"Deleting te...*/], pair.Value(::TYPES[15/*Uno.Collections.KeyValuePair<string, string>*/])), 1, ::STRINGS[3/*"/usr/local/...*/], 777);
            ::g::Uno::IO::File::Delete(pair.Value(::TYPES[15/*Uno.Collections.KeyValuePair<string, string>*/]));
        }
    }
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Video/0.32.14/$.uno
// ---------------------------------------------------------------

// internal sealed class VideoDrawElement :1162
// {
// static VideoDrawElement() :1162
static void VideoDrawElement__cctor__fn(uType* __type)
{
    VideoDrawElement::Impl_ = VideoDrawElement::New1();
}

static void VideoDrawElement_build(uType* type)
{
    ::TYPES[8] = ::g::Fuse::IViewport_typeof();
    ::TYPES[16] = ::g::Uno::Float2_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Controls::VideoImpl::VideoDrawElement, _draw_2a4614d6), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::Controls::VideoImpl::VideoDrawElement, Draw_LocalTransform_2a4614d6_3_9_2), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::Controls::VideoImpl::VideoDrawElement, Draw_LocalTransform_2a4614d6_3_9_3), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Controls::VideoImpl::VideoDrawElement, Draw_VertexData_2a4614d6_6_2_1), 0,
        VideoDrawElement_typeof(), (uintptr_t)&::g::Fuse::Controls::VideoImpl::VideoDrawElement::Impl_, uFieldFlagsStatic);
}

uType* VideoDrawElement_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(VideoDrawElement);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.VideoImpl.VideoDrawElement", options);
    type->fp_build_ = VideoDrawElement_build;
    type->fp_ctor_ = (void*)VideoDrawElement__New1_fn;
    type->fp_cctor_ = VideoDrawElement__cctor__fn;
    return type;
}

// public generated VideoDrawElement() :1162
void VideoDrawElement__ctor__fn(VideoDrawElement* __this)
{
    __this->ctor_();
}

// public void Draw(Fuse.DrawContext dc, Fuse.Visual element, float2 offset, float2 size, float2 uvPosition, float2 uvSize, Uno.Graphics.VideoTexture tex) :1166
void VideoDrawElement__Draw_fn(VideoDrawElement* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* element, ::g::Uno::Float2* offset, ::g::Uno::Float2* size, ::g::Uno::Float2* uvPosition, ::g::Uno::Float2* uvSize, ::g::Uno::Graphics::VideoTexture* tex)
{
    __this->Draw(dc, element, *offset, *size, *uvPosition, *uvSize, tex);
}

// private generated void init_DrawCalls() :1162
void VideoDrawElement__init_DrawCalls_fn(VideoDrawElement* __this)
{
    __this->init_DrawCalls();
}

// public generated VideoDrawElement New() :1162
void VideoDrawElement__New1_fn(VideoDrawElement** __retval)
{
    *__retval = VideoDrawElement::New1();
}

uSStrong<VideoDrawElement*> VideoDrawElement::Impl_;

// public generated VideoDrawElement() [instance] :1162
void VideoDrawElement::ctor_()
{
    init_DrawCalls();
}

// public void Draw(Fuse.DrawContext dc, Fuse.Visual element, float2 offset, float2 size, float2 uvPosition, float2 uvSize, Uno.Graphics.VideoTexture tex) [instance] :1166
void VideoDrawElement::Draw(::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* element, ::g::Uno::Float2 offset, ::g::Uno::Float2 size, ::g::Uno::Float2 uvPosition, ::g::Uno::Float2 uvSize, ::g::Uno::Graphics::VideoTexture* tex)
{
    ::g::Uno::Float4x4 LocalTransform_2a4614d6_3_9_4 = ::g::Uno::Matrix::Mul10(Draw_LocalTransform_2a4614d6_3_9_2, ::g::Uno::Matrix::Scaling1(size.X, size.Y, 1.0f), Draw_LocalTransform_2a4614d6_3_9_3, ::g::Uno::Matrix::Translation(offset.X, offset.Y, 0.0f));
    _draw_2a4614d6.BlendEnabled(true);
    _draw_2a4614d6.DepthTestEnabled(false);
    _draw_2a4614d6.CullFace(uPtr(dc)->CullFace());
    _draw_2a4614d6.BlendSrcRgb(2);
    _draw_2a4614d6.BlendDstRgb(3);
    _draw_2a4614d6.BlendDstAlpha(3);
    _draw_2a4614d6.Use();
    _draw_2a4614d6.Attrib1(0, 2, Draw_VertexData_2a4614d6_6_2_1, 8, 0);
    _draw_2a4614d6.Uniform12(1, ::g::Fuse::IViewport::ViewProjectionTransform(uInterface(uPtr(dc->Viewport()), ::TYPES[8/*Fuse.IViewport*/])));
    _draw_2a4614d6.Uniform2(2, uvSize);
    _draw_2a4614d6.Uniform2(3, uvPosition);
    _draw_2a4614d6.Uniform12(4, (element != NULL) ? ::g::Uno::Matrix::Mul8(LocalTransform_2a4614d6_3_9_4, uPtr(element)->WorldTransform()) : LocalTransform_2a4614d6_3_9_4);
    _draw_2a4614d6.Sampler6(5, tex);
    _draw_2a4614d6.DrawArrays(6);
}

// private generated void init_DrawCalls() [instance] :1162
void VideoDrawElement::init_DrawCalls()
{
    Draw_VertexData_2a4614d6_6_2_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(uArray::Init< ::g::Uno::Float2>(::TYPES[16/*float2[]*/], 6, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(0.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 0.0f))), 0);
    Draw_LocalTransform_2a4614d6_3_9_2 = ::g::Uno::Matrix::Translation(-::g::Uno::Float2__New1(0.0f).X, -::g::Uno::Float2__New1(0.0f).Y, 0.0f);
    Draw_LocalTransform_2a4614d6_3_9_3 = ::g::Uno::Matrix::RotationZ(0.0f);
    _draw_2a4614d6 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseControlsVideo_bundle::VideoDrawElementd598cf98());
}

// public generated VideoDrawElement New() [static] :1162
VideoDrawElement* VideoDrawElement::New1()
{
    VideoDrawElement* obj1 = (VideoDrawElement*)uNew(VideoDrawElement_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Video/0.32.14/$.uno
// ---------------------------------------------------------------

// internal static class VideoLoader :819
// {
static void VideoLoader_build(uType* type)
{
    ::STRINGS[4] = uString::Const("Video not supported on this platform");
}

uClassType* VideoLoader_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.VideoImpl.VideoLoader", options);
    type->fp_build_ = VideoLoader_build;
    return type;
}

// public static Uno.Threading.Future<Fuse.Controls.VideoImpl.IVideoPlayer> Load(string url) :821
void VideoLoader__Load_fn(uString* url, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = VideoLoader::Load(url);
}

// public static Uno.Threading.Future<Fuse.Controls.VideoImpl.IVideoPlayer> Load(Uno.UX.FileSource file) :830
void VideoLoader__Load1_fn(::g::Uno::UX::FileSource* file, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = VideoLoader::Load1(file);
}

// public static Uno.Threading.Future<Fuse.Controls.VideoImpl.IVideoPlayer> Load(string url) [static] :821
::g::Uno::Threading::Future1* VideoLoader::Load(uString* url)
{
    return ::g::Fuse::Controls::VideoImpl::Android::VideoLoader::Load(url);
    U_THROW(::g::Uno::Exception::New2(::STRINGS[4/*"Video not s...*/]));
}

// public static Uno.Threading.Future<Fuse.Controls.VideoImpl.IVideoPlayer> Load(Uno.UX.FileSource file) [static] :830
::g::Uno::Threading::Future1* VideoLoader::Load1(::g::Uno::UX::FileSource* file)
{
    return ::g::Fuse::Controls::VideoImpl::Android::VideoLoader::Load2(file);
    U_THROW(::g::Uno::Exception::New2(::STRINGS[4/*"Video not s...*/]));
}
// }

// /usr/local/share/uno/Packages/Fuse.Controls.Video/0.32.14/$.uno
// ---------------------------------------------------------------

// internal sealed extern class VideoVisual :894
// {
static void VideoVisual_build(uType* type)
{
    ::STRINGS[5] = uString::Const("Video error");
    ::STRINGS[3] = uString::Const("/usr/local/share/uno/Packages/Fuse.Controls.Video/0.32.14/$.uno");
    ::STRINGS[6] = uString::Const("Fuse.Controls.VideoImpl.IVideoCallbacks.OnError");
    ::STRINGS[7] = uString::Const("IPlayback.PlayTo(double) not supported in Fuse.Controls.Video");
    ::STRINGS[8] = uString::Const("Fuse.Triggers.IPlayback.PlayTo");
    ::STRINGS[9] = uString::Const("");
    ::TYPES[17] = ::g::Fuse::Controls::VideoImpl::IVideoService_typeof();
    ::TYPES[4] = ::g::Fuse::Controls::VideoImpl::IVideoCallbacks_typeof();
    ::TYPES[5] = ::g::Uno::EventHandler_typeof();
    ::TYPES[18] = ::g::Uno::Action_typeof();
    ::TYPES[19] = ::g::Fuse::Triggers::IMediaPlayback_typeof();
    ::TYPES[13] = ::g::Uno::Int_typeof();
    ::TYPES[20] = ::g::Fuse::Visual_typeof();
    ::TYPES[21] = uObject_typeof();
    ::TYPES[22] = ::g::Fuse::Triggers::IPlayback_typeof();
    ::TYPES[23] = ::g::Uno::Delegate_typeof();
    ::TYPES[24] = ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::Double_typeof());
    ::TYPES[25] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(VideoVisual_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(VideoVisual_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(VideoVisual_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(VideoVisual_type, interface3),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(VideoVisual_type, interface4),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(VideoVisual_type, interface5),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(VideoVisual_type, interface6),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(VideoVisual_type, interface7),
        ::g::Fuse::Controls::VideoImpl::IVideoCallbacks_typeof(), offsetof(VideoVisual_type, interface8),
        ::g::Fuse::Triggers::IMediaPlayback_typeof(), offsetof(VideoVisual_type, interface9),
        ::g::Fuse::Triggers::IPlayback_typeof(), offsetof(VideoVisual_type, interface10),
        ::g::Fuse::Triggers::IProgress_typeof(), offsetof(VideoVisual_type, interface11));
    type->SetFields(61,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Controls::VideoImpl::VideoVisual, _drawOrigin), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Controls::VideoImpl::VideoVisual, _drawSize), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Controls::VideoImpl::VideoVisual, _origin), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Controls::VideoImpl::VideoVisual, _scale), 0,
        ::g::Uno::Int2_typeof(), offsetof(::g::Fuse::Controls::VideoImpl::VideoVisual, _sizeCache), 0,
        ::g::Fuse::Internal::SizingContainer_typeof(), offsetof(::g::Fuse::Controls::VideoImpl::VideoVisual, _sizing), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Controls::VideoImpl::VideoVisual, _uvClip), 0,
        ::g::Fuse::Controls::VideoImpl::IVideoService_typeof(), offsetof(::g::Fuse::Controls::VideoImpl::VideoVisual, _videoService), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::VideoImpl::VideoVisual, _volume), 0,
        ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof()), offsetof(::g::Fuse::Controls::VideoImpl::VideoVisual, ProgressChanged1), 0);
}

VideoVisual_type* VideoVisual_typeof()
{
    static uSStrong<VideoVisual_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 71;
    options.InterfaceCount = 12;
    options.ObjectSize = sizeof(VideoVisual);
    options.TypeSize = sizeof(VideoVisual_type);
    type = (VideoVisual_type*)uClassType::New("Fuse.Controls.VideoImpl.VideoVisual", options);
    type->SetBase(::g::Fuse::Controls::Graphics::ControlVisual_typeof()->MakeType(::g::Fuse::Controls::Video_typeof()));
    type->fp_build_ = VideoVisual_build;
    type->fp_ctor_ = (void*)VideoVisual__New2_fn;
    type->fp_Attach = (void(*)(::g::Fuse::Controls::Graphics::ControlVisual*))VideoVisual__Attach_fn;
    type->fp_Detach = (void(*)(::g::Fuse::Controls::Graphics::ControlVisual*))VideoVisual__Detach_fn;
    type->fp_Draw = (void(*)(::g::Fuse::Visual*, ::g::Fuse::DrawContext*))VideoVisual__Draw_fn;
    type->fp_GetMarginSize = (void(*)(::g::Fuse::Visual*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))VideoVisual__GetMarginSize_fn;
    type->fp_OnArrangeMarginBox = (void(*)(::g::Fuse::Visual*, ::g::Uno::Float2*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))VideoVisual__OnArrangeMarginBox_fn;
    type->fp_OnHitTest = (void(*)(::g::Fuse::Visual*, ::g::Fuse::HitTestContext*))VideoVisual__OnHitTest_fn;
    type->interface8.fp_OnFrameAvailable = (void(*)(uObject*))VideoVisual__FuseControlsVideoImplIVideoCallbacksOnFrameAvailable_fn;
    type->interface8.fp_OnError = (void(*)(uObject*, ::g::Uno::Exception*))VideoVisual__FuseControlsVideoImplIVideoCallbacksOnError_fn;
    type->interface8.fp_OnLoading = (void(*)(uObject*))VideoVisual__FuseControlsVideoImplIVideoCallbacksOnLoading_fn;
    type->interface8.fp_OnReady = (void(*)(uObject*))VideoVisual__FuseControlsVideoImplIVideoCallbacksOnReady_fn;
    type->interface8.fp_OnCompleted = (void(*)(uObject*))VideoVisual__FuseControlsVideoImplIVideoCallbacksOnCompleted_fn;
    type->interface10.fp_Stop = (void(*)(uObject*))VideoVisual__FuseTriggersIPlaybackStop_fn;
    type->interface10.fp_PlayTo = (void(*)(uObject*, double*))VideoVisual__FuseTriggersIPlaybackPlayTo_fn;
    type->interface10.fp_Pause = (void(*)(uObject*))VideoVisual__FuseTriggersIPlaybackPause_fn;
    type->interface10.fp_Resume = (void(*)(uObject*))VideoVisual__FuseTriggersIPlaybackResume_fn;
    type->interface9.fp_get_Position = (void(*)(uObject*, double*))VideoVisual__FuseTriggersIMediaPlaybackget_Position_fn;
    type->interface9.fp_set_Position = (void(*)(uObject*, double*))VideoVisual__FuseTriggersIMediaPlaybackset_Position_fn;
    type->interface11.fp_get_Progress = (void(*)(uObject*, double*))VideoVisual__FuseTriggersIProgressget_Progress_fn;
    type->interface10.fp_get_Progress = (void(*)(uObject*, double*))VideoVisual__FuseTriggersIPlaybackget_Progress_fn;
    type->interface10.fp_set_Progress = (void(*)(uObject*, double*))VideoVisual__FuseTriggersIPlaybackset_Progress_fn;
    type->interface10.fp_get_CanPlayTo = (void(*)(uObject*, bool*))VideoVisual__FuseTriggersIPlaybackget_CanPlayTo_fn;
    type->interface10.fp_get_CanStop = (void(*)(uObject*, bool*))VideoVisual__FuseTriggersIPlaybackget_CanStop_fn;
    type->interface10.fp_get_CanPause = (void(*)(uObject*, bool*))VideoVisual__FuseTriggersIPlaybackget_CanPause_fn;
    type->interface10.fp_get_CanResume = (void(*)(uObject*, bool*))VideoVisual__FuseTriggersIPlaybackget_CanResume_fn;
    type->interface11.fp_add_ProgressChanged = (void(*)(uObject*, uDelegate*))VideoVisual__FuseTriggersIProgressadd_ProgressChanged_fn;
    type->interface11.fp_remove_ProgressChanged = (void(*)(uObject*, uDelegate*))VideoVisual__FuseTriggersIProgressremove_ProgressChanged_fn;
    type->interface6.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface6.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface4.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface7.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface6.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface4.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface4.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface5.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Visual__OnPropertyChanged2_fn;
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

// public VideoVisual() :926
void VideoVisual__ctor_5_fn(VideoVisual* __this)
{
    __this->ctor_5();
}

// protected override sealed void Attach() :899
void VideoVisual__Attach_fn(VideoVisual* __this)
{
    ::g::Fuse::Controls::Video* ret5;
    ::g::Fuse::Controls::Video* ret6;
    ::g::Fuse::Controls::Video* ret7;
    ::g::Fuse::Controls::Video* ret8;
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret5), ret5))->add_RenderParamChanged(uDelegate::New(::TYPES[5/*Uno.EventHandler*/], (void*)VideoVisual__OnRenderParamChanged_fn, __this));
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret6), ret6))->add_ParamChanged(uDelegate::New(::TYPES[5/*Uno.EventHandler*/], (void*)VideoVisual__OnParamChanged_fn, __this));
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret7), ret7))->add_SourceChanged(uDelegate::New(::TYPES[5/*Uno.EventHandler*/], (void*)VideoVisual__OnSourceChanged_fn, __this));
    ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[18/*Uno.Action*/], (void*)VideoVisual__OnUpdate_fn, __this), 0);
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret8), ret8))->SetPlayback((uObject*)__this);
    __this->OnRenderParamChanged(NULL, NULL);
    __this->OnParamChanged(NULL, NULL);
    __this->OnSourceChanged(NULL, NULL);
}

// protected override sealed void Detach() :913
void VideoVisual__Detach_fn(VideoVisual* __this)
{
    ::g::Fuse::Controls::Video* ret9;
    ::g::Fuse::Controls::Video* ret10;
    ::g::Fuse::Controls::Video* ret11;
    ::g::Fuse::Controls::Video* ret12;
    ::g::Fuse::Controls::VideoImpl::IVideoService::Unload(uInterface(uPtr(__this->_videoService), ::TYPES[17/*Fuse.Controls.VideoImpl.IVideoService*/]));
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret9), ret9))->SetPlayback(NULL);
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret10), ret10))->remove_RenderParamChanged(uDelegate::New(::TYPES[5/*Uno.EventHandler*/], (void*)VideoVisual__OnRenderParamChanged_fn, __this));
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret11), ret11))->remove_ParamChanged(uDelegate::New(::TYPES[5/*Uno.EventHandler*/], (void*)VideoVisual__OnParamChanged_fn, __this));
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret12), ret12))->remove_SourceChanged(uDelegate::New(::TYPES[5/*Uno.EventHandler*/], (void*)VideoVisual__OnSourceChanged_fn, __this));
    ::g::Fuse::UpdateManager::RemoveAction1(uDelegate::New(::TYPES[18/*Uno.Action*/], (void*)VideoVisual__OnUpdate_fn, __this), 0);
}

// public override sealed void Draw(Fuse.DrawContext dc) :1134
void VideoVisual__Draw_fn(VideoVisual* __this, ::g::Fuse::DrawContext* dc)
{
    ::g::Uno::Float4 ind1;
    ::g::Uno::Float4 ind2;
    ::g::Uno::Float4 ind3;
    ::g::Fuse::Controls::Video* ret13;
    ::g::Fuse::Controls::Video* ret14;
    ::g::Uno::Graphics::VideoTexture* texture = ::g::Fuse::Controls::VideoImpl::IVideoService::VideoTexture(uInterface(uPtr(__this->_videoService), ::TYPES[17/*Fuse.Controls.VideoImpl.IVideoService*/]));

    if (texture == NULL)
        return;

    if (uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret13), ret13))->StretchMode() == 4)
        uPtr(::g::Fuse::Controls::VideoImpl::Scale9Rectangle::Impl())->Draw(dc, __this, __this->ActualSize(), __this->GetSize(), texture, uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret14), ret14))->Scale9Margin());
    else
        uPtr(::g::Fuse::Controls::VideoImpl::VideoDrawElement::Impl())->Draw(dc, __this, __this->_drawOrigin, __this->_drawSize, (ind1 = __this->_uvClip, ::g::Uno::Float2__New2(ind1.X, ind1.Y)), ::g::Uno::Float2__op_Subtraction2((ind2 = __this->_uvClip, ::g::Uno::Float2__New2(ind2.Z, ind2.W)), (ind3 = __this->_uvClip, ::g::Uno::Float2__New2(ind3.X, ind3.Y))), texture);
}

// private void Fuse.Controls.VideoImpl.IVideoCallbacks.OnCompleted() :962
void VideoVisual__FuseControlsVideoImplIVideoCallbacksOnCompleted_fn(VideoVisual* __this)
{
    ::g::Fuse::Controls::Video* ret15;
    __this->ResetTriggers();
    ::g::Fuse::Triggers::WhileCompleted::SetState((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret15), ret15), true);
}

// private void Fuse.Controls.VideoImpl.IVideoCallbacks.OnError(Uno.Exception e) :943
void VideoVisual__FuseControlsVideoImplIVideoCallbacksOnError_fn(VideoVisual* __this, ::g::Uno::Exception* e)
{
    ::g::Fuse::Controls::Video* ret16;
    __this->ResetTriggers();
    ::g::Fuse::Triggers::WhileFailed::SetState((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret16), ret16), true, uPtr(e)->Message());
    ::g::Fuse::Diagnostics::UnknownException(::STRINGS[5/*"Video error"*/], e, __this, ::STRINGS[3/*"/usr/local/...*/], 947, ::STRINGS[6/*"Fuse.Contro...*/]);
}

// private void Fuse.Controls.VideoImpl.IVideoCallbacks.OnFrameAvailable() :933
void VideoVisual__FuseControlsVideoImplIVideoCallbacksOnFrameAvailable_fn(VideoVisual* __this)
{
    if (::g::Uno::Int2__op_Inequality(::g::Fuse::Controls::VideoImpl::IVideoService::Size(uInterface(uPtr(__this->_videoService), ::TYPES[17/*Fuse.Controls.VideoImpl.IVideoService*/])), __this->_sizeCache))
    {
        __this->_sizeCache = ::g::Fuse::Controls::VideoImpl::IVideoService::Size(uInterface(uPtr(__this->_videoService), ::TYPES[17/*Fuse.Controls.VideoImpl.IVideoService*/]));
        __this->InvalidateLayout(2);
    }

    __this->InvalidateVisual();
}

// private void Fuse.Controls.VideoImpl.IVideoCallbacks.OnLoading() :950
void VideoVisual__FuseControlsVideoImplIVideoCallbacksOnLoading_fn(VideoVisual* __this)
{
    ::g::Fuse::Controls::Video* ret17;
    __this->ResetTriggers();
    ::g::Fuse::Triggers::WhileLoading::SetState((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret17), ret17), true);
}

// private void Fuse.Controls.VideoImpl.IVideoCallbacks.OnReady() :956
void VideoVisual__FuseControlsVideoImplIVideoCallbacksOnReady_fn(VideoVisual* __this)
{
    ::g::Fuse::Controls::Video* ret18;
    __this->ResetTriggers();
    ::g::Fuse::Triggers::WhileLoading::SetState((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret18), ret18), false);
}

// private double Fuse.Triggers.IMediaPlayback.get_Position() :977
void VideoVisual__FuseTriggersIMediaPlaybackget_Position_fn(VideoVisual* __this, double* __retval)
{
    return *__retval = ::g::Fuse::Controls::VideoImpl::IVideoService::Position(uInterface(uPtr(__this->_videoService), ::TYPES[17/*Fuse.Controls.VideoImpl.IVideoService*/])), void();
}

// private void Fuse.Triggers.IMediaPlayback.set_Position(double value) :978
void VideoVisual__FuseTriggersIMediaPlaybackset_Position_fn(VideoVisual* __this, double* value)
{
    double value_ = *value;
    ::g::Fuse::Controls::VideoImpl::IVideoService::Position(uInterface(uPtr(__this->_videoService), ::TYPES[17/*Fuse.Controls.VideoImpl.IVideoService*/]), value_);
}

// private bool Fuse.Triggers.IPlayback.get_CanPause() :1031
void VideoVisual__FuseTriggersIPlaybackget_CanPause_fn(VideoVisual* __this, bool* __retval)
{
    return *__retval = true, void();
}

// private bool Fuse.Triggers.IPlayback.get_CanPlayTo() :1029
void VideoVisual__FuseTriggersIPlaybackget_CanPlayTo_fn(VideoVisual* __this, bool* __retval)
{
    return *__retval = false, void();
}

// private bool Fuse.Triggers.IPlayback.get_CanResume() :1032
void VideoVisual__FuseTriggersIPlaybackget_CanResume_fn(VideoVisual* __this, bool* __retval)
{
    return *__retval = true, void();
}

// private bool Fuse.Triggers.IPlayback.get_CanStop() :1030
void VideoVisual__FuseTriggersIPlaybackget_CanStop_fn(VideoVisual* __this, bool* __retval)
{
    return *__retval = true, void();
}

// private void Fuse.Triggers.IPlayback.Pause() :998
void VideoVisual__FuseTriggersIPlaybackPause_fn(VideoVisual* __this)
{
    ::g::Fuse::Controls::Video* ret19;

    if (::g::Fuse::Controls::VideoImpl::IVideoService::IsValid(uInterface(uPtr(__this->_videoService), ::TYPES[17/*Fuse.Controls.VideoImpl.IVideoService*/])))
    {
        ::g::Fuse::Controls::VideoImpl::IVideoService::Pause(uInterface(uPtr(__this->_videoService), ::TYPES[17/*Fuse.Controls.VideoImpl.IVideoService*/]));
        __this->ResetTriggers();
        ::g::Fuse::Triggers::WhilePaused::SetState((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret19), ret19), true);
    }
}

// private void Fuse.Triggers.IPlayback.PlayTo(double progress) :992
void VideoVisual__FuseTriggersIPlaybackPlayTo_fn(VideoVisual* __this, double* progress)
{
    ::g::Fuse::Diagnostics::Unsupported(::STRINGS[7/*"IPlayback.P...*/], __this, ::STRINGS[3/*"/usr/local/...*/], 994, ::STRINGS[8/*"Fuse.Trigge...*/]);
}

// private double Fuse.Triggers.IPlayback.get_Progress() :1025
void VideoVisual__FuseTriggersIPlaybackget_Progress_fn(VideoVisual* __this, double* __retval)
{
    return *__retval = (::g::Fuse::Controls::VideoImpl::IVideoService::Duration(uInterface(uPtr(__this->_videoService), ::TYPES[17/*Fuse.Controls.VideoImpl.IVideoService*/])) > 1e-05) ? ::g::Fuse::Controls::VideoImpl::IVideoService::Position(uInterface(uPtr(__this->_videoService), ::TYPES[17/*Fuse.Controls.VideoImpl.IVideoService*/])) / ::g::Fuse::Controls::VideoImpl::IVideoService::Duration(uInterface(uPtr(__this->_videoService), ::TYPES[17/*Fuse.Controls.VideoImpl.IVideoService*/])) : 0.0, void();
}

// private void Fuse.Triggers.IPlayback.set_Progress(double value) :1026
void VideoVisual__FuseTriggersIPlaybackset_Progress_fn(VideoVisual* __this, double* value)
{
    double value_ = *value;
    ::g::Fuse::Controls::VideoImpl::IVideoService::Position(uInterface(uPtr(__this->_videoService), ::TYPES[17/*Fuse.Controls.VideoImpl.IVideoService*/]), ::g::Fuse::Controls::VideoImpl::IVideoService::Duration(uInterface(uPtr(__this->_videoService), ::TYPES[17/*Fuse.Controls.VideoImpl.IVideoService*/])) * value_);
}

// private void Fuse.Triggers.IPlayback.Resume() :1008
void VideoVisual__FuseTriggersIPlaybackResume_fn(VideoVisual* __this)
{
    ::g::Fuse::Controls::Video* ret20;

    if (::g::Fuse::Controls::VideoImpl::IVideoService::IsValid(uInterface(uPtr(__this->_videoService), ::TYPES[17/*Fuse.Controls.VideoImpl.IVideoService*/])))
    {
        __this->ResetTriggers();
        ::g::Fuse::Triggers::WhilePlaying::SetState((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret20), ret20), true);
        ::g::Fuse::Controls::VideoImpl::IVideoService::Play(uInterface(uPtr(__this->_videoService), ::TYPES[17/*Fuse.Controls.VideoImpl.IVideoService*/]));
    }
}

// private void Fuse.Triggers.IPlayback.Stop() :986
void VideoVisual__FuseTriggersIPlaybackStop_fn(VideoVisual* __this)
{
    ::g::Fuse::Triggers::IPlayback::Pause(uInterface((uObject*)__this, ::TYPES[22/*Fuse.Triggers.IPlayback*/]));
    ::g::Fuse::Triggers::IMediaPlayback::Position(uInterface((uObject*)__this, ::TYPES[19/*Fuse.Triggers.IMediaPlayback*/]), 0.0);
}

// private double Fuse.Triggers.IProgress.get_Progress() :1020
void VideoVisual__FuseTriggersIProgressget_Progress_fn(VideoVisual* __this, double* __retval)
{
    return *__retval = (::g::Fuse::Controls::VideoImpl::IVideoService::Duration(uInterface(uPtr(__this->_videoService), ::TYPES[17/*Fuse.Controls.VideoImpl.IVideoService*/])) > 1e-05) ? ::g::Fuse::Controls::VideoImpl::IVideoService::Position(uInterface(uPtr(__this->_videoService), ::TYPES[17/*Fuse.Controls.VideoImpl.IVideoService*/])) / ::g::Fuse::Controls::VideoImpl::IVideoService::Duration(uInterface(uPtr(__this->_videoService), ::TYPES[17/*Fuse.Controls.VideoImpl.IVideoService*/])) : 0.0, void();
}

// private void Fuse.Triggers.IProgress.add_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) :1036
void VideoVisual__FuseTriggersIProgressadd_ProgressChanged_fn(VideoVisual* __this, uDelegate* value)
{
    __this->add_ProgressChanged(value);
}

// private void Fuse.Triggers.IProgress.remove_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) :1037
void VideoVisual__FuseTriggersIProgressremove_ProgressChanged_fn(VideoVisual* __this, uDelegate* value)
{
    __this->remove_ProgressChanged(value);
}

// public override sealed float2 GetMarginSize(Fuse.LayoutParams lp) :1097
void VideoVisual__GetMarginSize_fn(VideoVisual* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    ::g::Fuse::Controls::Video* ret21;
    ::g::Fuse::Controls::Video* ret22;
    ::g::Fuse::LayoutParams lp_ = *lp;
    uPtr(__this->_sizing)->snapToPixels = uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret21), ret21))->SnapToPixels();
    uPtr(__this->_sizing)->absoluteZoom = uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret22), ret22))->AbsoluteZoom();
    return *__retval = uPtr(__this->_sizing)->ExpandFillSize(__this->GetSize(), lp_), void();
}

// private float2 GetSize() :1105
void VideoVisual__GetSize_fn(VideoVisual* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetSize();
}

// public VideoVisual New() :926
void VideoVisual__New2_fn(VideoVisual** __retval)
{
    *__retval = VideoVisual::New2();
}

// protected override sealed float2 OnArrangeMarginBox(float2 position, Fuse.LayoutParams lp) :1115
void VideoVisual__OnArrangeMarginBox_fn(VideoVisual* __this, ::g::Uno::Float2* position, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    ::g::Uno::Float2 ret23;
    ::g::Uno::Float2 position_ = *position;
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Fuse::Controls::Video* ret24;
    ::g::Fuse::Controls::Video* ret25;
    ::g::Uno::Float2 size = (::g::Fuse::Controls::Graphics::Visual__OnArrangeMarginBox_fn(__this, uCRef(position_), uCRef(lp_), &ret23), ret23);
    uPtr(__this->_sizing)->snapToPixels = uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret24), ret24))->SnapToPixels();
    uPtr(__this->_sizing)->absoluteZoom = uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret25), ret25))->AbsoluteZoom();
    ::g::Uno::Float2 contentDesiredSize = __this->GetSize();
    __this->_scale = uPtr(__this->_sizing)->CalcScale(size, contentDesiredSize);
    __this->_origin = uPtr(__this->_sizing)->CalcOrigin(size, ::g::Uno::Float2__op_Multiply2(contentDesiredSize, __this->_scale));
    __this->_drawOrigin = __this->_origin;
    __this->_drawSize = ::g::Uno::Float2__op_Multiply2(contentDesiredSize, __this->_scale);
    __this->_uvClip = uPtr(__this->_sizing)->CalcClip(size, &__this->_drawOrigin, &__this->_drawSize);
    return *__retval = size, void();
}

// protected override sealed void OnHitTest(Fuse.HitTestContext htc) :1149
void VideoVisual__OnHitTest_fn(VideoVisual* __this, ::g::Fuse::HitTestContext* htc)
{
    ::g::Uno::Float2 lp = uPtr(htc)->LocalPoint();

    if ((((lp.X >= __this->_drawOrigin.X) && (lp.X <= (__this->_drawOrigin.X + __this->_drawSize.X))) && (lp.Y >= __this->_drawOrigin.Y)) && (lp.Y <= (__this->_drawOrigin.Y + __this->_drawSize.Y)))
        uPtr(htc)->Hit(__this);

    ::g::Fuse::Visual__OnHitTest_fn(__this, htc);
}

// private void OnParamChanged(object sender, Uno.EventArgs args) :1066
void VideoVisual__OnParamChanged_fn(VideoVisual* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnParamChanged(sender, args);
}

// private void OnProgressChanged() :1041
void VideoVisual__OnProgressChanged_fn(VideoVisual* __this)
{
    __this->OnProgressChanged();
}

// private void OnRenderParamChanged(object sender, Uno.EventArgs args) :1057
void VideoVisual__OnRenderParamChanged_fn(VideoVisual* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnRenderParamChanged(sender, args);
}

// private void OnSourceChanged(object sender, Uno.EventArgs args) :1073
void VideoVisual__OnSourceChanged_fn(VideoVisual* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnSourceChanged(sender, args);
}

// private void OnUpdate() :1050
void VideoVisual__OnUpdate_fn(VideoVisual* __this)
{
    __this->OnUpdate();
}

// private generated void add_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) :1040
void VideoVisual__add_ProgressChanged_fn(VideoVisual* __this, uDelegate* value)
{
    __this->add_ProgressChanged(value);
}

// private generated void remove_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) :1040
void VideoVisual__remove_ProgressChanged_fn(VideoVisual* __this, uDelegate* value)
{
    __this->remove_ProgressChanged(value);
}

// private void ResetTriggers() :1088
void VideoVisual__ResetTriggers_fn(VideoVisual* __this)
{
    __this->ResetTriggers();
}

// public VideoVisual() [instance] :926
void VideoVisual::ctor_5()
{
    _sizeCache = ::g::Uno::Int2__New2(0, 0);
    _volume = 1.0f;
    ctor_4();
    _sizing = ::g::Fuse::Internal::SizingContainer::New1();
    _videoService = (uObject*)::g::Fuse::Controls::VideoImpl::GraphicsVideoService::New1((uObject*)this);
}

// private float2 GetSize() [instance] :1105
::g::Uno::Float2 VideoVisual::GetSize()
{
    return ::g::Uno::Float2__op_Implicit1(::g::Fuse::Controls::VideoImpl::IVideoService::Size(uInterface(uPtr(_videoService), ::TYPES[17/*Fuse.Controls.VideoImpl.IVideoService*/])));
}

// private void OnParamChanged(object sender, Uno.EventArgs args) [instance] :1066
void VideoVisual::OnParamChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    ::g::Fuse::Controls::Video* ret26;
    ::g::Fuse::Controls::Video* ret27;
    ::g::Fuse::Controls::Video* ret28;
    ::g::Fuse::Controls::VideoImpl::IVideoService::IsLooping(uInterface(uPtr(_videoService), ::TYPES[17/*Fuse.Controls.VideoImpl.IVideoService*/]), uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret26), ret26))->IsLooping());
    ::g::Fuse::Controls::VideoImpl::IVideoService::AutoPlay(uInterface(uPtr(_videoService), ::TYPES[17/*Fuse.Controls.VideoImpl.IVideoService*/]), uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret27), ret27))->AutoPlay());
    ::g::Fuse::Controls::VideoImpl::IVideoService::Volume(uInterface(uPtr(_videoService), ::TYPES[17/*Fuse.Controls.VideoImpl.IVideoService*/]), uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret28), ret28))->Volume());
}

// private void OnProgressChanged() [instance] :1041
void VideoVisual::OnProgressChanged()
{
    ::g::Uno::UX::ValueChangedArgs* ret29;

    if (::g::Uno::Delegate::op_Inequality(ProgressChanged1, NULL))
    {
        double progress = ::g::Fuse::Triggers::IPlayback::Progress(uInterface((uObject*)this, ::TYPES[22/*Fuse.Triggers.IPlayback*/]));
        uPtr(ProgressChanged1)->Invoke(2, this, (::g::Uno::UX::ValueChangedArgs__New2_fn(::TYPES[24/*Uno.UX.ValueChangedArgs<double>*/], uCRef(progress), &ret29), ret29));
    }
}

// private void OnRenderParamChanged(object sender, Uno.EventArgs args) [instance] :1057
void VideoVisual::OnRenderParamChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    ::g::Fuse::Controls::Video* ret30;
    ::g::Fuse::Controls::Video* ret31;
    ::g::Fuse::Controls::Video* ret32;
    ::g::Fuse::Controls::Video* ret33;
    uPtr(_sizing)->SetStretchMode(uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret30), ret30))->StretchMode());
    uPtr(_sizing)->SetStretchDirection(uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret31), ret31))->StretchDirection());
    uPtr(_sizing)->SetStretchSizing(uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret32), ret32))->StretchSizing());
    uPtr(_sizing)->SetAlignment(uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret33), ret33))->ContentAlignment());
    InvalidateVisual();
}

// private void OnSourceChanged(object sender, Uno.EventArgs args) [instance] :1073
void VideoVisual::OnSourceChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    ::g::Fuse::Controls::Video* ret34;
    ::g::Fuse::Controls::Video* ret35;
    ::g::Fuse::Controls::Video* ret36;
    ::g::Fuse::Controls::Video* ret37;

    if (uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret34), ret34))->File() != NULL)
    {
        ::g::Fuse::Controls::VideoImpl::IVideoService::Load1(uInterface(uPtr(_videoService), ::TYPES[17/*Fuse.Controls.VideoImpl.IVideoService*/]), uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret35), ret35))->File());
        return;
    }

    if (::g::Uno::String::op_Inequality(uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret36), ret36))->Url(), NULL))
    {
        ::g::Fuse::Controls::VideoImpl::IVideoService::Load(uInterface(uPtr(_videoService), ::TYPES[17/*Fuse.Controls.VideoImpl.IVideoService*/]), uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret37), ret37))->Url());
        return;
    }
}

// private void OnUpdate() [instance] :1050
void VideoVisual::OnUpdate()
{
    ::g::Fuse::Controls::VideoImpl::IVideoService::Update(uInterface(uPtr(_videoService), ::TYPES[17/*Fuse.Controls.VideoImpl.IVideoService*/]));

    if (::g::Fuse::Controls::VideoImpl::IVideoService::IsValid(uInterface(uPtr(_videoService), ::TYPES[17/*Fuse.Controls.VideoImpl.IVideoService*/])))
        OnProgressChanged();
}

// private generated void add_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) [instance] :1040
void VideoVisual::add_ProgressChanged(uDelegate* value)
{
    ProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ProgressChanged1, value), ::TYPES[25/*Uno.UX.ValueChangedHandler<double>*/]);
}

// private generated void remove_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) [instance] :1040
void VideoVisual::remove_ProgressChanged(uDelegate* value)
{
    ProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ProgressChanged1, value), ::TYPES[25/*Uno.UX.ValueChangedHandler<double>*/]);
}

// private void ResetTriggers() [instance] :1088
void VideoVisual::ResetTriggers()
{
    ::g::Fuse::Controls::Video* ret38;
    ::g::Fuse::Controls::Video* ret39;
    ::g::Fuse::Controls::Video* ret40;
    ::g::Fuse::Controls::Video* ret41;
    ::g::Fuse::Controls::Video* ret42;
    ::g::Fuse::Triggers::WhileFailed::SetState((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret38), ret38), false, ::STRINGS[9/*""*/]);
    ::g::Fuse::Triggers::WhileLoading::SetState((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret39), ret39), false);
    ::g::Fuse::Triggers::WhileCompleted::SetState((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret40), ret40), false);
    ::g::Fuse::Triggers::WhilePlaying::SetState((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret41), ret41), false);
    ::g::Fuse::Triggers::WhilePaused::SetState((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret42), ret42), false);
}

// public VideoVisual New() [static] :926
VideoVisual* VideoVisual::New2()
{
    VideoVisual* obj4 = (VideoVisual*)uNew(VideoVisual_typeof());
    obj4->ctor_5();
    return obj4;
}
// }

}}}} // ::g::Fuse::Controls::VideoImpl
