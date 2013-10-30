#ifndef DATABASE_H
#define DATABASE_H

#include <iostream>
#include <pqxx/pqxx>

#include "config/config.h"
#include "utils/logger.h"
#include "utils/singleton.h"

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
