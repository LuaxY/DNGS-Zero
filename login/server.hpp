#ifndef SERVER_HPP
#define SERVER_HPP

#include "utils/logger.hpp"
#include "utils/singleton.hpp"
#include "config/config.hpp"
#include "database/database.hpp"
#include "default_config.hpp"

enum shutdown_type
{
    NOT_REQUESTED,
    NORMAL,
    REBOOT,
};

constexpr int LOGIN_VERSION_MAJOR = 0,
    LOGIN_VERSION_MINOR = 0,
    LOGIN_VERSION_REVISION = 8;

class Server : public Singleton<Server>
{
public:
    Server();
    shutdown_type run(int argc, char* argv[]);
    Config config;
};

#define g_config Server::instance().config

#endif // SERVER_HPP
