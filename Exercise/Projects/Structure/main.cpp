#include <iostream>

using namespace std;

struct Example
{
    int ex1;
    float ex2;
    double ex3;
    string ex4;
    char ex5;
};

int main()
{
    struct Example ex;
    cout << "A program to demonstrate the use of structure." << endl;
    cout<<"Enter the value of ex1 :";
    cin>>ex.ex1;
    cout<<"Enter the value of ex2 :";
    cin>>ex.ex2;
    cout<<"Enter the value of ex3 :";
    cin>>ex.ex3;
    cout<<"Enter the value of ex4 :";
    cin>>ex.ex4;
    cout<<"Enter the value of ex5 :";
    cin>>ex.ex5;
    cout<<ex.ex1;
    cout<<ex.ex2;
    cout<<ex.ex3;
    cout<<ex.ex4;
    cout<<ex.ex5;

}
