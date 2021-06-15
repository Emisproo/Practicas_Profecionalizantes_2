#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED
#include "Human.h"

class Student : public Human
{
  private:
        int _identifier;
        string _name;
        string _surname;
  public:
        Student();
        virtual ~Student ();

        int get_identifier();
        void set_identifier(int identifier);

        string get_name();
        void set_name(string name);

        string get_surname();
        void set_surname(string surname);

        virtual void Eat();
        virtual void toLive();
};


#endif // STUDENT_H_INCLUDED
