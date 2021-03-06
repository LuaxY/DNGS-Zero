#ifndef SERVER_CONNECTION_ERROR_ENUM_HPP
#define SERVER_CONNECTION_ERROR_ENUM_HPP

namespace network
{
    enum server_connection_error_enum
    {
        SERVER_CONNECTION_ERROR_DUE_TO_STATUS = 0,
        SERVER_CONNECTION_ERROR_NO_REASON = 1,
        SERVER_CONNECTION_ERROR_ACCOUNT_RESTRICTED = 2,
        SERVER_CONNECTION_ERROR_COMMUNITY_RESTRICTED = 3,
        SERVER_CONNECTION_ERROR_LOCATION_RESTRICTED = 4,
        SERVER_CONNECTION_ERROR_SUBSCRIBERS_ONLY = 5,
        SERVER_CONNECTION_ERROR_REGULAR_PLAYERS_ONLY = 6
    };
}

#endif // SERVER_CONNECTION_ERROR_ENUM_HPP