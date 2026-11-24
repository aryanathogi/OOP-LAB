#include <iostream>
using namespace std;
class Base{
    int a{};
    public:
    Base();
    Base(int x);
    void print()const;
    Base(const Base &);
    Base& operator=(const Base &);
    ~Base();

};
ostream& operator<<(ostream &out, const Base &);
class Derived1: public Base{
    int b{};
    public:
    Derived1(int x, int y);
    void print()const;
    Derived1(const Derived1 &);
    Derived1& operator=(const Derived1 &);
    
};
ostream& operator<<(ostream &out, const Derived1 &);
class Derived2: public Derived1{
    int c{};
    public:
    Derived2(int x, int y, int z);
    void print()const;
    void setValue(int);
    Derived2(const Derived2 &);
    Derived2& operator=(const Derived2 &);
    
};
ostream& operator<<(ostream &out, const Derived2 &);