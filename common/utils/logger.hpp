#ifndef LOGGER_HPP
#define LOGGER_HPP

#include <iostream>
#include <fstream>

#include "config/config.hpp"
#include "utils/time.hpp"

#define location() ({ std::stringstream ret; ret << (strrchr(__FILE__, '/') ? strrchr(__FILE__, '/') + 1 : __FILE__) << ":" << __LINE__ << ":" << __FUNCTION__ << "()"; ret.str(); })
#define print_location() { std::cout << location() << std::endl; }

enum verbosity
{
    DEFAULT,
    LOW,
    MEDIUM,
    HIGHT,
    ALL
};

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
        std::ostringstream title_console;
        std::ostringstream title_logfile;
        verbosity level;
        //Config config;

        void display_time();
    };

    class debug : public Logger
    {
    public:
        debug(verbosity level = verbosity::DEFAULT);
    };

    class ok : public Logger
    {
    public:
        ok(verbosity level = verbosity::DEFAULT);
    };

    class fail : public Logger
    {
    public:
        fail(verbosity level = verbosity::DEFAULT);
    };

    class warn : public Logger
    {
    public:
        warn(verbosity level = verbosity::DEFAULT);
    };

    class info : public Logger
    {
    public:
        info(verbosity level = verbosity::DEFAULT);
    };

    class error : public Logger
    {
    public:
        error(verbosity level = verbosity::DEFAULT);
    };
}

#endif // LOGGER_HPP
