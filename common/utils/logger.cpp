#include "utils/logger.hpp"
#include "server.hpp"

Logger::Logger::~Logger()
{
    verbosity allowed = (verbosity)g_config.get_property("verbose_level", (int)verbosity::DEFAULT);
    bool is_filelog = g_config.get_property("filelog", true);

    if(is_filelog && allowed >= level)
    {
        std::ofstream logFile("logs/login-" + started_time + ".log", std::ios::out | std::ios::app);
        if(logFile.is_open())
        {
            logFile << title_logfile.str() << msg.str() << std::endl;
            logFile.close();
        }
    }

    if(allowed >= level)
        std::cerr << title_console.str() << msg.str() << std:: endl;
}

void Logger::Logger::display_time()
{
    // #ifdef SHOW_TIME
    msg <<  "[" << get_current_time() << "] ";
    // #endif
}

Logger::debug::debug(verbosity _level)
{
    level = _level;
    title_console << "[\033[1;34mdbug\033[0m] ";
    title_logfile << "[dbug] ";
    display_time();
}

Logger::ok::ok(verbosity _level)
{
    level = _level;
    title_console << "[\033[1;32m ok \033[0m] ";
    title_logfile << "[ ok ] ";
    display_time();
}

Logger::fail::fail(verbosity _level)
{
    level = _level;
    title_console << "[\033[1;31mfail\033[0m] ";
    title_logfile << "[fail] ";
    display_time();
}

Logger::warn::warn(verbosity _level)
{
    level = _level;
    title_console << "[\033[1;33mwarn\033[0m] ";
    title_logfile << "[warn] ";
    display_time();
}

Logger::info::info(verbosity _level)
{
    level = _level;
    title_console << "[\033[1;35minfo\033[0m] ";
    title_logfile << "[info] ";
    display_time();
}

Logger::error::error(verbosity _level)
{
    level = _level;
    title_console << "[\033[1;31merro\033[0m] ";
    title_logfile << "[erro] ";
    display_time();
}
