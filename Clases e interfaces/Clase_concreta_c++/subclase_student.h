#ifndef SUBCLASE_STUDENT_H_INCLUDED
#define SUBCLASE_STUDENT_H_INCLUDED
#include "clase_concreta_human_c++.h"

class Student : public Human
{
    private:
        int _identifier;
        string _name;
        string _surname;
    public:
        Student();
        virtual ~Student();

        int get_Identifier ();
        void set_Identifier (int identifier);

        string get_Name();
        void set_Name (string name);

        string get_Surname();
        void set_Surname (string surname);

};


#endif // SUBCLASE_STUDENT_H_INCLUDED
