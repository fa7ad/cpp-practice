#include <iostream>

using namespace std;

class Book
{
    public:
    string name, authorName;
    int total_page;
    float price, edition;
};

int main()
{
    Book b1, b2;
    cout<<"Enter Book1's name : ";
    getline(cin,b1.name);
    cout<<"Enter Author's name: ";
    getline(cin,b1.authorName);
    cout<<"Enter Page         : ";
    cin>>b1.total_page;
    cout<<"Enter Price        : ";
    cin>>b1.price;
    cout<<"Enter Edition      : ";
    cin>>b1.edition;
    cout<<"Enter Book2's name : ";
    cin.ignore();
    getline(cin,b2.name);
    cout<<"Enter Author's name: ";
    getline(cin,b2.authorName);
    cout<<"Enter Pages        : ";
    cin>>b2.total_page;
    cout<<"Enter Price        : ";
    cin>>b2.price;
    cout<<"Enter Edition      : ";
    cin>>b2.edition;

    cout<<"Book1's name  : "<<b1.name<<endl;
    cout<<"Author's Name : "<<b1.authorName<<endl;
    cout<<"Pages         : "<<b1.total_page<<endl;
    cout<<"Price         : "<<b1.price<<endl;
    cout<<"Edition       : "<<b1.edition<<endl;



    cout<<"Book2's name  : "<<b2.name<<endl;
    cout<<"Author's Name : "<<b2.authorName<<endl;
    cout<<"Pages         : "<<b2.total_page<<endl;
    cout<<"Price         : "<<b2.price<<endl;
    cout<<"Edition       : "<<b2.edition<<endl;
}
