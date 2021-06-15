#include "Humano.h"
Humano::Humano()
{

}
Humano :: ~Humano()
{
    delete this;
}

void Humano:: Comer()
{
    cout << "Todos los humanos por lo general comen "<<endl
        <<"Funcion Comer esta definida e implementada en class Humano"<< endl;
}

