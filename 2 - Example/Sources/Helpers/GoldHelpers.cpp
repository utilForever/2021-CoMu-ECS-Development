// Copyright (c) 2021 Chris Ohk
// I'm making my contributions/submissions to this project solely in my
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#include <Components/Gold.hpp>
#include <Helpers/GoldHelpers.hpp>

namespace ECSTower
{
bool Withdraw(entt::registry& registry, entt::entity from, int amount)
{
    if (!registry.all_of<Gold>(from))
    {
        return false;
    }

    if (auto& gold = registry.get<Gold>(from); gold.amount >= amount)
    {
        gold.amount -= amount;
        return true;
    }

    return false;
}
}  // namespace ECSTower