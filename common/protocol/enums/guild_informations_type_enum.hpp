#ifndef GUILD_INFORMATIONS_TYPE_ENUM_HPP
#define GUILD_INFORMATIONS_TYPE_ENUM_HPP

namespace network
{
    enum guild_informations_type_enum
    {
        INFO_GENERAL = 1,
        INFO_MEMBERS = 2,
        INFO_BOOSTS = 3,
        INFO_PADDOCKS = 4,
        INFO_HOUSES = 5,
        INFO_TAX_COLLECTOR_GUILD_ONLY = 6,
        INFO_TAX_COLLECTOR_ALLIANCE = 7,
        INFO_TAX_COLLECTOR_LEAVE = 8
    };
}

#endif // GUILD_INFORMATIONS_TYPE_ENUM_HPP