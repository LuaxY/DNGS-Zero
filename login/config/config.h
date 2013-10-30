#ifndef CONFIG_H
#define CONFIG_H

#include "config/INIReader.h"
#include "utils/logger.h"
#include "utils/singleton.h"
#include "utils/time.h"

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

        /** misc **/
        string startedTime;
};

#endif // CONFIG_H
