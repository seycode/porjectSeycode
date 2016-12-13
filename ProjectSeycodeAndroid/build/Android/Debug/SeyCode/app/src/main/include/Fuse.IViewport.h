// This file was generated based on /usr/local/share/uno/Packages/FuseCore/0.32.14/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Geometry{struct Ray;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float3;}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{

// public abstract interface IViewport :2539
// {
uInterfaceType* IViewport_typeof();

struct IViewport
{
    void(*fp_get_PixelsPerPoint)(uObject*, float*);
    void(*fp_PointToWorldRay)(uObject*, ::g::Uno::Float2*, ::g::Uno::Geometry::Ray*);
    void(*fp_get_ProjectionTransform)(uObject*, ::g::Uno::Float4x4*);
    void(*fp_get_Size)(uObject*, ::g::Uno::Float2*);
    void(*fp_get_ViewOrigin)(uObject*, ::g::Uno::Float3*);
    void(*fp_get_ViewProjectionTransform)(uObject*, ::g::Uno::Float4x4*);
    void(*fp_get_ViewProjectionTransformInverse)(uObject*, ::g::Uno::Float4x4*);
    void(*fp_get_ViewTransform)(uObject*, ::g::Uno::Float4x4*);
    static float PixelsPerPoint(const uInterface& __this) { float __retval; return __this.VTable<IViewport>()->fp_get_PixelsPerPoint(__this, &__retval), __retval; }
    static ::g::Uno::Geometry::Ray PointToWorldRay(const uInterface& __this, ::g::Uno::Float2 pointPos);
    static ::g::Uno::Float4x4 ProjectionTransform(const uInterface& __this);
    static ::g::Uno::Float2 Size(const uInterface& __this);
    static ::g::Uno::Float3 ViewOrigin(const uInterface& __this);
    static ::g::Uno::Float4x4 ViewProjectionTransform(const uInterface& __this);
    static ::g::Uno::Float4x4 ViewProjectionTransformInverse(const uInterface& __this);
    static ::g::Uno::Float4x4 ViewTransform(const uInterface& __this);
};

}} // ::g::Fuse

#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4x4.h>
#include <Uno.Geometry.Ray.h>

namespace g{
namespace Fuse{

inline ::g::Uno::Geometry::Ray IViewport::PointToWorldRay(const uInterface& __this, ::g::Uno::Float2 pointPos) { ::g::Uno::Geometry::Ray __retval; return __this.VTable<IViewport>()->fp_PointToWorldRay(__this, &pointPos, &__retval), __retval; }
inline ::g::Uno::Float4x4 IViewport::ProjectionTransform(const uInterface& __this) { ::g::Uno::Float4x4 __retval; return __this.VTable<IViewport>()->fp_get_ProjectionTransform(__this, &__retval), __retval; }
inline ::g::Uno::Float2 IViewport::Size(const uInterface& __this) { ::g::Uno::Float2 __retval; return __this.VTable<IViewport>()->fp_get_Size(__this, &__retval), __retval; }
inline ::g::Uno::Float3 IViewport::ViewOrigin(const uInterface& __this) { ::g::Uno::Float3 __retval; return __this.VTable<IViewport>()->fp_get_ViewOrigin(__this, &__retval), __retval; }
inline ::g::Uno::Float4x4 IViewport::ViewProjectionTransform(const uInterface& __this) { ::g::Uno::Float4x4 __retval; return __this.VTable<IViewport>()->fp_get_ViewProjectionTransform(__this, &__retval), __retval; }
inline ::g::Uno::Float4x4 IViewport::ViewProjectionTransformInverse(const uInterface& __this) { ::g::Uno::Float4x4 __retval; return __this.VTable<IViewport>()->fp_get_ViewProjectionTransformInverse(__this, &__retval), __retval; }
inline ::g::Uno::Float4x4 IViewport::ViewTransform(const uInterface& __this) { ::g::Uno::Float4x4 __retval; return __this.VTable<IViewport>()->fp_get_ViewTransform(__this, &__retval), __retval; }
// }

}} // ::g::Fuse
