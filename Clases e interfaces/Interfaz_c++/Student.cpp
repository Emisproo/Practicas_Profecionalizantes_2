#include "Student.h"
Student:: Student ()
{

}

Student::~Student()
{

}

int Student::get_identifier()
{
    return _identifier;
}

void Student::set_identifier(int identifier)
{
    _identifier = identifier;
}

string Student :: get_name ()
{
    return _name;
}

void Student ::set_name (string name)
{
    _name = name;
}

string Student :: get_surname ()
{
    return _surname;
}

void Student :: set_surname(string surname)
{
    _surname = surname;
}

void Student :: Eat()
{
    cout <<"Los estudiantes por lo general comen, pero distinto a los otros humanos."<<endl
        << " La funcion Eat esta implementada en la class Human igualada a 0 (funcion abstracta). La puedo implementar en Student o no: si hubieran mas subclase se podrian implementar en ellas y si quiero no implementar en Student lo puedo hacer."<< endl<<endl;
}

void Student:: toLive()
{
    cout <<"El estudiante no viven como el resto de los humanos, deben estudiar "<< endl
        <<" La funcion toLive tambien esta definida como abstractaa en class Human, pero implementada en class Student."<<endl;
}


