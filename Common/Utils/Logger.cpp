#include "Utils/Logger.h"

std::string Logger::Logger::getCurrentTime()
{
    time_t t = time(0);
    struct tm *now = localtime(&t);
    std::string currentTime;
    std::stringstream tmp;

    tmp << now->tm_hour << ':'
        << now->tm_min << ':'
        << now->tm_sec;

    currentTime = tmp.str();

    return currentTime;
}

Logger::debug::debug()
{
    msg << "[\033[1;34mdbug\033[0m] [" << Logger::getCurrentTime() << "] ";
}

Logger::ok::ok()
{
    msg << "[\033[1;32m ok \033[0m] [" << Logger::getCurrentTime() << "] ";
}

Logger::fail::fail()
{
    msg << "[\033[1;31mfail\033[0m] [" << Logger::getCurrentTime() << "] ";
}

Logger::warn::warn()
{
    msg << "[\033[1;33mwarn\033[0m] [" << Logger::getCurrentTime() << "] ";
}

Logger::info::info()
{
    msg << "[\033[1;35minfo\033[0m] [" << Logger::getCurrentTime() << "] ";
}
