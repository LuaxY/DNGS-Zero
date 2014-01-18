#ifndef CHARACTER_SPELL_MODIFICATION_TYPE_ENUM_HPP
#define CHARACTER_SPELL_MODIFICATION_TYPE_ENUM_HPP

namespace network
{
    enum character_spell_modification_type_enum
    {
        INVALID_MODIFICATION = 0,
        RANGEABLE = 1,
        DAMAGE = 2,
        BASE_DAMAGE = 3,
        HEAL_BONUS = 4,
        AP_COST = 5,
        CAST_INTERVAL = 6,
        CAST_INTERVAL_SET = 7,
        CRITICAL_HIT_BONUS = 8,
        CAST_LINE = 9,
        LOS = 10,
        MAX_CAST_PER_TURN = 11,
        MAX_CAST_PER_TARGET = 12,
        RANGE = 13
    };
}

#endif // CHARACTER_SPELL_MODIFICATION_TYPE_ENUM_HPP