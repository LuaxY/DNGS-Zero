#ifndef PART_STATE_ENUM_HPP
#define PART_STATE_ENUM_HPP

namespace network
{
    enum part_state_enum
    {
        PART_NOT_INSTALLED = 0,
        PART_BEING_UPDATER = 1,
        PART_UP_TO_DATE = 2
    };
}

#endif // PART_STATE_ENUM_HPP