#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
struct Book{
    private:
    int bookid;
    char tittle;
    float price;
    public:
    void display(){
    cout<<"\n"<<bookid<<" "<<tittle<<" "<<price;
        }
        void input(){
            cout<<"Enter bookid, tittle and price";
            cin>>bookid;
            if(bookid<0)
                bookid=-bookid;
            cin.ignore();
            cin.getline(tittle,20);
            cin>>price;
        }
};
int main(){
    Book b1={1,"Java",345.0};
    Book b2,b3;
    b2.bookid=2;
    strcpy(b2.tittle,"Python");
    b2.price=453.0;
    b3.input();
    b1.display();
    b2.display();
    b3.display();
    getch();
  }
