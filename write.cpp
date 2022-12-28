#include<fstream>
#include<conio.h>
#include<iostream>
using namespace std;
void writing()
{
    ofstream fout;
    getch();
    fout.open("filew.txt");
    getch();
    fout<<"Mysirg Education Service";
    getch();
    fout.close();
    getch();
}
int main()
{
    writing();
    getch();
}
