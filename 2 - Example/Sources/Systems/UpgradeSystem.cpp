// Copyright (c) 2021 Chris Ohk
// I'm making my contributions/submissions to this project solely in my
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#include <Commons/Tags.hpp>
#include <Components/Upgradable.hpp>
#include <Helpers/GoldHelpers.hpp>
#include <Systems/UpgradeSystem.hpp>

namespace ECSTower
{
void UpdateUpgradeSystem(entt::registry& registry, entt::entity from)
{
    if (registry.all_of<Upgradable>(from))
    {
        if (const auto& upgradable = registry.get<Upgradable>(from); Withdraw(
                registry, registry.view<Tag::Player>()[0], upgradable.cost))
        {
            upgradable.Upgrade(registry, from);
        }
    }
}
}  // namespace ECSTower