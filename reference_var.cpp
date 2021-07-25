#include<iostream>
using namespace std;

int main()
{
    int a=5;
    int &c=a;
    c=12;
    cout<<a<<endl;
    cout<<&c<<endl;
    cout<<&a;
    return 0;
}