#include<iostream>
using namespace std;

class Student
{
    string name;
    int Roll_num;
    int age;
    string grade;
    //Function Getter and Setter 
    public:
    void setname(string s)
    {
        if(s.size()==0)
        {
        cout<<"invalid credentials"<<endl;
        return;
        }
        name=s;
    }
    void setRoll(int r)
    {
        if(r==0)
        {
            cout<<"roll_no. does not exist"<<endl;
            return;
        }
       Roll_num=r;
    }
    void setage(int a)
    {
       age=a;
    }
    void setgrade(string g)
    {
        grade=g;
    }
    void getname()
    {
        cout<<name<<endl;
    }
    void getRoll()
    {
        cout<<Roll_num<<endl;
    }
};

int main()
{
    Student S1;
    S1.setname("Krishn Veer");
    S1.setRoll(0);
    S1.setage(21);
    S1.setgrade("A++");
    
    S1.getname();
    S1.getRoll();
    
}