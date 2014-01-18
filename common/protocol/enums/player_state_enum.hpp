#ifndef PLAYER_STATE_ENUM_HPP
#define PLAYER_STATE_ENUM_HPP

namespace network
{
    enum player_state_enum
    {
        NOT_CONNECTED = 0,
        GAME_TYPE_ROLEPLAY = 1,
        GAME_TYPE_FIGHT = 2,
        UNKNOWN_STATE = 99
    };
}

#endif // PLAYER_STATE_ENUM_HPP