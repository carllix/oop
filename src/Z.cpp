#include "Z.h"
#include <iostream>
using namespace std;

void Z::print(){
    cout << "val = " << this->val << endl;
}

void Z::print(int i){
    cout << "i = " << i << endl;
}

void Z::set(int x){
    this->val = x;
}

int Z::add(int x, int y){
    return x+y;
}

void Z::add(int x){
    this->val += x;
}