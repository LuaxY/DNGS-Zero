#ifndef DATABASE_H
#define DATABASE_H

#include <iostream>
#include <pqxx/pqxx>

#include "Config/Config.h"
#include "Utils/Logger.h"

using namespace std;
using namespace pqxx;

class Database
{
public:
    static Database* Instance();
    ~Database();
    void init();
    void selectDefault();
    nontransaction* db;

private:
    Database() {};
    Database(Database const&) {};
    Database& operator=(Database const&) {};
    static Database* m_pInstance;
    connection* conn;
};

#endif // DATABASE_H
