#include "database/database.h"

Database::~Database()
{
    delete db;
    delete conn;
}

void Database::init(std::string host, std::string user, std::string password, std::string name)
{
    try
    {
        conn = new pqxx::connection(" user=" + user +
                              " host=" + host +
                              " password=" + password +
                              " dbname=" + name);
    }
    catch(const std::exception& e)
    {
        throw std::logic_error("unable to conntect to the database");
    }

    db = new pqxx::nontransaction(*conn);

    //result r = db->exec("SELECT * FROM accounts");
    //cout << r[0][1].as<string>() << endl;
    Logger::ok() << "connected to database successful";
}

void Database::selectDefault()
{
    //Config* config = Config::getInstance();
}
