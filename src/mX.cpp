#include <iostream>
#include "Y.h"
#include "X.h"

using namespace std;

int main(){
    X x;
    X x1 = x;

    X* ptrx;
    X* ptr1 = new X();

    x.print();
    x1.print();
    ptr1->print();

    Y oy;
    oy.print();
    Y y1 = oy;
    y1.print();
    Y* ptry = new Y();
    ptry->print();
    
    return 0;
}