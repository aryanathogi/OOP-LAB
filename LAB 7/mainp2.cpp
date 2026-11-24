#include <iostream>
#include "basep2.h"
#include "Derived1.h"
#include "Derivedp2.h"
using namespace std;
int main(){
	    Derived1 d1(2,4);
	    Derived2 d2(10, 20, 30);
        d2.print();	
		d1.print1();			

return 0;
}
