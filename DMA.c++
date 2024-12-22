#include<iostream>
using namespace std;

class Student
{
    public:
    string name;
    int age,roll_number;
    string grade;
};

int main()
{
    Student*S=new Student;
    (*S).name ="Krishnveer";
    (*S).age =21;
    (*S).roll_number =14;
    (*S).grade ="A++";

    cout<<S->name<<" "<<S->age<<" "<<S->roll_number<<" "<<S->grade<<" "<<endl;
}