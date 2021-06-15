#ifndef HUMANO_H_INCLUDED
#define HUMANO_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;

class Humano
{
    private:
    public:
        Humano();
        virtual ~Humano();
        void Comer();
        virtual void Vivir()=0;

};


#endif // HUMANO_H_INCLUDED
