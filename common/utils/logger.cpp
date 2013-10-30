#include "utils/logger.h"

Logger::Logger::~Logger()
{
    // #ifdef LOG_FILE
    Config* config = Config::getInstance();

    std::ofstream logFile("log/login-" + config->startedTime + ".log", std::ios::out | std::ios::app);
    if(logFile.is_open())
    {
        logFile << titleLog.str() << msg.str() << std::endl;
        logFile.close();
    }
    // #endif

    std::cerr << titleConsole.str() << msg.str() << std:: endl;
}

void Logger::Logger::displayTime()
{
    // #ifdef SHOW_TIME
    msg <<  "[" << getCurrentTime() << "] ";
    // #endif
}

Logger::debug::debug()
{
    titleConsole << "[\033[1;34mdbug\033[0m] ";
    titleLog << "[dbug] ";
    displayTime();
}

Logger::ok::ok()
{
    titleConsole << "[\033[1;32m ok \033[0m] ";
    titleLog << "[ ok ] ";
    displayTime();
}

Logger::fail::fail()
{
    titleConsole << "[\033[1;31mfail\033[0m] ";
    titleLog << "[fail] ";
    displayTime();
}

Logger::warn::warn()
{
    titleConsole << "[\033[1;33mwarn\033[0m] ";
    titleLog << "[warn] ";
    displayTime();
}

Logger::info::info()
{
    titleConsole << "[\033[1;35minfo\033[0m] ";
    titleLog << "[info] ";
    displayTime();
}
