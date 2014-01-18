#ifndef PRESET_DELETE_RESULT_ENUM_HPP
#define PRESET_DELETE_RESULT_ENUM_HPP

namespace network
{
    enum preset_delete_result_enum
    {
        PRESET_DEL_OK = 1,
        PRESET_DEL_ERR_UNKNOWN = 2,
        PRESET_DEL_ERR_BAD_PRESET_ID = 3
    };
}

#endif // PRESET_DELETE_RESULT_ENUM_HPP