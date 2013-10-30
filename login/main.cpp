#include <iostream>

#include "config/config.h"
#include "database/database.h"
#include "utils/logger.h"

int main(int argc, char* argv[])
{
    std::cout << "DNGS Zero - Login (DEV) by Catbug (" << __DATE__ << " " << __TIME__ << ")" << std::endl << std::endl;

    /** Initialisation of configuration file **/
    Config* config = Config::getInstance();

    if(argc > 1)
        config->init(argv[1]);
    else
        config->init("login.ini");

    /** Connect to PostgreSQL Database **/
    Database* database = Database::getInstance();
    database->init();

    /** Start listening clients **/

    delete config;
    delete database;

    return 0;
}
