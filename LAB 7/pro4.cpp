#include<iostream>
#include "headerp4.h"
using namespace std;
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
int Base::getValue()const{
    return a;
}
//ostream& operator<<(ostream &out, const Base & obj){ Given cpp file not need gor this function because we are not using this function in main.cpp file
  //  out<<obj.getValue()<<" ";
    //return out;
//}
Derived1::Derived1(int x,int y):Base(x){
    b=y;
}
Derived1::Derived1(const Derived1 & obj):Base(obj){
    b=obj.b;
}
Derived1& Derived1::operator=(const Derived1 &obj){
    if(this !=&obj){
        Base::operator=(obj);
        b=obj.b;
    }
    return *this;
}
Derived2::Derived2(int x,int y,int z):Derived1(x,y){
    c=z;
}
Derived2::Derived2(const Derived2 &obj):Derived1(obj){
    Derived1::operator=(obj);
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
int Derived2::getValue()const{
    return c;
}
ostream& operator<<(ostream& out,const Derived2 & obj){
    out<<obj.getValue()<<" ";
    return out;
}