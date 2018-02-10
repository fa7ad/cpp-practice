#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int n;
    cout << "Enter any integer : ";
    cin>>n;
    if(n%2==0)
        cout<<n<<" is even."<<endl;
    else
        cout<<n<<" is odd."<<endl;
    system("PAUSE");
}
