#ifndef CONFIG_H
#define CONFIG_H

#include "Config/INIReader.h"
#include "Utils/Logger.h"
#include "Utils/Singleton.h"

using namespace std;

class Config : public Singleton<Config>
{
    public:
        void init(char*);

        /** login **/
        unsigned short port;
        unsigned short max_user;
        unsigned int requiredVersion;
        unsigned int currentVersion;

        /** database **/
        string host;
        string username;
        string password;
        string database;
};

#endif // CONFIG_H
