#include "KoleksiKendaraan.h"
#include <iostream>

using namespace std;

KoleksiKendaraan::KoleksiKendaraan(){
    this->size = 100;
    this->nEff = 0;
    this->arrayKendaraan = new Kendaraan[this->size];
}

KoleksiKendaraan::KoleksiKendaraan(int size){
    this->size = size;
    this->nEff = 0;
    this->arrayKendaraan = new Kendaraan[this->size];
}

KoleksiKendaraan::KoleksiKendaraan(const KoleksiKendaraan& kk){
    this->size = kk.size;
    this->nEff = kk.nEff;
    this->arrayKendaraan = new Kendaraan[this->size];

    for (int i = 0; i<this->nEff; i++){
        this->arrayKendaraan[i] = kk.arrayKendaraan[i];
    }
}

KoleksiKendaraan::~KoleksiKendaraan(){
    delete[] this->arrayKendaraan;
}

void KoleksiKendaraan::printAll(){
    for (int i = 0; i<this->nEff; i++){
        cout << "Kendaraan Ke-" << i+1 << endl;
        this->arrayKendaraan[i].printInfo();
        cout << endl;
    }
}

void KoleksiKendaraan::operator<<(Kendaraan k){
    if ( this->nEff < this->size){
        this->arrayKendaraan[this->nEff] = k;
        this->nEff++;
    } else {
        cout << "Maaf, tidak dapat menambah kendaraan karena array sudah penuh." << endl;
    }
}

void KoleksiKendaraan::operator<<(KoleksiKendaraan kk){
    int i = 0;
    while (this->nEff < this->size && i<kk.nEff){
        this->arrayKendaraan[this->nEff] = kk.arrayKendaraan[i];
        this->nEff++;
        i++;
    }
}