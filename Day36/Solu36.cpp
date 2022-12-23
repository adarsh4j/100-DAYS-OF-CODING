#include<iostream>

#include <ctype.h>

#include<string.h>

using namespace std;

int main() 

{

 char str[20];

 int length = 0,i;

 cout<<"Enter a string: "<<endl;

 cin>>str;

 length = strlen(str);

 for(i=0;i<length;i++){

 if (isalpha(str[0]) && isalpha(str[length-1])  )

        {

            if (islower(str[0]) && islower(str[length-1]))

                str[0] = toupper(str[0]);

                str[length-1]=toupper(str[length-1]);

        }        

        }

cout<<"The new  string is "<<str<<endl;

return 0;

}

