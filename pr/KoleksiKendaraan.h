#ifndef _KOLEKSI_KENDARAAN_H
#define _KOLEKSI_KENDARAAN_H
#include "Kendaraan.h"

class KoleksiKendaraan{
    public:
        // ctor default
        KoleksiKendaraan();

        // ctor user-defined
        KoleksiKendaraan(int);

        // cctor
        KoleksiKendaraan(const KoleksiKendaraan&);

        // dtor
        ~KoleksiKendaraan();

        // copy assignment operator
        KoleksiKendaraan& operator=(const KoleksiKendaraan&);
        
        void printAll();
        KoleksiKendaraan& operator<<(const Kendaraan&);
        KoleksiKendaraan& operator<<(const KoleksiKendaraan&);

    private:
        Kendaraan* arrayKendaraan;
        int size;
        int nEff;
};

#endif