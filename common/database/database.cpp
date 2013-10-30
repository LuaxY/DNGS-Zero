#include "database/database.h"

Database::~Database()
{
    delete db;
    delete conn;
}

void Database::init()
{
    Config* config = Config::getInstance();

    try
    {
        conn = new pqxx::connection(" user=" + config->username +
                              " host=" + config->host +
                              " password=" + config->password +
                              " dbname=" + config->database);
    }
    catch(const exception &e)
    {
        Logger::fail() << "unable to connect to the database.";
        exit(1);
    }

    db = new pqxx::nontransaction(*conn);

    //result r = db->exec("SELECT * FROM accounts");
    //cout << r[0][1].as<string>() << endl;
    Logger::ok() << "connected to database.";
}

void Database::selectDefault()
{
    //Config* config = Config::getInstance();
}
