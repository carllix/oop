#include "Kendaraan.h"
#include <iostream>

using namespace std;

int main(){
    Kendaraan kendaraan;
    Kendaraan kendaraan2 = Kendaraan(1234, 2000, "Honda", "minibus");
    kendaraan.printInfo();
    cout << kendaraan.biayaSewa(5) << endl;
    kendaraan2.printInfo();
    cout << kendaraan2.biayaSewa(6) << endl;

    Kendaraan kendaraanCopy = kendaraan;
    kendaraanCopy.printInfo();
    cout << kendaraanCopy.biayaSewa(5) << endl;

    return 0;
}