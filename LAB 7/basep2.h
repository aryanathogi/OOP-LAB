#ifndef BASEP2_H
#define BASEP2_H

#include <iostream>
using namespace std;
class Base {
    int a{};
public:
    Base();
    Base(int a);
    ~Base();
    void print2();
};
#endif