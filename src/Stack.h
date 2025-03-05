#ifndef _STACK_H
#define _STACK_H

class Stack {
    public:
        Stack(); // ctor
        Stack(int); // ctor dengan ukuran stack
        Stack(const Stack&);
        ~Stack(); // dtor
    
    private:
        int size;
        int topStack;
        int* data;
};

#endif