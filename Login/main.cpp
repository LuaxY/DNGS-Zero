#include <iostream>

#include "Config/Config.h"
#include "Database/Database.h"

using namespace std;

int main()
{
    cout << "DNGS Zero - Login (DEV) by Catbug (" << __DATE__ << " " << __TIME__ << ")" << endl << endl;

    /** Initialisation of configuration file **/
    Config* config = Config::Instance();
    config->init("login.ini");

    /** Connect to PostgreSQL Database **/
    Database* database = Database::Instance();
    database->init();

    /** Start listening clients **/

    delete config;
    delete database;

    return 0;
}
