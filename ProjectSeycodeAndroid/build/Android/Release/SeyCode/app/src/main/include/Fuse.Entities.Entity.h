// This file was generated based on /usr/local/share/uno/Packages/Fuse.Entities/0.32.14/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Visual.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Entities{struct Entity;}}}
namespace g{namespace Fuse{namespace Entities{struct MeshRenderer;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct VisualBounds;}}

namespace g{
namespace Fuse{
namespace Entities{

// public sealed class Entity :350
// {
::g::Fuse::Visual_type* Entity_typeof();
void Entity__Draw_fn(Entity* __this, ::g::Fuse::DrawContext* dc);
void Entity__get_HitTestBounds_fn(Entity* __this, ::g::Fuse::VisualBounds** __retval);
void Entity__get_MeshRenderer_fn(Entity* __this, ::g::Fuse::Entities::MeshRenderer** __retval);
void Entity__set_MeshRenderer_fn(Entity* __this, ::g::Fuse::Entities::MeshRenderer* value);
void Entity__get_ParentEntity_fn(Entity* __this, Entity** __retval);

struct Entity : ::g::Fuse::Visual
{
    uStrong< ::g::Fuse::Entities::MeshRenderer*> _MeshRenderer;

    ::g::Fuse::Entities::MeshRenderer* MeshRenderer();
    void MeshRenderer(::g::Fuse::Entities::MeshRenderer* value);
    Entity* ParentEntity();
};
// }

}}} // ::g::Fuse::Entities
