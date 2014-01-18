#ifndef CONFIG_HPP
#define CONFIG_HPP

#include <list>
#include <unordered_map>
#include <string>
#include <boost/lexical_cast.hpp>

#include "utils/logger.hpp"
#include "utils/singleton.hpp"
#include "config/third_party/pugixml.hpp"

class Config : public Singleton<Config>
{
public:
    explicit Config(std::list<std::string>);
    void parse_all();

    template<class T>
    T get_property(const std::string& index, const T& def)
    {
        auto it = _properties.find(index);
        if(it != end(_properties))
            return boost::lexical_cast<T>(it->second);
        return def;
    }

    const std::unordered_map<std::string, std::string>& get_property()
    { return _properties; }

private:
    std::list<std::string> _files;
    std::unordered_map<std::string, std::string> _properties;
    std::string parse_file(const std::string&);
};

template<> bool Config::get_property(const std::string&, const bool&);
template<> std::string Config::get_property(const std::string&, const std::string&);

#endif // CONFIG_HPP
