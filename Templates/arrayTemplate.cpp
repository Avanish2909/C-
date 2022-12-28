#include<iostream>
using namespace std;
template <class X>
class Array
{
private:
    X a[10];
public:
    void insert(int index, X data)
    {
        a[index]=data;
    }
};
int main()
{
    Array<int>arr1;
    Array<float>arr2;
    Array<char>arr3;

}
