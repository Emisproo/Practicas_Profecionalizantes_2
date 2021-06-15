#include "clase_concreta_human_c++.cpp"
#include "subclase_student.cpp"

int main()
{
    Student* Jose= new Student();

    cout << Jose->get_Identifier()<< " "
        << Jose ->get_Name()<<" "
        << Jose ->get_Surname();

    Jose->set_Identifier(1234);
    Jose->set_Name ("Jose");
    Jose->set_Surname("Perez");
    Jose->Eat();
    Jose->toLive();

    delete Jose;

    return 0;
}
