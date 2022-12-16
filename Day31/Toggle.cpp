#include<iostream>

#include<string.h>

#include<ctype.h>

using namespace std;

int main ()

{

    char str[50];

    cout << "Enter a string : "<<endl;

    cin>>str;

    for (int i = 0; i<strlen(str); i++)

    {

        if (isalpha(str[i]))

        {

            if (islower(str[i]))

                str[i] = toupper(str[i]);

            else

                str[i] = tolower(str[i]);

        }

        else

   	{            cout << "The string is not alphabetical."<<endl;

        }

    }

    cout << "The toggled string is " << str<<endl;

    return 0;

}
