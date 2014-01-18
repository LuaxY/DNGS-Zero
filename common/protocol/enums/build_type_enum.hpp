#ifndef BUILD_TYPE_ENUM_HPP
#define BUILD_TYPE_ENUM_HPP

namespace network
{
    enum build_type_enum
    {
        RELEASE = 0,
        BETA = 1,
        ALPHA = 2,
        TESTING = 3,
        INTERNAL = 4,
        DEBUG = 5,
        EXPERIMENTAL = 6
    };
}

#endif // BUILD_TYPE_ENUM_HPP