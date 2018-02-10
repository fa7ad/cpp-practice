#include <iostream>

using namespace std;

int main()
{
    int a, *b, **c;
    b=&a;
    c=&b;
    cout<<"Simple program to demonstrate pointer."<<endl;
    cout<<"Enter the value of a :";
    cin>>a;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
}
