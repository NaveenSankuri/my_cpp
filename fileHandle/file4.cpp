#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class student{

   int rollno;
   string name;
   int marks[6];
   string grade;
   float percentage;
public:
   void getData();
   void showData();
   float calculate();
   int retRollno();
};
void student::getData(){

   cout<<"\nEnter the roll number :";
   cin>>rollno;
   cout<<"\nEnter the Student Name :";
   cin.ignore();
   getline(cin,name); 
   cout<<"Enter marks ::"<<endl;
   for(int i=0;i<6;i++){
       if(i==0)
       cout<<"English :";
       else if(i==1)
       cout<<"Social  :";
       else if(i==2)
       cout<<"Hindi   :";
       else if(i==3)
       cout<<"Maths   :";
       else if(i==4)
       cout<<"Biology :";
       else if(i==5)
       cout<<"Science :";
       cin>>marks[i];
   }
   percentage=calculate();
   if(percentage>=90)
   grade="A+";
   if(percentage>=80&&percentage<90)
   grade="A";
   if(percentage>=70&&percentage<80)
   grade="B++";
   if(percentage>=60&&percentage<70)
   grade="B";
   if(percentage>=50&&percentage<60)
   grade="C";
   if(percentage<50)
   grade="Fail";
    
}
void student::showData(){
    
    cout<<"Student Details :"<<endl;
    cout<<"Name :"<<name<<endl;
    cout<<"Rollno :"<<rollno<<endl;
    cout<<"Marks :"<<endl;
    for(int i=0;i<6;i++){
       if(i==0)
       cout<<"English :";
       else if(i==1)
       cout<<"Social  :";
       else if(i==2)
       cout<<"Hindi   :";
       else if(i==3)
       cout<<"Maths   :";
       else if(i==4)
       cout<<"Biology :";
       else if(i==5)
       cout<<"Science :";
       cout<<marks[i]<<endl;
   }
   
   cout<<"The percentage is :"<<percentage<<endl;
    
   cout<<"Grade is :"<<grade<<endl;
}
float student::calculate(){
   
   int total=0;
   for(int i=0;i<6;i++)
   total+=marks[i];
   return(total/6);
}  
int student::retRollno(){
    return rollno;
}
//*************************************************************************
void create_student();
void display_sp(int );
void display_all();
void delete_student(int);
void change_student(int);
//void intro();
//*************************************************************************
int main(){
    char ch;
    int num;
   // intro();
    do
    {
        system("cls");
        cout<<"\n\n\n\tMAIN MENU";
        cout<<"\n\n\t01. NEW ACCOUNT";
        cout<<"\n\n\t02. DEPOSIT AMOUNT";
        cout<<"\n\n\t03. WITHDRAW AMOUNT";
        cout<<"\n\n\t04. BALANCE ENQUIRY";
        cout<<"\n\n\t05. ALL ACCOUNT HOLDER LIST";
        cout<<"\n\n\t06. CLOSE AN ACCOUNT";
        cout<<"\n\n\t07. MODIFY AN ACCOUNT";
        cout<<"\n\n\t08. EXIT";
        cout<<"\n\n\tSelect Your Option (1-8) ";
        cin>>ch;
        system("cls");
        switch(ch)
        {
        case '1':
            create_student();
            break;
      /*case '2':
            cout<<"\n\n\tEnter The Roll No. : "; cin>>num;
            deposit_withdraw(num, 1);
            break;
        case '3':
            cout<<"\n\n\tEnter The account No. : "; cin>>num;
            deposit_withdraw(num, 2);
            break;*/
        case '4':
            cout<<"\n\n\tEnter The Roll No. : "; cin>>num;
            display_sp(num);
            break;
      /*case '5':
            display_all();
            break;
        case '6':
            cout<<"\n\n\tEnter The account No. : "; cin>>num;
            delete_account(num);
            break;
         case '7':
            cout<<"\n\n\tEnter The account No. : "; cin>>num;
            modify_account(num);
            break;*/
         case '8':
            cout<<"\n\n\tStudent date is preserved safely";
            break;
         default :cout<<"a";
        }
        cin.ignore();
        cin.get();
    }while(ch!='8');
    
    return 0;
}
void create_student()
{
    student s1;
    ofstream outFile;
    outFile.open("studentFile1.txt",ios::app);
    s1.getData();
    outFile.write((char*)&s1, sizeof(s1));
    outFile.close();
}
void display_sp(int n)
{
    student s1;
    bool flag=false;
    ifstream inFile;
    inFile.open("studentFile1.txt");
    if(!inFile)
    {
        cout<<"File could not be open !! Press any Key...";
        return;
    }
    cout<<"\nStudent DETAILSn";

        while(inFile.read((char*)&s1, sizeof(s1)))
    {
        if(s1.retRollno()==n)
        {
            s1.showData();
            flag=true;
        }
    }
    inFile.close();
    if(flag==false)
        cout<<"\n\nRoll Number does not exist";
}