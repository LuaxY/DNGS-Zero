#include "config/config.h"

Config::Config(std::list<std::string> files) : _files { std::move(files) }
{
    parse_all();
}

void Config::parse_all()
{
    for(auto && file : _files)
    {
        auto result = parse_file(file);
        if(!result.empty())
            Logger::fail() << "parsing failed" << file << ":" << result;
    }
}

std::string Config::parse_file(const std::string & filename)
{
    pugi::xml_document doc;
    auto res = doc.load_file(filename.c_str());
    if(!res)
        return res.description();
    for(auto && it : doc.child("config"))
        _properties.emplace(it.name(), it.child_value());
    return { };
}

template<> bool Config::get_property(const std::string & index, const bool & def)
{
    auto it = _properties.find(index);
    if(it == end(_properties))
        return def;
    return it->second != "false";
}

template<> std::string Config::get_property(const std::string & index, const std::string & def)
{
    auto it = _properties.find(index);
    if(it == end(_properties))
        return def;
    return it->second;
}
