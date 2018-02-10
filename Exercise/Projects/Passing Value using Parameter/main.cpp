
#include <iostream>
using namespace std;

class Book
{
    string name, authorName;
    int page;
    float price;
    float ed;
public:
    void setValues(string nm,string aut,int pg,float pr,float e);
    void getValues();
};

void Book::setValues(string nm,string aut,int pg,float pr,float e)
{
    name=nm;
    authorName=aut;
    page=pg;
    price=pr;
    ed=e;
}

void Book::getValues()
{
   cout<<"Book's Name= "<<name<<endl;
   cout<<"Author's Name= "<<authorName<<endl;
   cout<<"Page= "<<page<<endl;
   cout<<"Price= "<<price<<endl;
   cout<<"Edition= "<<ed<<endl;
}

int main()
{
    Book b1,b2,b3;
    string n,autn;
    int p;
    float pri,ed;

    cout<<"Taking Information for b1: "<<endl;
    cout<<"Enter Book's Name: ";
    getline(cin,n);
    cout<<"Enter Author's Name: ";
    getline(cin,autn);
    cout<<"Enter Page= ";
    cin>>p;
    cout<<"Enter Price: ";
    cin>>pri;
    cout<<"Enter Edition: ";
    cin>>ed;

    b1.setValues(n,autn,p,pri,ed);

    cin.ignore();

    cout<<"Taking Information for b2: "<<endl;
    cout<<"Enter Book's Name: ";
    getline(cin,n);
    cout<<"Enter Author's Name: ";
    getline(cin,autn);
    cout<<"Enter Page= ";
    cin>>p;
    cout<<"Enter Price: ";
    cin>>pri;
    cout<<"Enter Edition: ";
    cin>>ed;

    b2.setValues(n,autn,p,pri,ed);

    cout<<"Information of b1: "<<endl;
    b1.getValues();
    cout<<"Information of b2: "<<endl;
    b2.getValues();
}
