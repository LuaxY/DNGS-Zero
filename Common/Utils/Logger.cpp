#include "Utils/Logger.h"

bool Logger::isDebugLogEnabled()
{
    return debugLog;
}

void Logger::Log(LOG_NAME logName, string location, string message, bool newLine)
{
    if(logName == DEBUG && !debugLog)
        return;

    switch(logName)
    {
        case OK:
            cout << "[\033[1;32m ok \033[0m] ";
            break;
        case DEBUG:
            cout << "[\033[1;34mdbug\033[0m] ";
            break;
        case ERROR:
            cout << "[\033[1;31merro\033[0m] ";
            break;
        case FAIL:
            cout << "[\033[1;31mfail\033[0m] ";
            break;
        case WARN:
            cout << "[\033[1;35mwarn\033[0m] ";
            break;
        case INFO:
        default:
            cout << "[\033[1;33minfo\033[0m] ";
            break;
    }

    if(timeLog)
        cout << "[" << Logger::getCurrentTime() << "] ";

    if(logName == ERROR || logName == FAIL)
        cout << "[" << location << "] ";

    cout << message;

    if(newLine)
        cout << endl;
}

string Logger::getCurrentTime()
{
    time_t t = time(0);
    struct tm *now = localtime(&t);
    string currentTime;
    stringstream tmp;

    tmp << now->tm_hour << ':'
        << now->tm_min << ':'
        << now->tm_sec;

    currentTime = tmp.str();

    return currentTime;
}
