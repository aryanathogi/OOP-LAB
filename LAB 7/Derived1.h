#ifndef DERIVED1_H
#define DERIVED1_H

#include <iostream>
#include "basep2.h"
using namespace std;
class Derived1 : public Base {
    int d1b{};
    public:
    Derived1(int a, int b);
    void print1();
};
#endif