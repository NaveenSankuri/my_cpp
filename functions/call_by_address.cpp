#include<iostream>
using namespace std;
void increm(int *p)
{
    (*p)++;
}
int main()
{
    int a=5;
    increm(&a);
    cout<<a;
    return 0;
}