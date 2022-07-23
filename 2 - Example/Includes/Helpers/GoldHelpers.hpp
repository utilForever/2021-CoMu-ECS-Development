// Copyright (c) 2021 Chris Ohk
// I'm making my contributions/submissions to this project solely in my
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#ifndef ECS_TOWER_GOLD_HELPERS_HPP
#define ECS_TOWER_GOLD_HELPERS_HPP

#include <entt/entt.hpp>

namespace ECSTower
{
//! Withdraws \p amount from \p from's Gold component if enough gold in it, then
//! return true. Returns false otherwise and leave \p from's Gold untouched.
//! \param registry A registry that handles entities.
//! \param from The player entity.
//! \param amount The price to buy something.
bool Withdraw(entt::registry& registry, entt::entity from, int amount);
}  // namespace ECSTower

#endif  // ECS_TOWER_GOLD_HELPERS_HPP