#include<iostream>
#include "basep3.h"
using namespace std;
//Base::Base(){
//  //  a=0;
//}
Base::Base(int x){
    a=x;
}
Base::Base(const Base & obj){
    a=obj.a;
}
Base& Base::operator=(const Base & obj){
    if(this!=&obj){
        a=obj.a;
    }
    return *this;
}
//Base::~Base(){}
void Base::print()const{
    cout<<a<<" ";
}
Derived1::Derived1(int x, int y):Base(x){
    b=y;
}
Derived1::Derived1(const Derived1 & obj):Base(obj){
    b=obj.b;
}
Derived1& Derived1::operator=(const Derived1 &obj){
    if(this!=&obj){
        Base::operator=(obj);
        b=obj.b;
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
Derived2::Derived2(const Derived2 & obj):Derived1(obj){
    c=obj.c;
}
Derived2& Derived2::operator=(const Derived2 &obj){
    if(this!=&obj){
        Derived1::operator=(obj);
        c=obj.c;
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
ostream& operator<<(ostream &out, const Base & obj){
    obj.print();
    return out;
}