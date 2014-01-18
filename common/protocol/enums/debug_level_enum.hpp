#ifndef DEBUG_LEVEL_ENUM_HPP
#define DEBUG_LEVEL_ENUM_HPP

namespace network
{
    enum debug_level_enum
    {
        LEVEL_TRACE = 0,
        LEVEL_DEBUG = 1,
        LEVEL_INFO = 2,
        LEVEL_WARN = 3,
        LEVEL_ERROR = 4,
        LEVEL_FATAL = 5
    };
}

#endif // DEBUG_LEVEL_ENUM_HPP