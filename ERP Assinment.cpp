#include<iostream>
using namespace std;
class student
{
public:
void menu();
int file();
};
void student::menu()
{
cout<<"1.Student profile"<<"\n"<<"2.Class Routine\n"<<"3.course List\n"<<"4.Payment\n"<<"5.Grade\n"<<endl;
}
int student::file()
{
int tution_fee=4000;
int semester_fee=10000;
int total_fee=14000;
int choice;
cout<<"Enter your Choice : ";
cin>>choice;
switch(choice)
{
case 1:
cout<<"Name:Jihad Howlader"<<endl;
cout<<"Id:9164\n"<<"Section:24A1\n"<<"Department:Cse"<<endl;
break;
case 2:
cout<<"Your class routine is:"<<endl;
cout<<"Your Class Routine"<<endl;
break;
case 3:
cout<<" Your Course List:"<<endl;
cout<<"Business English"<<endl;
cout<<"Physics"<<endl;
cout<<"C++(OOP)"<<endl;
cout<<"Math"<<endl;
break;
case 4:
cout<<"payment"<<endl;
cout<<"Your semester fee"<<semester_fee<<endl;
cout<<"Your tution fee:"<<tution_fee<<endl;
cout<<"Your total fee:"<<total_fee<<endl;
break;
case 5:
double class_test=20,mid_test=18,final_mark=30,attendence=10,m;
m=class_test+mid_test+final_mark+attendence;
cout<<"Your class test:"<<class_test<<" "<<"Mid exam mark:"<<mid_test<<" "<<"Final mark:"<<final_mark<<" "<<"Attendence mark:"<<attendence<<endl;
cout<<"Your total mark is:"<<m<<endl;
cout<<"Your grade:"<<endl;
if(m>100||m<0)
cout<<"Invalid marks"<<endl;
else if(m>=80)
cout<<"A+"<<endl;
else if(m>=70)
cout<<"A"<<endl;
else if(m>=60)
cout<<"A-"<<endl;
else if(m>=50)
cout<<"B"<<endl;
else if(m>=40)
cout<<"C"<<endl;
else if(m>=33)
cout<<"D"<<endl;
else
cout<<"F"<<endl;
break;
}
}
int main()
{
int id;
string name;
string  password;
student obj1;
cout<<"Enter your ID:";
cin>>id;
cout<<"Enter your Name:";
cin>>name;
cout<<"Enter your Password:";
cin>>password;
if(id == 9164 && password == "123456" )
{
cout<<"login successfully"<<endl;
cout<<"Menu"<<endl;
obj1.menu();
obj1.file();
cout<<"Access Denied";
}
else
cout<<"Access Denied";
return 0;
}