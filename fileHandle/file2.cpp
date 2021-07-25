#include<fstream>
#include<iostream>
using namespace std;
int main(){
    char name[50];
    ifstream ifile;
    ifile.open("file1.txt");
    ifile>>name;
    ifile.close();
    cout<<name;

    return 0;
}