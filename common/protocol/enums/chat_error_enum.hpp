#ifndef CHAT_ERROR_ENUM_HPP
#define CHAT_ERROR_ENUM_HPP

namespace network
{
    enum chat_error_enum
    {
        CHAT_ERROR_UNKNOWN = 0,
        CHAT_ERROR_RECEIVER_NOT_FOUND = 1,
        CHAT_ERROR_INTERIOR_MONOLOGUE = 2,
        CHAT_ERROR_NO_GUILD = 3,
        CHAT_ERROR_NO_PARTY = 4,
        CHAT_ERROR_ALLIANCE = 5,
        CHAT_ERROR_INVALID_MAP = 6,
        CHAT_ERROR_NO_PARTY_ARENA = 7,
        CHAT_ERROR_NO_TEAM = 8
    };
}

#endif // CHAT_ERROR_ENUM_HPP