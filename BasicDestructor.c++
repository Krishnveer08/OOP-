#include<iostream>
using namespace std;

class Customer
{
    string name;
    int *data;

    public:

    Customer()
    {
        name="KV";
        data=new int;
        *data=10;
        cout<<"Constructor is Called\n";
    }

    //destructor
    ~Customer()
    {
        delete data;
        cout<<"Destructor is Called\n";
    }
};

int main()
{
    Customer A1;
}