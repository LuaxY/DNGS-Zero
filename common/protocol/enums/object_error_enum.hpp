#ifndef OBJECT_ERROR_ENUM_HPP
#define OBJECT_ERROR_ENUM_HPP

namespace network
{
    enum object_error_enum
    {
        INVENTORY_FULL = 1,
        CANNOT_EQUIP_TWICE = 2,
        NOT_TRADABLE = 3,
        CANNOT_DROP = 4,
        CANNOT_DROP_NO_PLACE = 5,
        CANNOT_DESTROY = 6,
        LEVEL_TOO_LOW = 7,
        LIVING_OBJECT_REFUSED_FOOD = 8,
        CANNOT_UNEQUIP = 9,
        CANNOT_EQUIP_HERE = 10,
        CRITERIONS = 11,
        MIMICRY_OBJECT_ERROR = 12
    };
}

#endif // OBJECT_ERROR_ENUM_HPP