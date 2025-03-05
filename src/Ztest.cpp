#include "Z.h"
#include <iostream>
using namespace std;

int main(){
    Z z;
    z.set(2);
    z.print();
    cout << z.add(4, 5) << endl;
    z.add(3);
    z.print();
    return 0;
}