#ifndef PVP_ARENA_STEP_ENUM_HPP
#define PVP_ARENA_STEP_ENUM_HPP

namespace network
{
    enum pvp_arena_step_enum
    {
        ARENA_STEP_REGISTRED = 0,
        ARENA_STEP_WAITING_FIGHT = 1,
        ARENA_STEP_STARTING_FIGHT = 2,
        ARENA_STEP_UNREGISTER = 3
    };
}

#endif // PVP_ARENA_STEP_ENUM_HPP