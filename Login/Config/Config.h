#ifndef CONFIG_H
#define CONFIG_H

#include "Config/INIReader.h"
#include "Utils/Logger.h"

using namespace std;

class Config
{
    public:
        static Config* Instance();
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

    private:
        Config() {};
        Config(Config const&) {};
        Config& operator=(Config const&) {};
        static Config* m_pInstance;
};

#endif // CONFIG_H
