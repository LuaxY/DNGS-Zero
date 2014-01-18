#ifndef SUBSCRIPTION_REQUIRED_ENUM_HPP
#define SUBSCRIPTION_REQUIRED_ENUM_HPP

namespace network
{
    enum subscription_required_enum
    {
        LIMITED_TO_SUBSCRIBER = 0,
        LIMIT_ON_JOB_XP = 1,
        LIMIT_ON_JOB_USE = 2,
        LIMIT_ON_MAP = 3,
        LIMIT_ON_ITEM = 4,
        LIMIT_ON_VENDOR = 5
    };
}

#endif // SUBSCRIPTION_REQUIRED_ENUM_HPP