#include "Stack.h"
#include <iostream>
using namespace std;

Stack::Stack(){
    size = 10;
    topStack = 0;
    data = new int[size];
}

Stack::Stack(int x){
    size = x;
    topStack = 0;
    data = new int[size];
}

Stack::Stack(const Stack& s){
    size = s.size;
    topStack = s.topStack;
    data = new int[size];

    // kalau bikin objek baru namanya deep copy tapi kalau data = s.data itu shallow copy (merujuk pointer yg sama)
    for (int i = 0; i<topStack; i++){
        data[i] = s.data[i];
    }
}

Stack::~Stack(){
    delete[] data;
}