#include <iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    int a,i,sum=0;
    cout << "Enter any positive number to check whether it is prime or not... "<< endl;
    cin>>a;
    for(i=2;i<=a/2;i++)
    {
        if(a%i==0)
        {
            sum=1;
            break;
        }
    }
    if(sum==0)
        cout<<a<<" is a prime number.";
    else
        cout<<a<<" is not a prime number."<<endl;
    system("PAUSE");
}
