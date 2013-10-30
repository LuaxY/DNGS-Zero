#ifndef LOGGER_H
#define LOGGER_H

#include <iostream>
#include <fstream>

#include "config/config.h"
#include "utils/time.h"

#define pLog() { cout << (strrchr(__FILE__, '/') ? strrchr(__FILE__, '/') + 1 : __FILE__) << ":" << __LINE__ << ":" << __FUNCTION__ << "()" << endl; }
#define sLog() ({ stringstream ret; ret << (strrchr(__FILE__, '/') ? strrchr(__FILE__, '/') + 1 : __FILE__) << ":" << __LINE__ << ":" << __FUNCTION__ << "()"; ret.str(); })

namespace Logger
{
    class Logger
    {
    public:
        ~Logger();

        template<class T>
        Logger &operator<<(const T &x)
        {
            msg << x << " ";
            return *this;
        }

    protected:
        std::ostringstream msg;
        std::ostringstream titleConsole;
        std::ostringstream titleLog;

        void displayTime();
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
