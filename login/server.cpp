#include "server.hpp"

Server::Server() : config { { "login.xml", "misc.xml" } }
{
}

shutdown_type Server::run(int argc, char* argv[])
{
    Logger::level_allowed = (verbosity)config.get_property("verbose_level", (int)verbosity::DEFAULT);
    Logger::is_filelog = config.get_property("filelog", true);

    std::ostringstream login_version;
    std::ostringstream dofus_version;
    login_version << LOGIN_VERSION_MAJOR << "." << LOGIN_VERSION_MINOR << "." << LOGIN_VERSION_REVISION;
    dofus_version << DOFUS_VERSION_MAJOR << "." << DOFUS_VERSION_MINOR << "." << DOFUS_VERSION_RELEASE << "." << DOFUS_VERSION_REVISION << "." << DOFUS_VERSION_PATCH;

    std::cout << std::endl;
    std::cout << "DNGS Zero - Login (DEV) by LuaxY (" << __DATE__ << " " << __TIME__ << ")" << std::endl;
    std::cout << "[ login " << login_version.str() << " ] ";
    std::cout << "[ dofus " << dofus_version.str() << " ]" << std::endl << std::endl;

    Database database = Database::create();
    database.init(config.get_property("database_host", DATABASE_HOST_DEFAULT),
        config.get_property("database_user", DATABASE_USER_DEFAULT),
        config.get_property("database_password", DATABASE_PASSWORD_DEFAULT),
        config.get_property("database_name", DATABASE_NAME_DEFAULT));

    //pInfo(verbosity::HIGHT) << location();

    boost::asio::ip::tcp::acceptor _listen(_service, boost::asio::ip::tcp::endpoint(boost::asio::ip::tcp::v4(), config.get_property("login_port", LOGIN_PORT_DEFAULT)));
    _service.run();

    database.kill();

    return shutdown_type::NORMAL;
};
