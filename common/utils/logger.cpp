#include "utils/logger.hpp"

verbosity Logger::level_allowed = verbosity::DEFAULT;
bool Logger::is_filelog = true;

Logger::~Logger()
{
    if(is_filelog && level_allowed >= level)
    {
        std::ofstream logFile("logs/login-" + started_time + ".log", std::ios::out | std::ios::app);
        if(logFile.is_open())
        {
            logFile << title_logfile.str() << msg.str() << std::endl;
            logFile.close();
        }
    }

    if(level_allowed >= level)
        std::cout << title_console.str() << msg.str() << std:: endl;
}

void Logger::display_time()
{
    // #ifdef SHOW_TIME
    msg <<  "[" << get_current_time() << "] ";
    // #endif
}

pDebug::pDebug(verbosity _level)
{
    level = _level;
    title_console << "[\033[1;34mdbug\033[0m] ";
    title_logfile << "[dbug] ";
    display_time();
}

pOk::pOk(verbosity _level)
{
    level = _level;
    title_console << "[\033[1;32m ok \033[0m] ";
    title_logfile << "[ ok ] ";
    display_time();
}

pFail::pFail(verbosity _level)
{
    level = _level;
    title_console << "[\033[1;31mfail\033[0m] ";
    title_logfile << "[fail] ";
    display_time();
}

pWarn::pWarn(verbosity _level)
{
    level = _level;
    title_console << "[\033[1;33mwarn\033[0m] ";
    title_logfile << "[warn] ";
    display_time();
}

pInfo::pInfo(verbosity _level)
{
    level = _level;
    title_console << "[\033[1;35minfo\033[0m] ";
    title_logfile << "[info] ";
    display_time();
}

pError::pError(verbosity _level)
{
    level = _level;
    title_console << "[\033[1;31merro\033[0m] ";
    title_logfile << "[erro] ";
    display_time();
}
