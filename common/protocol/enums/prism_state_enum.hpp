#ifndef PRISM_STATE_ENUM_HPP
#define PRISM_STATE_ENUM_HPP

namespace network
{
    enum prism_state_enum
    {
        PRISM_STATE_INVULNERABLE = 0,
        PRISM_STATE_NORMAL = 1,
        PRISM_STATE_ATTACKED = 2,
        PRISM_STATE_FIGHTING = 3,
        PRISM_STATE_WEAKENED = 4,
        PRISM_STATE_VULNERABLE = 5,
        PRISM_STATE_DEFEATED = 6,
        PRISM_STATE_SABOTAGED = 7
    };
}

#endif // PRISM_STATE_ENUM_HPP