#include "database/database.h"

Database::~Database()
{
//    delete db;
    //delete conn;
}

void Database::init(std::string host, std::string user, std::string password, std::string name)
{
    try
    {
        db = create_database(user, password, name);
    }
    catch(const std::exception& e)
    {
        throw std::logic_error("unable to conntect to the database");
    }

    //db = new pqxx::nontransaction(*conn);

    //result r = db->exec("SELECT * FROM accounts");
    //cout << r[0][1].as<string>() << endl;
    Logger::ok() << "connected to database successful";
}

void Database::select_default()
{
    //Config* config = Config::getInstance();
}

inline std::auto_ptr<odb::database> Database::create_database(std::string _user, std::string _password, std::string _name)
{
#if defined(DATABASE_MYSQL)
    std::auto_ptr<odb::database> _db(new odb::mysql::database(_user, _password, _name));
#elif defined(DATABASE_PGSQL)
    std::auto_ptr<odb::database> _db(new odb::pgsql::database(_user, _password, _name));
#elif defined(DATABASE_ORACLE)
    std::auto_ptr<odb::database> _db(new odb::oracle::database(_user, _password, _name));
#elif defined(DATABASE_MSSQL)
    std::auto_ptr<odb::database> _db(new odb::mssql::database(_user, _password, _name));
#endif
    return _db;
}
