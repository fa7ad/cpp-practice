#include <iostream>

using namespace std;

class Book
{
    private:
    string name, authorName;
    int total_page;
    float price, edition;
    public:
    void getValues();
    void printValues();
};
void Book::getValues(){
    cout<<"Enter Book's name= ";
    getline(cin,name);
    cout<<"Enter Author's name= ";
    getline(cin,authorName);
    cout<<"Enter Total page= ";
    cin>>total_page;
    cout<<"Enter price= ";
    cin>>price;
    cout<<"Enter Edition= ";
    cin>>edition;
    cin.ignore();
}
void Book::printValues()
{
    cout<<"Book's name   : "<<name<<endl;
    cout<<"Author's Name : "<<authorName<<endl;
    cout<<"Pages         : "<<total_page<<endl;
    cout<<"Price         : "<<price<<endl;
    cout<<"Edition       : "<<edition<<endl;
}

int main()
{
    Book b1,b2;
    b1.getValues();
    b1.printValues();
    b2.getValues();
    b2.printValues();
}

