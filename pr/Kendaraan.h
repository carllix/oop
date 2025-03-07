#ifndef _KENDARAAN_H
#define _KENDARAAN_H
#include <string>

using namespace std;

class Kendaraan {
    public:
        // ctor default
        Kendaraan(); 

        // ctor user-defined
        Kendaraan(int,int,string,string);

        // cctor
        Kendaraan(const Kendaraan&);

        // dtor
        ~Kendaraan();

        // copy assignment operator
        Kendaraan& operator=(const Kendaraan&);

        void printInfo();
        int biayaSewa(int lamaSewa);

    private:
        int nomor;
        int tahun;
        string merk;
        string kategori;
};

#endif

