#ifndef NICKNAME_ERROR_ENUM_HPP
#define NICKNAME_ERROR_ENUM_HPP

namespace network
{
    enum nickname_error_enum
    {
        ALREADY_USED = 1,
        SAME_AS_LOGIN = 2,
        TOO_SIMILAR_TO_LOGIN = 3,
        INVALID_NICK = 4,
        UNKNOWN_NICK_ERROR = 99
    };
}

#endif // NICKNAME_ERROR_ENUM_HPP