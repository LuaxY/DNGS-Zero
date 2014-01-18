#ifndef UNIT_TEST_H
#define UNIT_TEST_H

#include <typeinfo>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sstream>

class UnitTest
{
public:
    void static out(_IO_FILE* _fd)
    {
        fd = _fd;
    }

    template<typename F, typename R>
    static bool perform(F function, R result)
    {
        bool test = false;
        std::stringstream buffer;

        buffer << "UnitTest::perform(" << function << ", " << result << ") >>> ";

        if(typeid(function) != typeid(result))
            buffer << "FAIL: not same type.";
        else if(function != result)
            buffer << "FAIL: not equal.";
        else
        {
            buffer << "SUCCESS!";
            test = true;
        }

        buffer << "\n";
        print(buffer.str().c_str());

        return test;
    }

private:
    static _IO_FILE* fd;

    static void print(const char* string)
    {
        fwrite(string, 1, strlen(string), fd);
    }
};

_IO_FILE* UnitTest::fd = stdout;

#endif // UNIT_TEST_H
