// Copyright (c) 2021 Chris Ohk
// I'm making my contributions/submissions to this project solely in my
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#ifndef ECS_TOWER_UPGRADABLE_HPP
#define ECS_TOWER_UPGRADABLE_HPP

#include <entt/entt.hpp>

#include <functional>

namespace ECSTower
{
//!
//! \brief Upgradable struct.
//!
//! This struct stores the cost and the function to upgrade something.
//!
struct Upgradable
{
    int cost;
    std::function<void(entt::registry&, entt::entity)> Upgrade;
};
}  // namespace ECSTower

#endif  // ECS_TOWER_UPGRADABLE_HPP