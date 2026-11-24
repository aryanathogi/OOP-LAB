#ifndef HEADERP4_H
#define HEADERP4_H
#include<iostream>
using namespace std;
class Base{
    int a{};
    public:
    Base(int);
    Base(const Base &);
    Base& operator=(const Base &);
    int getValue()const;
};
//ostream& operator<<(ostream &out, const Base &);
class Derived1: public Base{
    int b{};
    public:
    Derived1(int,int);
    Derived1(const Derived1 &);
    Derived1& operator=(const Derived1 &);
    int getValue()const;
};
//ostream& operator<<(ostream &out, const Derived1 &);
class Derived2: public Derived1{
    int c{};
    public:
    Derived2(int,int,int);
    Derived2(const Derived2 &);
    Derived2& operator=(const Derived2 &);
    void setValue(int);
    int getValue()const;
};
ostream& operator<<(ostream& out,const Derived2 &);
#endif