#ifndef DERIVED2_H
#define DERIVED2_H

#include <iostream>
#include "Derived1.h"
using namespace std;
class Derived2 : public Derived1 {
    int d2c{};
    public:
    Derived2(int a, int b, int c);
    void print();
};
#endif