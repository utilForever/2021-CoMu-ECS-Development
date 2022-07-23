// Copyright (c) 2021 Chris Ohk
// I'm making my contributions/submissions to this project solely in my
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#include <Commons/Tags.hpp>
#include <Components/Gold.hpp>
#include <Systems/Game.hpp>

namespace ECSTower
{
namespace Game
{
void Initialize(entt::registry& registry)
{
    // Player
    {
        auto entity = registry.create();
        registry.emplace<Tag::Player>(entity);
        registry.emplace<Gold>(entity, 500);
    }
}
}  // namespace Game
}  // namespace ECSTower