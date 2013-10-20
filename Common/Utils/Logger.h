#ifndef LOGGER_H
#define LOGGER_H

#include <iostream>
#include <sstream>
#include <string>
#include <cstring>
#include <ctime>

#define pLog() { cout << (strrchr(__FILE__, '/') ? strrchr(__FILE__, '/') + 1 : __FILE__) << ":" << __LINE__ << ":" << __FUNCTION__ << "()" << endl; }
#define sLog() ({ stringstream ret; ret << (strrchr(__FILE__, '/') ? strrchr(__FILE__, '/') + 1 : __FILE__) << ":" << __LINE__ << ":" << __FUNCTION__ << "()"; ret.str(); })

using namespace std;

enum LOG_NAME
{
    OK,
    DEBUG,
    INFO,
    ERROR,
    FAIL,
    WARN
};

class Logger
{
    public:
        static void Log(LOG_NAME logName, string location, string message, bool newLine = true);
        static bool isDebugLogEnabled();

    private:
        static string getCurrentTime();
        static const bool debugLog = true;
        static const bool timeLog = true;
};

#endif // LOGGER_H
