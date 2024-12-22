#include<iostream>
using namespace std;
class Animal
{
    public:

     virtual void speak()
    {
        cout<<"sound/n";
    }
};

class Dog: public Animal
{
    public:

    void speak()
    {
        cout<<"Bark";
    }
};

int main()
{
    Animal*p;
    p=new Dog();
    p-> speak();
}