#include<iostream>
using namespace std;
void modify(int a)
{
    a=a+6;
    cout<<"a is :"<<a;
}
int main()
{
    int n;
    n=5;
    modify(n);
    cout<<"n is :"<<n;
    return 0;
}