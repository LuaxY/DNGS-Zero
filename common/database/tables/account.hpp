#ifndef ACCOUNT_TABLE_HPP
#define ACCOUNT_TABLE_HPP

#include <string>
#include <odb/core.hxx>

class account
{
public:
    account(const std::string& login, const std::string& password) :
        login_(login), password_(password)
    {
    }

    const std::string& login() const
    {
        return login_;
    }

    const std::string& password() const
    {
        return password_;
    }

    void login(std::string& login)
    {
        login_ = login;
    }

    void password(std::string& password)
    {
        password_ = password;
    }

private:
    friend class odb::access;

    account() {}

    unsigned long id;

    std::string login_;
    std::string password_;
};

#endif // ACCOUNT_TABLE_HPP

