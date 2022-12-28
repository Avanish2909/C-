#include<iostream>
#include<conio.h>
#include<string.h>
#include<fstream>
using namespace std;
class Book
{
private:
    int bookid;
    char tittle[20];
    float price;
public:
    void setBook(int id, char*t, float p){
        bookid=id;
        strcpy(tittle,t);
        price=p;
    }
    void showBook(){cout<<"\n"<<bookid<<"  "<<tittle<<"  "<<price;}
    void saveBook(){
        ofstream fout;
        fout.open("bookfile.dat",ios::app|ios::binary);
        fout.write((char*)this,sizeof(*this));
        fout.close();
    }
    void viewAllBooks()
    {
        ifstream fin;
        fin.open("bookfile.dat",ios::in|ios::binary);
        if(!fin)
            cout<<"file is not found";
        else
        {
            fin.read((char*)this,sizeof(*this));
            while(!fin.eof()){
                showBook();
                fin.read((char*)this,sizeof(*this));
            }
        }
        fin.close();
    }
};

int main()
{
    Book b1;
    b1.setBook(1,"java",400);
    b1.saveBook();
    b1.setBook(2,"PHP",200);
    b1.saveBook();
    b1.setBook(3,"Python",600);
    b1.saveBook();
    b1.setBook(4,"C++",300);
    b1.saveBook();
    b1.viewAllBooks();


    getch();
}
