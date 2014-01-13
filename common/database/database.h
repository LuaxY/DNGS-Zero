#ifndef DATABASE_H
#define DATABASE_H

#include <iostream>
#include <odb/database.hxx>

#if defined(DATABASE_MYSQL)
#  include <odb/mysql/database.hxx>
#elif defined(DATABASE_PGSQL)
#  include <odb/pgsql/database.hxx>
#elif defined(DATABASE_ORACLE)
#  include <odb/oracle/database.hxx>
#elif defined(DATABASE_MSSQL)
#  include <odb/mssql/database.hxx>
#else
#  error unknown database; did you forget to define the DATABASE_* macros?
#endif

#include "server.h"
#include "config/config.h"
#include "utils/logger.h"
#include "utils/singleton.h"

class Database : public Singleton<Database>
{
public:
    ~Database();
    void init(std::string host, std::string user, std::string password, std::string name);
    void select_default();
    std::auto_ptr<odb::database> db;

private:
    inline std::auto_ptr<odb::database> create_database(std::string _user, std::string _password, std::string _name);
};

#endif // DATABASE_H
