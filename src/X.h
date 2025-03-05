#ifndef _X_H
#define _X_H

class X{
    public:
        X(); // ctor
        X(int x); //ctor dengan parameter
        X(const X&); //cctor
        ~X(); //dtor
        void print(); //prosedur untuk print atribut

    private:
        int x;
};

#endif