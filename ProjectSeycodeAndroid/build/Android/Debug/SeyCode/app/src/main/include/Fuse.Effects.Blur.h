// This file was generated based on /usr/local/share/uno/Packages/Fuse.Effects/0.32.14/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Effects.BasicEffect.h>
#include <Uno.Float4x4.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
namespace g{namespace Fuse{namespace Effects{struct Blur;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct VisualBounds;}}
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace Effects{

// public sealed class Blur :66
// {
::g::Fuse::Effects::BasicEffect_type* Blur_typeof();
void Blur__ModifyRenderBounds_fn(Blur* __this, ::g::Fuse::VisualBounds* inBounds, ::g::Fuse::VisualBounds** __retval);
void Blur__OnRender_fn(Blur* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Rect* elementRect);
void Blur__get_Padding_fn(Blur* __this, float* __retval);
void Blur__get_Radius_fn(Blur* __this, float* __retval);
void Blur__set_Radius_fn(Blur* __this, float* value);
void Blur__get_Sigma_fn(Blur* __this, float* __retval);

struct Blur : ::g::Fuse::Effects::BasicEffect
{
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_bc1142c0;
    float _radius;
    ::g::Uno::Float4x4 OnRender_LocalTransform_bc1142c0_4_9_2;
    ::g::Uno::Float4x4 OnRender_LocalTransform_bc1142c0_4_9_3;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> OnRender_VertexData_bc1142c0_7_2_1;

    float Padding();
    float Radius();
    void Radius(float value);
    float Sigma();
};
// }

}}} // ::g::Fuse::Effects
