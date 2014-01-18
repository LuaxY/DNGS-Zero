#ifndef SEQUENCE_TYPE_ENUM_HPP
#define SEQUENCE_TYPE_ENUM_HPP

namespace network
{
    enum sequence_type_enum
    {
        SEQUENCE_SPELL = 1,
        SEQUENCE_WEAPON = 2,
        SEQUENCE_GLYPH_TRAP = 3,
        SEQUENCE_TRIGGERED = 4,
        SEQUENCE_MOVE = 5,
        SEQUENCE_CHARACTER_DEATH = 6,
        SEQUENCE_TURN_START = 7,
        SEQUENCE_TURN_END = 8,
        SEQUENCE_FIGHT_START = 9
    };
}

#endif // SEQUENCE_TYPE_ENUM_HPP