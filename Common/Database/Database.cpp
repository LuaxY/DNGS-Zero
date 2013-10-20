#include "Database/Database.h"

Database* Database::m_pInstance = NULL;

Database* Database::Instance()
{
    if(!m_pInstance)
        m_pInstance = new Database;

    return m_pInstance;
}

Database::~Database()
{
    delete db;
    delete conn;
}

void Database::init()
{
    Config* config = Config::Instance();

    try
    {
        conn = new connection(" user=" + config->username +
                              " host=" + config->host +
                              " password=" + config->password +
                              " dbname=" + config->database);
    }
    catch(const exception &e)
    {
        Logger::Log(FAIL, sLog(), e.what());
        exit(1);
    }

    db = new nontransaction(*conn);

    //result r = db->exec("SELECT * FROM accounts");
    //cout << r[0][1].as<string>() << endl;
    Logger::Log(OK, sLog(), "connected to database.");
}

void Database::selectDefault()
{
    //Config* config = Config::Instance();
}
