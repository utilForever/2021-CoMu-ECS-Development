// Copyright (c) 2021 Chris Ohk
// I'm making my contributions/submissions to this project solely in my
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#ifndef ECS_TOWER_GAME_HPP
#define ECS_TOWER_GAME_HPP

#include <entt/entt.hpp>

namespace ECSTower
{
namespace Game
{
//! Initializes entities that are needed to the game.
//! \param registry A registry that handles entities.
void Initialize(entt::registry& registry);
}
}  // namespace ECSTower

#endif  // ECS_TOWER_GAME_HPP