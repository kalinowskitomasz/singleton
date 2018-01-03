#include "wrapper.h"
#include "singleton.h"
#include<chrono>
#include<iostream>
#include<memory>

int main()
{
    int a;
    auto wrap = IMySingleton::Create();
    auto start = std::chrono::high_resolution_clock::now();
    for (int i=0; i<100000000; ++i)
    {
        a = wrap->Bar(5);
        wrap->Foo(2,3);
    }
    auto finish = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = finish - start;
    std::cout<<elapsed.count()<<'\n';
}