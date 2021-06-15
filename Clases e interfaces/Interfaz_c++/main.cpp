#include "Human.h"
#include "Student.h"

int main()
{
    Student* Pablo = new Student();

    Pablo->set_identifier(7854);
    Pablo->set_name ("Pablo");
    Pablo->set_surname("Marmol");
    Pablo->Eat();
    Pablo->toLive();

     cout<< Pablo ->get_identifier()<< " "
        << Pablo ->get_name()<<" "
        << Pablo ->get_surname();

    delete Pablo;

    return 0;

}
