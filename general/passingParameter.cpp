#include <iostream>
using namespace std;

// Pass by value
void ubah(int a){
    a = 5;
    cout << a << endl;
}

// Pass by references
void ubah2(int& a){
    a = 5;
    cout << a << endl;
}

// Pass by pointer
void ubah3(int* a){
    *a = 5;
    cout << *a << endl;
}

int main(){
    int x = 3;
    ubah3(&x);

    cout << x << endl;

    return 0;
}