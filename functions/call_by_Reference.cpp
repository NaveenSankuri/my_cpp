#include<iostream>
using namespace std;
void incre(int &a)
{
    a+=1;
}
int main()
{ 
      int f;
      f=2;
      incre(f);
      cout<<f;
    return 0;
}