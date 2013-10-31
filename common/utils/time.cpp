#include <utils/time.h>

std::string get_current_time(char separator)
{
    time_t t = time(0);
    struct tm *now = localtime(&t);
    std::stringstream time;

    time << now->tm_hour << separator
        << now->tm_min << separator
        << now->tm_sec;

    return time.str();
}

std::string get_current_date(char separator)
{
    time_t t = time(0);
    struct tm *now = localtime(&t);
    std::stringstream date;

    date << now->tm_mday << separator
        << now->tm_mon;

    return date.str();
}
