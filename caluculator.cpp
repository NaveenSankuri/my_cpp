#include<iostream>
using namespace std;

int main()
{
    int a,b;
    //float c;
    restart:
    char sign;
   // cout<<"Enter an operator to perform"<<endl;
   // cout<<"1. +\n"<<"2. -\n"<<"3. /\n"<<"4. *\n"<<"5. %"<<endl;
   // cin>>sign;
   // cout<<"enter two numbers "<<endl;
    cin>>a>>sign>>b;
    switch(sign){
      
        case '+':
            cout<<a<<"+"<<b<<"="<<a+b<<endl;
            break; 
        case '-':
            cout<<a<<"-"<<b<<"="<<a-b<<endl;
            break;
        case '*':
            cout<<a<<"*"<<b<<"="<<a*b<<endl;
            break;
        case '/':
            cout<<a<<"/"<<b<<"="<<(float)a/b<<endl;
            break;
        case '%':
            cout<<a<<"%"<<b<<"="<<a%b<<endl;
            break;
        default:
            cout<<"enter correct sign"<<endl;
    }
    cout<<"Enter C :continue"<<endl;
    char c;
    cin>>c;
    if(c=='c'||c=='C')
    goto restart;
    return 0;
}