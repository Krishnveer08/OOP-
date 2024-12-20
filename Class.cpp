#include<iostream>
using namespace std;

class Student
{
    public:
    string name;
    int Roll_num;
    int age;
    string grade;
};

int main()
{
    Student S1;
    S1.name = "Krishn Veer";
    S1.Roll_num = 14;
    S1.age = 21;
    S1.grade = "A++";

    cout<<S1.name<<" "<<S1.age<<" "<<S1.grade<<" "<<S1.Roll_num<<" "<<endl;
}