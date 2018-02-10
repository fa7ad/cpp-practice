#include <iostream>

using namespace std;

class Book
{
public:
    string name, authorName;
    int page;
    float edition;
};

int main()
{
    class Book b1;
    cout<<"Enter Book's Name= ";
    cin.ignore();
    getline(cin,b1.name);
    cout<<"Enter Author's Name= ";
    cin.ignore();
    getline(cin,b1.authorName);
    cout<<"Enter Edition= ";
    cin>>b1.edition;
    cout<<"Enter total page= ";
    cin>>b1.page;

    //Shows output

    cout<<endl;
    cout<<"Book's name= "<<b1.name<<endl;
    cout<<"Author's name= "<<b1.authorName<<endl;
    cout<<"Edition= "<<b1.edition<<endl;
    cout<<"Total page= "<<b1.page<<endl;
}
