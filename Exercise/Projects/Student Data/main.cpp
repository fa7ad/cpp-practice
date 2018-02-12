#include <iostream>

using namespace std;

class Student
{
    string name, id;
    int creditCompleted;
    float gpa;
public:
    void setValues(string nm, string i, int cc, float gp)
    {
        name=nm;
        id=i;
        creditCompleted=cc;
        gpa=gp;
    }
    float cgpa()
    {
        return gpa/creditCompleted;
    }
    void showValues(string nm, string i, int cc, float gp)
    {
        cout<<"Name             : "<<name<<endl;
        cout<<"ID               : "<<id<<endl;
        cout<<"Credit Completed : "<<creditCompleted<<endl;
        cout<<"CGPA             : "<<cgpa()<<endl;
    }
};

int main()
{
    Student firstStudent, secondStudent;
    string n, iden;
    int crc;
    float g;

    cout<<"Enter Student's name : ";
    getline(cin,n);
    cout<<"Enter Student's ID   : ";
    cin.ignore();
    getline(cin,iden);
    cout<<"Enter Credit         : ";
    cin>>crc;
    cout<<"Enter GPA            : ";
    cin>>g;

    firstStudent.setValues(n,iden,crc,g);

    cin.ignore();
    cout<<"Enter Student's name : ";
    getline(cin,n);
    cout<<"Enter Student's ID   : ";
    getline(cin,iden);
    cout<<"Enter Credit         : ";
    cin>>crc;
    cout<<"Enter GPA            : ";
    cin>>g;

    secondStudent.setValues(n,iden,crc,g);

    firstStudent.showValues(n,iden,crc,g);
    secondStudent.showValues(n,iden,crc,g);
}
