/*Warning!
This file may contain error or may not run successfully.
*/

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
    void setValues(string n,string a_n,int p,float c,float e);
    void printValues();
};
void Book::getValues(){
    string n, a_n;
    int p;
    float c,e;

    cout<<"Enter Book's name= ";
    getline(cin,n);
    cout<<"Enter Author's name= ";
    getline(cin,a_n);
    cout<<"Enter Total page= ";
    cin>>p;
    cout<<"Enter price= ";
    cin>>c;
    cout<<"Enter Edition= ";
    cin>>e;
    cin.ignore();
}
void Book::setValues(string n,string a_n,int p,float c,float e){
    name=n;
    authorName=a_n;
    total_page=p;
    price=c;
    edition=e;
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
    string n, a_n;
    int p;
    float c,e;
    b1.getValues();
    b1.setValues(n,a_n,p,c,e);
    b1.printValues();
    b1.getValues();
    b2.setValues(n,a_n,p,c,e);
    b2.printValues();
}


