#include "Database/Database.h"

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
        Logger::fail() << sLog() << e.what();
        exit(1);
    }

    db = new pqxx::nontransaction(*conn);

    //result r = db->exec("SELECT * FROM accounts");
    //cout << r[0][1].as<string>() << endl;
    Logger::ok() << sLog() << "connected to database.";
}

void Database::selectDefault()
{
    //Config* config = Config::Instance();
}
