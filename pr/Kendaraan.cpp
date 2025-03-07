#include "Kendaraan.h"
#include <iostream>
#include <string>

using namespace std;

Kendaraan::Kendaraan(){
    Kendaraan::nomor = 0;
    Kendaraan::tahun = 0;
    Kendaraan::merk = "XXX";
    Kendaraan::kategori = "mobil";
}

Kendaraan::Kendaraan(int nomor, int tahun, string merk, string kategori){
    this->nomor = nomor;
    this->tahun = tahun;
    this->merk = merk;
    this->kategori = kategori;
}

Kendaraan::Kendaraan(const Kendaraan& k){
    this->nomor = k.nomor;
    this->tahun = k.tahun;
    this->merk = k.merk;
    this->kategori = k.kategori;
}

Kendaraan::~Kendaraan() {
}

Kendaraan& Kendaraan::operator=(const Kendaraan& k){
    if (this != &k) {
        this->nomor = k.nomor;
        this->tahun = k.tahun;
        this->merk = k.merk;
        this->kategori = k.kategori;
    }
    return *this;
}

void Kendaraan::printInfo(){
    cout << "Nomor: " << this->nomor << endl;
    cout << "Tahun Keluaran: " << this->tahun << endl;
    cout << "Merk: " << this->merk << endl;
    cout << "Kategori: " << this->kategori << endl;
}

int Kendaraan::biayaSewa(int lamaSewa){
    int biaya;

    if ( this->kategori == "bus"){
        biaya = 1000000 * lamaSewa;
    } else if ( this->kategori == "minibus") {
        if (lamaSewa <= 5){
            biaya = 5000000;
        } else {
            biaya = 5000000 + 500000 * (lamaSewa - 5);
        }
    } else if (this->kategori == "mobil"){
        biaya = 500000 * lamaSewa;
    } else {
        biaya = 0;
    }

    return biaya;
}