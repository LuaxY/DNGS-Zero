#ifndef CHARACTER_CREATION_RESULT_ENUM_HPP
#define CHARACTER_CREATION_RESULT_ENUM_HPP

namespace network
{
    enum character_creation_result_enum
    {
        OK = 0,
        ERR_NO_REASON = 1,
        ERR_INVALID_NAME = 2,
        ERR_NAME_ALREADY_EXISTS = 3,
        ERR_TOO_MANY_CHARACTERS = 4,
        ERR_NOT_ALLOWED = 5,
        ERR_NEW_PLAYER_NOT_ALLOWED = 6,
        ERR_RESTRICED_ZONE = 7
    };
}

#endif // CHARACTER_CREATION_RESULT_ENUM_HPP