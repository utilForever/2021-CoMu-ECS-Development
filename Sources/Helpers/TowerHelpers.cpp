// Copyright (c) 2021 Chris Ohk
// I'm making my contributions/submissions to this project solely in my
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#include <Commons/Constants.hpp>
#include <Commons/Tags.hpp>
#include <Components/Name.hpp>
#include <Components/Upgradable.hpp>
#include <Helpers/GoldHelpers.hpp>
#include <Helpers/TowerHelpers.hpp>

namespace ECSTower
{
void BuyArrowTower(entt::registry& registry)
{
    // Check the player can buy arrow tower
    if (!Withdraw(registry, registry.view<Tag::Player>()[0],
                  ARROW_TOWER_LV1_PRICE))
    {
        return;
    }

    auto entity = registry.create();
    registry.emplace<Tag::Tower>(entity);
    registry.emplace<Name>(entity, "Arrow Tower Lv 1");
    registry.emplace<Upgradable>(entity, ARROW_TOWER_LV2_PRICE,
                                 UpgradeArrowTowerLv2);
}

void UpgradeArrowTowerLv2(entt::registry& registry, entt::entity entity)
{
    registry.replace<Name>(entity, "Arrow Tower Lv 2");
    registry.remove<Upgradable>(entity);
}
}  // namespace ECSTower