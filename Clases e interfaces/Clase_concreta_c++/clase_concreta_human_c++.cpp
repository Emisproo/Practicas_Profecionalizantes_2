#include "clase_concreta_human_c++.h"
Human :: Human() //constructor
{
}

Human::~Human() //destructor
{
    delete this;
}

void Human::Eat()
{
    cout << "Los humanos en general comen de todo"<< endl;
}

void Human ::toLive()
{
    cout<< "Por lo general, los humanos viven sus vidas" << endl;
}

