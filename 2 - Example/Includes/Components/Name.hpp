// Copyright (c) 2021 Chris Ohk
// I'm making my contributions/submissions to this project solely in my
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#ifndef ECS_TOWER_NAME_HPP
#define ECS_TOWER_NAME_HPP

#include <string>

namespace ECSTower
{
//!
//! \brief Name struct.
//!
//! This struct stores the name of the entity.
//!
struct Name
{
    std::string name;
};
}  // namespace ECSTower

#endif  // ECS_TOWER_NAME_HPP