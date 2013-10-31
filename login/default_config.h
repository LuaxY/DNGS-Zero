#ifndef DEFAULT_CONFIG_H
#define DEFAULT_CONFIG_H

const std::string DATABASE_HOST_DEFAULT = "127.0.0.1";
const std::string DATABASE_NAME_DEFAULT = "dngs_login";
const std::string DATABASE_USER_DEFAULT = "postgres";
const std::string DATABASE_PASSWORD_DEFAULT = "postgres";
const unsigned short DATABASE_PORT_DEFAULT = 5432;

const unsigned short LOGIN_PORT_DEFAULT = 5555;
const unsigned short LOGIN_MAXUSER_DEFAULT = 200;
const unsigned int LOGIN_REQUIREDVERSION_DEFAULT = 0;
const unsigned int LOGIN_CURRENTVERSION_DEFAULT = 0;

#endif // DEFAULT_CONFIG_H
