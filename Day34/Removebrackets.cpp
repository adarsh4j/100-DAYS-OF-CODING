#include<iostream>

#include<string.h>

using namespace std;

int main()

{

 char str1[50], str2[50];

 cout<<"Enter a string: ";

 cin>>str1;

 int i=0, j=0 ;

 while(str1[i] != '\0')

//for(i=0;i<strlen(str1);i++)

 {

 if(str1[i] != '(' && str1[i] != ')')

 {

 str2[j++] = str1[i];

 }

 i++;

 }

 str2[j] = '\0';

 cout<<str2;

 return 0;

}

