#ifndef DATABASE_H
#define DATABASE_H

#include <iostream>
#include <pqxx/pqxx>

#include "server.h"
#include "config/config.h"
#include "utils/logger.h"
#include "utils/singleton.h"

class Database : public Singleton<Database>
{
public:
    ~Database();
    void init(std::string host, std::string username, std::string password, std::string dbname);
    void select_default();
    pqxx::nontransaction* db;

private:
    pqxx::connection* conn;
};

#endif // DATABASE_H
