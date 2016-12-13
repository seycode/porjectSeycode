// This file was generated based on /usr/local/share/uno/Packages/Fuse.Entities/0.32.14/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Transform.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
namespace g{namespace Fuse{namespace Entities{struct Transform3D;}}}
namespace g{namespace Fuse{struct FastMatrix;}}

namespace g{
namespace Fuse{
namespace Entities{

// public sealed class Transform3D :2445
// {
::g::Fuse::Transform_type* Transform3D_typeof();
void Transform3D__AppendTo_fn(Transform3D* __this, ::g::Fuse::FastMatrix* m, float* weight);
void Transform3D__InvalidateLocal_fn(Transform3D* __this);
void Transform3D__get_IsFlat_fn(Transform3D* __this, bool* __retval);
void Transform3D__get_Position_fn(Transform3D* __this, ::g::Uno::Float3* __retval);
void Transform3D__set_Position_fn(Transform3D* __this, ::g::Uno::Float3* value);
void Transform3D__PrependTo_fn(Transform3D* __this, ::g::Fuse::FastMatrix* m);
void Transform3D__get_RotationDegrees_fn(Transform3D* __this, ::g::Uno::Float3* __retval);
void Transform3D__set_RotationDegrees_fn(Transform3D* __this, ::g::Uno::Float3* value);
void Transform3D__get_RotationQuaternion_fn(Transform3D* __this, ::g::Uno::Float4* __retval);
void Transform3D__set_RotationQuaternion_fn(Transform3D* __this, ::g::Uno::Float4* value);
void Transform3D__get_Scaling_fn(Transform3D* __this, ::g::Uno::Float3* __retval);
void Transform3D__set_Scaling_fn(Transform3D* __this, ::g::Uno::Float3* value);

struct Transform3D : ::g::Fuse::Transform
{
    ::g::Uno::Float3 position;
    ::g::Uno::Float3 rotationDegrees;
    ::g::Uno::Float4 rotationQuaternion;
    ::g::Uno::Float3 scale;

    void InvalidateLocal();
    ::g::Uno::Float3 Position();
    void Position(::g::Uno::Float3 value);
    ::g::Uno::Float3 RotationDegrees();
    void RotationDegrees(::g::Uno::Float3 value);
    ::g::Uno::Float4 RotationQuaternion();
    void RotationQuaternion(::g::Uno::Float4 value);
    ::g::Uno::Float3 Scaling();
    void Scaling(::g::Uno::Float3 value);
};
// }

}}} // ::g::Fuse::Entities
