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

        void printAll();
        void operator<<(Kendaraan);
        void operator<<(KoleksiKendaraan);

    private:
        Kendaraan* arrayKendaraan;
        int size;
        int nEff;
};

#endif