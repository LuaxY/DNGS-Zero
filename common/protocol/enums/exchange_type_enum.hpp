#ifndef EXCHANGE_TYPE_ENUM_HPP
#define EXCHANGE_TYPE_ENUM_HPP

namespace network
{
    enum exchange_type_enum
    {
        NPC_SHOP = 0,
        PLAYER_TRADE = 1,
        NPC_TRADE = 2,
        CRAFT = 3,
        DISCONNECTED_VENDOR = 4,
        STORAGE = 5,
        SHOP_STOCK = 6,
        TAXCOLLECTOR = 8,
        NPC_MODIFY_TRADE = 9,
        BIDHOUSE_SELL = 10,
        BIDHOUSE_BUY = 11,
        MULTICRAFT_CRAFTER = 12,
        MULTICRAFT_CUSTOMER = 13,
        JOB_INDEX = 14,
        MOUNT = 15,
        MOUNT_STABLE = 16,
        NPC_RESURECT_PET = 17,
        NPC_TRADE_MOUNT = 18,
        REALESTATE_HOUSE = 19,
        REALESTATE_FARM = 20
    };
}

#endif // EXCHANGE_TYPE_ENUM_HPP