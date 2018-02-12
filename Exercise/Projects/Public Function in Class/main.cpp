#include <iostream>

using namespace std;

class Massage
{
    string text;
public:
    void setMassage(string msg);
    void printMassage(string msg);
};
void Massage::setMassage(string msg)
    {
        text=msg;
    }
void Massage::printMassage(string msg)
    {
        cout<<text<<endl;
    }

int main()
{
    Massage text1;
    string m;
    cout<<"Enter your text : ";
    getline(cin,m);

    text1.setMassage(m);
    cout<<"You entered : ";
    text1.printMassage(m);
}
