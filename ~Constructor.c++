#include<iostream>
using namespace std;

class Customer
{
    string name;
    int *data;

    public:
    Customer()//constructor
    {
        name="4";
        cout<<"Constructor is "<<name<<endl;
    }

    Customer(string name)
    {
        this->name=name;
        cout<<"Constructor is "<<name<<endl;
    }

    //destructor
    ~Customer()
    {
        
        cout<<"Destructor is "<<name<<endl;
    }
};

int main()
{
    Customer A1("1"),A2("2"),A3("3");
    Customer *A4 =new Customer;
    delete A4; //used for destructor//
}