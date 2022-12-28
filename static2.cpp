#include<iostream>
#include<conio.h>
using namespace std;
class item
{
private:
    int a,b;
    static int k;
public:
    void set_a(int x){a=x;}
    int get_a(){return a;}
    void set_k(int y){k=y;}
    int get_k(){return k;}
};
int item::k=1;
int main()
{
    item i1,i2;
    i1.set_a(5);
    cout<<"a="<<i2.get_a()<<endl;
    i1.set_k(10);
    cout<<"k="<<i2.get_k();
    getch();
}
