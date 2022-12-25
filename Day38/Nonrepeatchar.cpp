#include <iostream>

using namespace std;

int main()

{

    //Initializing variables.

    char str[100];

    cout<<"Enter the string"<<endl;

    cin>>str;

    int i;

    int freq[200]={0};

    

    //Calculating frequency of each character.

    for(i = 0; str[i] != '\0'; i++)

    {

        freq[str[i]]++;

    }

    cout<<"The non repeating characters are: ";

    for(i = 0; i < 200; i++)

    {

        if(freq[i] == 1)//Finding non repeating charcters and printing them.

        {

           cout<<char(i)<<"  " ;

        }

    }

    return 0;

}

