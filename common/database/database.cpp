#include "database/database.hpp"
#include "database/tables/account.hpp"
#include "utils/unit_test.hpp"

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

        db = new pqxx::nontransaction(*conn);
    }
    catch(const std::exception& e)
    {
        throw std::logic_error("unable to conntect to the database '" + user + "'@'" + host + "' (USING PASSWORD " + (password == "" ? "NO" : "YES") + ")");
    }

    /*pqxx::result r = db->exec("SELECT * FROM accounts");
    account admin(r[0][1].as<std::string>(), r[0][2].as<std::string>());
    std::cout << "login: " << admin.login() << " password: " << admin.password() << std::endl;*/

    Logger::ok() << "connected to database successful";
}

void Database::select_default()
{
    //Config* config = Config::getInstance();
}
