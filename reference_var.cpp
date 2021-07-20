#include<iostream>
using namespace std;

int main()
{
    int a=5;
    int &c=a;
    c=12;
    cout<<a;
    return 0;
}