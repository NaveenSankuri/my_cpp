#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name;
    int num;
    cout<<"\n Enter the roll number\n";
    cin>>num;
    cout<<"\nthe number is :"<<num;
    cout<<"\n enter the name :";
    cin.ignore();
    getline(cin,name);
    cout<<"\nthe name is :"<<name;
    //cout<<name<<endl;
    //cout<<num;

    return 0;
}