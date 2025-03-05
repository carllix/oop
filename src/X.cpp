#include "X.h"
#include <iostream>
using namespace std;

X::X(){
    this->x = 0;
    cout << "ctor()" << endl;
}

X::X(int a){
    this->x = a;
    cout << "ctor(int)" << endl;
}

X::X(const X& ox){
    this->x = ox.x;
    cout << "cctor(X)" << endl;
}

X::~X(){
    cout << "dtor()" << endl;
}

void X::print(){
    cout << "Nilai x = " << this->x << endl;
}