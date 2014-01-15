#ifndef SERVER_H
#define SERVER_H

#include "utils/logger.h"
#include "utils/singleton.h"
#include "config/config.h"
#include "database/database.h"
#include "default_config.h"

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

#define g_config Server::instance().config()

#endif // SERVER_H
