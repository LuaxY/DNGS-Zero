#ifndef DEFAULT_CONFIG_HPP
#define DEFAULT_CONFIG_HPP

#define DOFUS_VERSION_MAJOR 2
#define DOFUS_VERSION_MINOR 17
#define DOFUS_VERSION_RELEASE 1
#define DOFUS_VERSION_REVISION 80439
#define DOFUS_VERSION_PATCH 0

const std::string DATABASE_HOST_DEFAULT = "127.0.0.1";
const std::string DATABASE_NAME_DEFAULT = "dngs_login";
const std::string DATABASE_USER_DEFAULT = "postgres";
const std::string DATABASE_PASSWORD_DEFAULT = "postgres";
const unsigned short DATABASE_PORT_DEFAULT = 5432;

const unsigned short LOGIN_PORT_DEFAULT = 5555;
const unsigned short LOGIN_MAXUSER_DEFAULT = 200;
const unsigned int LOGIN_REQUIREDVERSION_DEFAULT = 0;
const unsigned int LOGIN_CURRENTVERSION_DEFAULT = 0;

#endif // DEFAULT_CONFIG_HPP
