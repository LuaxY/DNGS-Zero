#ifndef CHARACTER_DELETION_ERROR_ENUM_HPP
#define CHARACTER_DELETION_ERROR_ENUM_HPP

namespace network
{
    enum character_deletion_error_enum
    {
        DEL_ERR_NO_REASON = 1,
        DEL_ERR_TOO_MANY_CHAR_DELETION = 2,
        DEL_ERR_BAD_SECRET_ANSWER = 3,
        DEL_ERR_RESTRICED_ZONE = 4
    };
}

#endif // CHARACTER_DELETION_ERROR_ENUM_HPP