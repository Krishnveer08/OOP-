#include<iostream>
using namespace std;

class Customer
{
    string name;
    int account_num, balance;
    
    public:
    static int total_customer;

    Customer (string name, int account_num, int balance)
    {
        this->name=name;
        this->account_num=account_num;
        this->balance=balance;
        total_customer++;
    }
    void display()
    {
        cout<<name<<""<<account_num<<""<<balance<<""<<total_customer<<""<<endl;
    }
    void total_display()
    {
        cout<<total_customer<<endl;
    }
};
int Customer::total_customer=0;

int main()
{
    Customer A1("ROhit", 1, 1000);
    Customer A2("Mohit", 2, 1500);
}