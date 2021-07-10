// Copyright (c) 2021 Chris Ohk
// I'm making my contributions/submissions to this project solely in my
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#ifndef ECS_TOWER_TOWER_HELPERS_HPP
#define ECS_TOWER_TOWER_HELPERS_HPP

#include <entt/entt.hpp>

namespace ECSTower
{
//! Buys a arrow tower.
//! \param registry A registry that handles entities.
void BuyArrowTower(entt::registry& registry);

//! Upgrades a arrow tower to level 2.
//! \param registry A registry that handles entities.
//! \param entity A arrow tower entity to upgrade.
void UpgradeArrowTowerLv2(entt::registry& registry, entt::entity entity);
}  // namespace ECSTower

#endif  // ECS_TOWER_TOWER_HELPERS_HPP