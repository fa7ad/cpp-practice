#include <iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    int i,n,content[100],sum=0;
    cout << "Enter the size of the array..." << endl;
    cin>>n;
    cout<<"Enter the elements of the array : ";
    for(i=0;i<n;i++)
    {
        cin>>content[i];
    }
    //Used for checking the input
    /*for(i=0;i<n;i++)
    {
        cout<<content[i] ;
    }*/
    for(i=0;i<n;i++)
    {
        sum=sum+i;
    }
    cout<<"Sum of the array element is: "<<sum<<endl;
    int average=sum/n;
    cout<<"Average of the array element is: "<<average<<endl;
    system("PAUSE");
}
