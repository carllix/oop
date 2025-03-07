#include "Kendaraan.h"
#include "KoleksiKendaraan.h"
#include <iostream>

using namespace std;

int main(){
    // Test Kendaraan
    // Test ctor default
    Kendaraan k1;
    k1.printInfo();

    // Test ctor user-defined
    Kendaraan k2 = Kendaraan(2,2020,"Yamahal","mobil");
    Kendaraan k3 = Kendaraan(3,2021,"Elif","minibus");
    Kendaraan k4 = Kendaraan(4,2022,"Zetabus","bus");
    Kendaraan k5 = Kendaraan(5,2023,"Hondi","motor");

    k2.printInfo();
    k3.printInfo();
    k4.printInfo();
    k5.printInfo();

    // Test cctor
    Kendaraan k3copy = k3;
    k3copy.printInfo();

    cout << endl;
    // Test biaya sewa
    cout << "Biaya Sewa Mobil 5 hari: " << k2.biayaSewa(5) << endl;
    cout << "Biaya Sewa Bus 5 hari: " << k4.biayaSewa(5) << endl;
    cout << "Biaya Sewa Motor 5 hari: " << k5.biayaSewa(5) << endl;
    cout << "Biaya Sewa Minibus 4 hari: " << k3.biayaSewa(4) << endl;
    cout << "Biaya Sewa Minibus 5 hari: " << k3.biayaSewa(5) << endl;
    cout << "Biaya Sewa Minibus 6 hari: " << k3.biayaSewa(6) << endl;
    cout << "Biaya Sewa Minibus 7 hari: " << k3.biayaSewa(7) << endl;

    cout << endl;
    // Test Koleksi Kendaraan
    KoleksiKendaraan kk = KoleksiKendaraan(2);
    kk << k2;

    KoleksiKendaraan kk2 = KoleksiKendaraan(2);
    kk2 << k3;
    kk2 << k4;

    cout << "Koleksi Kendaraan 1: " << endl;
    kk.printAll();

    cout << "\nKoleksi Kendaraan 2: " << endl;
    kk2.printAll();

    cout << "\nKoleksi Kendaraan 1 + 2: " << endl;
    kk << kk2;
    kk.printAll();
    return 0;
}