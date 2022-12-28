#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
void writing()
{
    ofstream fout;
     getch();
    fout.open("file1.txt");
     getch();
    fout<<"Avanish Prajapati";
     getch();
    fout.close();
     getch();
}
int main()
{
    writing();
    getch();
}
