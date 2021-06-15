#include "Humano.h"
#include "Estudiante.h"

int main()
{
    Estudiante* Estudiante1 = new Estudiante();
    Estudiante1 -> set_id(7546);
    Estudiante1 -> set_nombre("Pedro");
    Estudiante1 -> set_apellido("Picapiedras");
    Estudiante1 -> Comer();
    Estudiante1 -> Vivir();

    cout << Estudiante1 -> get_id()<<" "
        << Estudiante1 -> get_nombre()<<" "
        << Estudiante1 -> get_apellido();

    delete Estudiante1;

    return 0;
}
