#include <iostream>

#include "Config/Config.h"
#include "Database/Database.h"
#include "Utils/Logger.h"

int main()
{
    std::cout << "DNGS Zero - Login (DEV) by Catbug (" << __DATE__ << " " << __TIME__ << ")" << std::endl << std::endl;

    /** Initialisation of configuration file **/
    Config* config = Config::getInstance();
    config->init("login.ini");

    /** Connect to PostgreSQL Database **/
    Database* database = Database::getInstance();
    database->init();

    /** Start listening clients **/

    delete config;
    delete database;

    return 0;
}
