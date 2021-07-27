#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class student{
    public:
    int rollno;
    string name;
    int percentage;
    
    void getData();
    void showData();

};
void student::getData(){
    cout<<"enter Roll Number :";
    cin>>rollno;
    cout<<"enter Name :";
    cin.ignore();
    getline(cin,name);
    cout<<"Enter percentage of student :";
    cin>>percentage;
}
void student::showData(){
    cout<<"Roll Number :"<<rollno<<endl;
    cout<<"Name :"<<name<<endl;
    cout<<"Percentage :"<<percentage<<endl;
}
//************************************************************
void create_student();
void check();
//************************************************************

int main(){
    char ch;
do{
    system("cls");
    cout<<"*****MENU*****"<<endl;
    cout<<"1.Create Student Data"<<endl;
    cout<<"2.Chech who has good grade"<<endl;
    cout<<"Enter 8 to Exit"<<endl;
 
    cout<<"Enter the option :"<<endl;
    cin>>ch;
    system("cls");
    switch(ch){

        case '1':
          create_student();
          break;
        case '2':
          check();
          break;
        case '3':
          cout<<"******Exited******";
          break;
        case '8':
          cout<<"thanks for using"<<endl;
          break;
        default:
          cout<<"Enter correctly";
    }
    cin.ignore();
    cin.get();
  }while(ch!='8');

    return 0;
}
void create_student(){
    student s;
    s.getData();
    ofstream ofile;
    ofile.open("stud.txt",ios::app);
    ofile.write((char*)&s,sizeof(s));
    ofile.close();

}
void check(){
    student s2;
    ifstream ifile("stud.txt",ios::in);
    int max=0;
    string topper;
    
    ifile.read((char*)&s2,sizeof(s2));
    while(!ifile.eof()){
         if(s2.percentage>max){
             max=s2.percentage;
             topper=s2.name;
         }
        ifile.read((char*)&s2,sizeof(s2));

    }
    cout<<"topper is :"<<topper;
    


}