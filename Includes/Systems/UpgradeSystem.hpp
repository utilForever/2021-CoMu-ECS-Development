// Copyright (c) 2021 Chris Ohk
// I'm making my contributions/submissions to this project solely in my
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#ifndef ECS_TOWER_UPGRADE_SYSTEM_HPP
#define ECS_TOWER_UPGRADE_SYSTEM_HPP

#include <entt/entt.hpp>

namespace ECSTower
{
//! Updates upgrade system.
//! \param registry A registry that handles entities.
//! \param from The tower entity to upgrade.
void UpdateUpgradeSystem(entt::registry& registry, entt::entity from);
}  // namespace ECSTower

#endif  // ECS_TOWER_UPGRADE_SYSTEM_HPP