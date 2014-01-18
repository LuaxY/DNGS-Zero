#ifndef TIME_HPP
#define TIME_HPP

#include <ctime>
#include <string>
#include <sstream>

std::string get_current_time(char separator = ':');
std::string get_current_date(char separator = ':');
static std::string started_time = get_current_date('-') + "-" + get_current_time('-');;

#endif // TIME_HPP
