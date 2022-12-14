#include <iostream>

#include<string>

using namespace std;

int main()

{

    string str,str1,str2;

    cout<<"Enter the first string: "<<endl;

    getline(cin, str);

    cout<<"Enter the second string: "<<endl;

    getline(cin, str1);

    cout << "The first string is: "<<str<<endl;

    cout << "The second string is: " <<str1<< endl;

    str2=str+str1;

    cout<<"The concatenated string is "<<endl<<str2; 

    return 0;

}

