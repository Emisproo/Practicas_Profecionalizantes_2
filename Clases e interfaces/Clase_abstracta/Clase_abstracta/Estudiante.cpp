#include "Estudiante.h"

Estudiante:: Estudiante(){}
Estudiante:: ~Estudiante(){}

int Estudiante:: get_id ()
{
    return id;
}

void Estudiante :: set_id(int _id)
{
    id = _id;
}

string Estudiante :: get_nombre()
{
    return nombre;
}

void Estudiante :: set_nombre(string _nombre)
{
    nombre = _nombre;
}

string Estudiante:: get_apellido()
{
    return apellido;
}

void Estudiante :: set_apellido(string _apellido)
{
    apellido = _apellido;
}

void Estudiante:: Vivir()
{
    cout<< "Los estudiante viven"<< endl
        << " La funcion Vivir fue definida virtual igualada a 0 en la class Humano y se implemento en la class Estudiante"<<endl;
}
