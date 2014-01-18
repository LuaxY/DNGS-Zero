#include <iostream>

#include "utils/logger.hpp"
#include "server.hpp"

int main(int argc, char* argv[])
{
    try
    {
        while(Server::create().run(argc, argv) == shutdown_type::REBOOT)
            Server::kill();
    }
    catch(const std::exception& e)
    {
        Logger::error() << "unhandled exception :" << e.what();
    }

    return 0;
}
