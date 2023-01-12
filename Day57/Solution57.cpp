#include<iostream>

using namespace std;

struct student

{

    char name[50];

    int roll_no;

    float marks[5];

}s;

int main()

{

    int i;

   cout<<"Enter the name"<<endl;

   cin>>s.name;

   cout<<"Enter the rollno"<<endl;

   cin>>s.roll_no;

   cout<<"Enter the mark of 5 subjects"<<endl;

   for(i=0;i<5;i++)

   {

   cin>>s.marks[i];

   }

   cout<<"STUDENT INFORMATION"<<endl;

   cout<<" -----------------"<<endl<<"Name of student is"<<endl<<s.name<<endl;;

   cout<<"Roll no is "<<endl<<s.roll_no<<endl;

   cout<<"Mark of Student is"<<endl;

   for(i=0;i<5;i++)

   {

   cout<<s.marks[i]<<endl;

   }

   return 0;

}

