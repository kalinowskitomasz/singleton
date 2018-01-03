#include<memory>

class CMySingleton
{
public:
    static CMySingleton* Get();

    void Foo(int a, int b);
    int Bar(int a);
private:
    CMySingleton();
    ~CMySingleton();
    static CMySingleton* ptr;
};