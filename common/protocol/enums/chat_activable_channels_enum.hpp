#ifndef CHAT_ACTIVABLE_CHANNELS_ENUM_HPP
#define CHAT_ACTIVABLE_CHANNELS_ENUM_HPP

namespace network
{
    enum chat_activable_channels_enum
    {
        CHANNEL_GLOBAL = 0,
        CHANNEL_TEAM = 1,
        CHANNEL_GUILD = 2,
        CHANNEL_ALLIANCE = 3,
        CHANNEL_PARTY = 4,
        CHANNEL_SALES = 5,
        CHANNEL_SEEK = 6,
        CHANNEL_NOOB = 7,
        CHANNEL_ADMIN = 8,
        CHANNEL_ADS = 12,
        CHANNEL_ARENA = 13,
        PSEUDO_CHANNEL_PRIVATE = 9,
        PSEUDO_CHANNEL_INFO = 10,
        PSEUDO_CHANNEL_FIGHT_LOG = 11
    };
}

#endif // CHAT_ACTIVABLE_CHANNELS_ENUM_HPP