#include <iostream>
using namespace std;
class Base {
    int a{};
    public:
    Base();
   ~Base();
};
class Derived1 : public Base
{
    int d1b{};
    public:
    Derived1();
   ~Derived1();
};
class Derived2:public Derived1
{
    int d2c{};
    public:
    Derived2();
    ~Derived2();
};
