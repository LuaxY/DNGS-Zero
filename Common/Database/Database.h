#ifndef DATABASE_H
#define DATABASE_H

#include <iostream>
#include <pqxx/pqxx>

#include "Config/Config.h"
#include "Utils/Logger.h"
#include "Utils/Singleton.h"

class Database : public Singleton<Database>
{
public:
    ~Database();
    void init();
    void selectDefault();
    pqxx::nontransaction* db;

private:
    pqxx::connection* conn;
};

#endif // DATABASE_H
