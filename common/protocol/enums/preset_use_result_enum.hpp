#ifndef PRESET_USE_RESULT_ENUM_HPP
#define PRESET_USE_RESULT_ENUM_HPP

namespace network
{
    enum preset_use_result_enum
    {
        PRESET_USE_OK = 1,
        PRESET_USE_OK_PARTIAL = 2,
        PRESET_USE_ERR_UNKNOWN = 3,
        PRESET_USE_ERR_CRITERION = 4,
        PRESET_USE_ERR_BAD_PRESET_ID = 5
    };
}

#endif // PRESET_USE_RESULT_ENUM_HPP