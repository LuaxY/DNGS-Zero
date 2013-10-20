#include "Config/Config.h"

Config* Config::m_pInstance = NULL;

Config* Config::Instance()
{
    if(!m_pInstance)
        m_pInstance = new Config;

    return m_pInstance;
}

void Config::init(char* config_file)
{
    INIReader reader(config_file);

    if(reader.ParseError() == -1)
    {
        Logger::Log(WARN, sLog(), "configuration file not found, default configuration selected.");
    }

    /** auth **/
    port = reader.GetInteger("auth", "port", 443);
    max_user = reader.GetInteger("auth", "max_user", 200);
    requiredVersion = reader.GetInteger("auth", "requiredVersion", 0);
    currentVersion = reader.GetInteger("auth", "currentVersion", 0);

    /** database **/
    host = reader.Get("database", "host", "127.0.0.1");
    username = reader.Get("database", "username", "root");
    password = reader.Get("database", "password", "");
    database = reader.Get("database", "database", "dngs_login");

    Logger::Log(OK, sLog(), "configuration initialized.");
}
