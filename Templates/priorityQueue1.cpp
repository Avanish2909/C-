#include<iostream>
#include<conio.h>
#include<vector>
#include<stack>
#include<queue>
#include<string>
using namespace std;
class Employee
{
private:
    int empid;
    string name;
    float salary;
public:
    float getSalary(){return salary;}
    void setEmployee(int id,string n,float s){empid=id; name=n; salary=s;}
    void showEmployee(){cout<<"\n"<<empid<<" "<<name<<" "<<salary;}
};
struct CompareSalary
{
    bool operator()(Employee &e1,Employee &e2)
    {
        return e1.getSalary() < e2.getSalary();
    }
};

int main()
{
    priority_queue<Employee,vector<Employee>,CompareSalary>p1;
    Employee emp[5],e;
    emp[0].setEmployee(1,"rahul",2000);
    emp[1].setEmployee(2,"Omkar",7000);
    emp[2].setEmployee(3,"Ruchika",5000);
    emp[3].setEmployee(4,"Nikil",6000);
    emp[4].setEmployee(5,"Aditya",3000);

    for(int i=0;i<5;i++)
        p1.push(emp[i]);
    e=p1.top();
    e.showEmployee();
    p1.pop();
    e=p1.top();
    e.showEmployee();

getch();
}
