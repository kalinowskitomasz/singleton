#include<memory>

class IMySingleton
{
public:
    virtual void Foo(int a, int b) = 0;
    virtual int Bar(int a) = 0;
    static std::shared_ptr<IMySingleton> Create();
};

class MySingleton
{
public:
    MySingleton();
    MySingleton(std::shared_ptr<IMySingleton> obj); 
    void Foo(int a, int b);
    int Bar(int a);
private:

    std::shared_ptr<IMySingleton> m_obj;
};
