#ifndef DATABASE_HPP
#define DATABASE_HPP

#include <iostream>
#include <pqxx/pqxx>

#include "server.hpp"
#include "config/config.hpp"
#include "utils/logger.hpp"
#include "utils/singleton.hpp"

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

#endif // DATABASE_HPP
