#include "utils/logger.h"

Logger::Logger::~Logger()
{
    // #ifdef LOG_FILE
    std::ofstream logFile("logs/login-" + started_time + ".log", std::ios::out | std::ios::app);
    if(logFile.is_open())
    {
        logFile << title_logfile.str() << msg.str() << std::endl;
        logFile.close();
    }
    // #endif

    std::cerr << title_console.str() << msg.str() << std:: endl; // LINUX mode with colors.
}

void Logger::Logger::display_time()
{
    // #ifdef SHOW_TIME
    msg <<  "[" << get_current_time() << "] ";
    // #endif
}

Logger::debug::debug()
{
    title_console << "[\033[1;34mdbug\033[0m] ";
    title_logfile << "[dbug] ";
    display_time();
}

Logger::ok::ok()
{
    title_console << "[\033[1;32m ok \033[0m] ";
    title_logfile << "[ ok ] ";
    display_time();
}

Logger::fail::fail()
{
    title_console << "[\033[1;31mfail\033[0m] ";
    title_logfile << "[fail] ";
    display_time();
}

Logger::warn::warn()
{
    title_console << "[\033[1;33mwarn\033[0m] ";
    title_logfile << "[warn] ";
    display_time();
}

Logger::info::info()
{
    title_console << "[\033[1;35minfo\033[0m] ";
    title_logfile << "[info] ";
    display_time();
}

Logger::error::error()
{
    title_console << "[\033[1;31merro\033[0m] ";
    title_logfile << "[erro] ";
    display_time();
}
