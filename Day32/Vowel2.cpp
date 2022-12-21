#include <iostream>

#include <stdio.h>

using namespace std;

int main()

{

    char str[100];

    cout << "Enter a string : "<<endl;

    cin >> str;    

    int len = strlen(str);

    for(int i=0; i<len; i++)

    {           if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'        ||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')

    {    

            for(int j=i; j<len; j++)

            {

                str[j]=str[j+1];

            }

        i--;

        len--;

        }

 }   

 //   cout<<endl;

    cout << str;

    return 0;    

}

