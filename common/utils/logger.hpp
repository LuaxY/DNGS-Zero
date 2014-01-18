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


class Logger
{
public:
    static verbosity level_allowed;
    static bool is_filelog;

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

    void display_time();
};

class pDebug : public Logger
{
public:
    pDebug(verbosity level = verbosity::DEFAULT);
};

class pOk : public Logger
{
public:
    pOk(verbosity level = verbosity::DEFAULT);
};

class pFail : public Logger
{
public:
    pFail(verbosity level = verbosity::DEFAULT);
};

class pWarn : public Logger
{
public:
    pWarn(verbosity level = verbosity::DEFAULT);
};

class pInfo : public Logger
{
public:
    pInfo(verbosity level = verbosity::DEFAULT);
};

class pError : public Logger
{
public:
    pError(verbosity level = verbosity::DEFAULT);
};

#endif // LOGGER_HPP
