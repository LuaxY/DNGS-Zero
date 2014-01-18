#ifndef SINGLETON_HPP
#define SINGLETON_HPP

/*template <typename T>
class Singleton
{
protected:
    Singleton() {}
    ~Singleton() {}

public:
    template<class ... Args>
    static T & create(Args && ... args)
    {
        assert( !_singleton );
        _singleton.reset(new T { std::forward<Args>(args)... });
        return *_singleton;
    }

    static T* instance()
    {
        if(_singleton == NULL)
            _singleton = new T;

        return (static_cast<T*>(_singleton));
    }

    static void kill()
    {
        if(_singleton != NULL)
        {
            delete _singleton;
            _singleton = NULL;
        }
    }

private:
    static T* _singleton;
};

template <typename T>
T* Singleton<T>::_singleton = NULL;*/

#include <memory>
#include <cassert>

template<class T>
class Singleton
{
protected:
    Singleton() = default;
    ~Singleton() = default;

public:
    template<class ... Args>
    static T& create(Args && ... args)
    {
        assert( !_singleton );
        _singleton.reset(new T { std::forward<Args>(args)... });
        return *_singleton;
    }

    static void kill()
    {
        _singleton.reset(nullptr);
    }

    static T& instance()
    {
        assert( _singleton );
        return *_singleton;
    }

private:
    static std::unique_ptr<T> _singleton;
};

template<class T>
std::unique_ptr<T> Singleton<T>::_singleton;

#endif // SINGLETON_HPP
