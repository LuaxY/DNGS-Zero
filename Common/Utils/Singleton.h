#ifndef SINGLETON_H
#define SINGLETON_H

template <typename T>
class Singleton
{
protected:
    Singleton() {}
    ~Singleton() {}

public:
    static T* getInstance()
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
T* Singleton<T>::_singleton = NULL;

#endif // SINGLETON_H
