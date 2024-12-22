#include<iostream>
using namespace std;

class Customer
{
    string name;
    int acc_num;
    int balance;

    public:
//Default Contructor
    Customer()
    {
        name="Krishnveer";
        acc_num=66;
        balance=33;
    }
//Paramaterized Constructor
    Customer(string a, int b)
    {
        name=a;
        acc_num=b;
        balance=99;
    }
//Constructor Overloading (Function Overloading)
    Customer(string a,int b,int c)
    {
        name=a;
        acc_num=b;
        balance=55;
    }
//Inline Constructor
 //   inline Customer(string a,int b):name(a),acc_num(b)    this code does not consist inline function
    void display()
    {
        cout<<name<<" "<<acc_num<<" "<<balance<<""<<endl;
    }
};

int main()
{
    Customer A1;
    Customer A2("Naresh",64);
    Customer A3("Manan",51,20);
    A1.display();
    A2.display();
    A3.display();
    //Copy Constructor
    Customer A4(A2);
    A4.display();
}