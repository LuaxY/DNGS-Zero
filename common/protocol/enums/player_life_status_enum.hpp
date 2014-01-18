#ifndef PLAYER_LIFE_STATUS_ENUM_HPP
#define PLAYER_LIFE_STATUS_ENUM_HPP

namespace network
{
    enum player_life_status_enum
    {
        STATUS_ALIVE_AND_KICKING = 0,
        STATUS_TOMBSTONE = 1,
        STATUS_PHANTOM = 2
    };
}

#endif // PLAYER_LIFE_STATUS_ENUM_HPP