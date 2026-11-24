#include<iostream>
#include "basep3.h"
using namespace std;
Base::Base(){
    a=0;
}
Base::Base(int x){
    a=x;
}
Base::Base(const Base &b){
    a=b.a;
}
Base& Base::operator=(const Base &b){
    if(this!=&b){
        a=b.a;
    }
    return *this;
}
Base::~Base(){}
void Base::print()const{
    cout<<a<<" ";
}
Derived1::Derived1(int x, int y):Base(x){
    b=y;
}
Derived1::Derived1(const Derived1 &d):Base(d){
    b=d.b;
}
Derived1& Derived1::operator=(const Derived1 &d){
    if(this!=&d){
        Base::operator=(d);
        b=d.b;
    }
    return *this;
}

void Derived1::print()const{
    Base::print();
    cout<<b<<" ";
}
Derived2::Derived2(int x, int y, int z):Derived1(x,y){
    c=z;
}
Derived2::Derived2(const Derived2 &d):Derived1(d){
    c=d.c;
}
Derived2& Derived2::operator=(const Derived2 &d){
    if(this!=&d){
        Derived1::operator=(d);
        c=d.c;
    }
    return *this;
}   
void Derived2::setValue(int x){
    c=x;
}
void Derived2::print()const{
    Derived1::print();
    cout<<c<<" ";
}
ostream& operator<<(ostream &out, const Base &b){
    b.print();
    return out;
}