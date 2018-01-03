#include "mock.h"

void MySingletonMock::Foo(int a, int b)
{
    a=b;
}

int MySingletonMock::Bar(int a)
{
    return a+1;
}
