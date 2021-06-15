#include "subclase_student.h"
Student:: Student ()
{

}

Student::~Student()
{

}

int Student::get_Identifier()
{
    return _identifier;
}

void Student::set_Identifier(int identifier)
{
    _identifier = identifier;
}

string Student :: get_Name ()
{
    return _name;
}

void Student:: set_Name (string name)
{
    _name = name;
}

string Student :: get_Surname ()
{
    return _surname;
}

void Student :: set_Surname(string surname)
{
    _surname = surname;
}
