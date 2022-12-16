#include<iostream>

using namespace std;

int main()

{

	 char str[10];	 int i,temp=1;

	 cout<<"Enter the string"<<endl;

	 cin>>str;

	 for(i=1;str[i]!='\0';++i)

	 {

	 	temp++;

	 }

	 cout<<"The length of string is "<<temp<<endl;

	 return 0;

}
