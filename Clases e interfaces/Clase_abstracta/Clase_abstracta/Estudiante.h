#ifndef ESTUDIANTE_H_INCLUDED
#define ESTUDIANTE_H_INCLUDED
#include "Humano.h"

class Estudiante : public Humano
{
    private:
        int id;
        string nombre;
        string apellido;
    public:
        Estudiante();
        virtual ~Estudiante();

        int get_id();
        void set_id(int _id);

        string get_nombre();
        void set_nombre(string _nombre);

        string get_apellido();
        void set_apellido(string _apellido);

        virtual void Vivir();

};

#endif // ESTUDIANTE_H_INCLUDED
