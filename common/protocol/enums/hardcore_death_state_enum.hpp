#ifndef HARDCORE_DEATH_STATE_ENUM_HPP
#define HARDCORE_DEATH_STATE_ENUM_HPP

namespace network
{
    enum hardcore_death_state_enum
    {
        DEATH_STATE_ALIVE = 0,
        DEATH_STATE_DEAD = 1,
        DEATH_STATE_WAITING_CONFIRMATION = 2
    };
}

#endif // HARDCORE_DEATH_STATE_ENUM_HPP