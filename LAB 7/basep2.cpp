#include <iostream>
#include "basep2.h"
#include "Derived1.h"
#include "Derivedp2.h"
using namespace std;
Base::Base() {
    a = 0;
}
Base::Base(int a) {
    this->a = a;
}
void Base::print2() {
    cout<<a<<" ";
}
Base::~Base() {}
Derived1::Derived1(int a, int b) : Base(a) {
    d1b = b;
}
void Derived1::print1() {
    print2();
    cout<<d1b<<" ";
}
Derived2::Derived2(int a, int b, int c) : Derived1(a, b) {
    d2c = c;
}
void Derived2::print() {
    print1();
    cout << d2c << endl;
}