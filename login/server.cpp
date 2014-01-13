#include "server.h"

Server::Server() : config { { "login.xml", "misc.xml" } }
{
}

shutdown_type Server::run(int argc, char* argv[])
{
    std::ostringstream version;
    version << LOGIN_VERSION_MAJOR << "." << LOGIN_VERSION_MINOR << "." << LOGIN_VERSION_REVISION;

    std::cout << std::endl;
    std::cout << "DNGS Zero - Login (DEV) by LuaxY (" << __DATE__ << " " << __TIME__ << ")" << std::endl;
    std::cout << "[ login " << version.str() << " ] ";
    std::cout << "[ dofus " << DOFUS_VERSION_MAJOR << "."
        << DOFUS_VERSION_MINOR << "."
        << DOFUS_VERSION_RELEASE << "."
        << DOFUS_VERSION_REVISION << "."
        << DOFUS_VERSION_PATCH << " ]" << std::endl << std::endl;

    /** Connect to database **/
    Database database = Database::create();
    database.init(config.get_property("database_host", DATABASE_HOST_DEFAULT),
        config.get_property("database_user", DATABASE_USER_DEFAULT),
        config.get_property("database_password", DATABASE_PASSWORD_DEFAULT),
        config.get_property("database_name", DATABASE_NAME_DEFAULT));

    /** Start listening clients **/

    database.kill();

    return shutdown_type::NORMAL;
};
