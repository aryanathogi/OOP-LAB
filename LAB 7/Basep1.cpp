#include <iostream>
#include "basep1.h"
using namespace std;
Base::Base() {
  cout << "Base constructor called" << endl;
}

Derived1::Derived1() {
  cout << "Derived1 constructor called" << endl;
}

Derived2::Derived2() {
  cout << "Derived2 constructor called" << endl;
}
Base::~Base() {
  cout << "Base destructor called" << endl;
}
Derived1::~Derived1() {
  cout << "Derived1 destructor called" << endl;
}
Derived2::~Derived2() {
  cout << "Derived2 destructor called" << endl;
}
