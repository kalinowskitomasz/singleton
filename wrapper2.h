#include<memory>
#include "mock.h"

class MySingleton
{
public:
    MySingleton();
    MySingleton(std::shared_ptr<MySingletonMock> mock);
    void Foo(int a, int b);
    int Bar(int a);

private:
    std::shared_ptr<MySingletonMock> m_mock;
};