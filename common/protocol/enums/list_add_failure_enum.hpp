#ifndef LIST_ADD_FAILURE_ENUM_HPP
#define LIST_ADD_FAILURE_ENUM_HPP

namespace network
{
    enum list_add_failure_enum
    {
        LIST_ADD_FAILURE_UNKNOWN = 0,
        LIST_ADD_FAILURE_OVER_QUOTA = 1,
        LIST_ADD_FAILURE_NOT_FOUND = 2,
        LIST_ADD_FAILURE_EGOCENTRIC = 3,
        LIST_ADD_FAILURE_IS_DOUBLE = 4
    };
}

#endif // LIST_ADD_FAILURE_ENUM_HPP