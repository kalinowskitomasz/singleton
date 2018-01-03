#include "wrapper2.h"
#include "singleton.h"
#include "mock.h"

MySingleton::MySingleton()
{ }

MySingleton::MySingleton(std::shared_ptr<MySingletonMock> mock)
    : m_mock{mock}
{}

void MySingleton::Foo(int a, int b)
{
    if (m_mock)
    {
        m_mock->Foo(a,b);
        return;
    }

    CMySingleton::Get()->Foo(a,b);
}

int MySingleton::Bar(int a)
{
    if (m_mock)
    {
        return m_mock->Bar(a);
    }

    return CMySingleton::Get()->Bar(a);
}