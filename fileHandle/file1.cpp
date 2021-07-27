#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char name[50];
    ofstream ofile;
    ofile.open("file1.txt");
    cout<<"Enter a name"<<endl;
    cin.getline(name,50);
    ofile<<name<<endl;
    ofile.close();


    return 0;
}