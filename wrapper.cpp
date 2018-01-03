#include "wrapper.h"
#include "singleton.h"

class MySingletonImpl : public IMySingleton
{
public:
    void Foo(int a, int b) final
    {
        CMySingleton::Get()->Foo(a,b);
    }

    int Bar(int a) final
    {
        return CMySingleton::Get()->Bar(a);
    }
};

std::shared_ptr<IMySingleton> IMySingleton::Create()
{
    return std::make_shared<MySingletonImpl>();
}

MySingleton::MySingleton()
    : m_obj(IMySingleton::Create())
{}

MySingleton::MySingleton(std::shared_ptr<IMySingleton> obj)
    : m_obj(obj)
{}

void MySingleton::Foo(int a, int b)
{
    m_obj->Foo(a, b);
}

int MySingleton::Bar(int a)
{
    return m_obj->Bar(a);
}