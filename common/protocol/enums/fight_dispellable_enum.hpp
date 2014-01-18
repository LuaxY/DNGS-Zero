#ifndef FIGHT_DISPELLABLE_ENUM_HPP
#define FIGHT_DISPELLABLE_ENUM_HPP

namespace network
{
    enum fight_dispellable_enum
    {
        DISPELLABLE = 1,
        DISPELLABLE_BY_DEATH = 2,
        DISPELLABLE_BY_STRONG_DISPEL = 3,
        REALLY_NOT_DISPELLABLE = 4
    };
}

#endif // FIGHT_DISPELLABLE_ENUM_HPP