#ifndef IDENTIFICATION_FAILURE_REASON_ENUM_HPP
#define IDENTIFICATION_FAILURE_REASON_ENUM_HPP

namespace network
{
    enum identification_failure_reason_enum
    {
        BAD_VERSION = 1,
        WRONG_CREDENTIALS = 2,
        BANNED = 3,
        KICKED = 4,
        IN_MAINTENANCE = 5,
        TOO_MANY_ON_IP = 6,
        TIME_OUT = 7,
        BAD_IPRANGE = 8,
        CREDENTIALS_RESET = 9,
        EMAIL_UNVALIDATED = 10,
        SERVICE_UNAVAILABLE = 53,
        UNKNOWN_AUTH_ERROR = 99,
        SPARE = 100
    };
}

#endif // IDENTIFICATION_FAILURE_REASON_ENUM_HPP