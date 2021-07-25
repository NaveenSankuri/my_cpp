#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream file1;
    file1.open("puppy.txt");
    file1<<"dogs are friendly animals";
    file1.close();
    ifstream file2;
    file2.open("puppy.txt");
    string s1;
    while(file2>>s1){
        cout<<s1;
    }
    file2.close();

    

    return 0;
}