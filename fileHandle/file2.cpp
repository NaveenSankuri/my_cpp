#include<fstream>
#include<iostream>
#include<string>
using namespace std;
int main(){
    string name;
    ifstream ifile;
    ifile.open("file1.txt");
    getline(ifile,name);
    ifile.close();
    cout<<name;
    

    return 0;
}