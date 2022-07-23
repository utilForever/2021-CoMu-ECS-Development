// Copyright (c) 2021 Chris Ohk
// I'm making my contributions/submissions to this project solely in my
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#ifndef ECS_TOWER_TAGS_HPP
#define ECS_TOWER_TAGS_HPP

#include <entt/entt.hpp>

namespace ECSTower
{
namespace Tag
{
using namespace entt::literals;

using Player = entt::tag<"player"_hs>;
using Tower = entt::tag<"tower"_hs>;
}  // namespace Tag
}  // namespace ECSTower

#endif  // ECS_TOWER_TAGS_HPP