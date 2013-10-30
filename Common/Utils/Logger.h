#ifndef LOGGER_H
#define LOGGER_H

#include <iostream>
#include <sstream>
#include <string>
#include <cstring>
#include <ctime>

#define pLog() { cout << (strrchr(__FILE__, '/') ? strrchr(__FILE__, '/') + 1 : __FILE__) << ":" << __LINE__ << ":" << __FUNCTION__ << "()" << endl; }
#define sLog() ({ stringstream ret; ret << (strrchr(__FILE__, '/') ? strrchr(__FILE__, '/') + 1 : __FILE__) << ":" << __LINE__ << ":" << __FUNCTION__ << "()"; ret.str(); })

/*class Logger
{
    public:
        static void Log(LOG_NAME logName, std::string location, std::string message, bool newLine = true);
        static bool isDebugLogEnabled();

    private:
        static std::string getCurrentTime();
        static const bool debugLog = true;
        static const bool timeLog = true;
};*/

namespace Logger
{
    class Logger
    {
    public:
        ~Logger()
        {
            std::cerr << msg.str() << std:: endl;
        }

        template<class T>
        Logger &operator<<(const T &x)
        {
            msg << x << " ";
            return *this;
        }

    protected:
        std::ostringstream msg;
        static std::string getCurrentTime();
    };

    class debug : public Logger
    {
    public:
        debug();
    };

    class ok : public Logger
    {
    public:
        ok();
    };

    class fail : public Logger
    {
    public:
        fail();
    };

    class warn : public Logger
    {
    public:
        warn();
    };

    class info : public Logger
    {
    public:
        info();
    };
}

#endif // LOGGER_H
