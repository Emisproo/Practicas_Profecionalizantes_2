#ifndef HUMAN_H_INCLUDED
#define HUMAN_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;

class Human
{
    private:
    public:
        Human();
        virtual ~Human();
        virtual void Eat() = 0;
        virtual void toLive()= 0;

};


#endif // HUMAN_H_INCLUDED
