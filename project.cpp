#include<iostream>
#include<fstream>
using namespace std;

int main(){
    char arr[100];
    cout  <<"enter your name and age";
    cin.getline(arr,100);
    ofstream writte("data.n",ios::app);
    writte<<arr;
    writte.close();
    cout<<"file write operation perfomed ";
    char arr1[100];
    ifstream opeen("data.n");
    opeen.getline(arr1,100);
    cout<<"array content :"<<arr1<<endl;
    cout<<"file read operation completed";
    opeen.close();
    return 0;
}