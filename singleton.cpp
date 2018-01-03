#include "singleton.h"

CMySingleton* CMySingleton::ptr = nullptr;

CMySingleton* CMySingleton::Get()
{
    if (!ptr)
    {
        ptr = new CMySingleton();
    }

    return ptr;
}

CMySingleton::CMySingleton()
{ }

CMySingleton::~CMySingleton()
{
    delete ptr;
}

void CMySingleton::Foo(int a, int b)
{
    a=b;
}

int CMySingleton::Bar(int a)
{
    return a+1;
}