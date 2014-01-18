#ifndef SERVER_STATUS_ENUM_HPP
#define SERVER_STATUS_ENUM_HPP

namespace network
{
    enum server_status_enum
    {
        STATUS_UNKNOWN = 0,
        OFFLINE = 1,
        STARTING = 2,
        ONLINE = 3,
        NOJOIN = 4,
        SAVING = 5,
        STOPING = 6,
        FULL = 7
    };
}

#endif // SERVER_STATUS_ENUM_HPP