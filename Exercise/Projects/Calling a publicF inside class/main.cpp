#include <iostream>

using namespace std;

class Massage
{
    string text;
public:
    void setMassage(string msg)
    {
        text=msg;
    }
    void printMassage(string msg)
    {
        cout<<text<<endl;
    }
};

int main()
{
    Massage text1;
    string m;
    cout<<"Enter your text : ";
    getline(cin,m);

    text1.setMassage(m);

    text1.printMassage(m);
}
