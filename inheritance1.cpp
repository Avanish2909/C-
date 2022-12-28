 #include<iostream>
 #include<conio.h>
 #include<string.h>
 using namespace std;
 class person
 {
 private:
    char name[20];
    int age;
 protected:
    void setName(char*n)
    {
        strcpy(name,n);
    }
    void setAge(int a){age=a;}
 public:
    char*getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    };
 };
 class Employee: public person
 {
 private:
    float salary;
 protected:
    void setSalary(float s){salary=s;}
 public:
    float getSalary(){return salary;}
    void setEmployee(char*n,int a,float s)
    {
        setName(n);
        setAge(a);
        setSalary(s);
    };
 };
 int main()
{
    Employee e1;
    e1.setEmployee("Rahul ",25,24000);
    cout<<"Name:"<<e1.getName();
    cout<<" Age:"<<e1.getAge();
    cout<<" Salary:"<<e1.getSalary();
    getch();
}
