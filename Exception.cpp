#include<iostream>
using namespace std;

int main()
{
    int a, b;
    cin>>a>>b;
    

    try
    
    {
        if (b==0)
        
       
        throw "\tUndefined";
        
        int c=a/b;
        
        
        cout<<c<<endl;
        
    }
    catch(const char*f)
    {
        cout<<"Exception Occured:"<<f<<endl;
    }

}