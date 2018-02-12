#include <iostream>

using namespace std;

int main()
{
    float c;
    do
    {
        cout<<"Enter Temperature in Celsius : ";
        cin>>c;
        float f=(c/5)*9+32;
        cout<<"Entered Temperature in Fahrenheit: ";
        cout<<f<<endl;
    }
    while(c!=0);
}
