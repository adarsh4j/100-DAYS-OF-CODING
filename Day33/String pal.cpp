#include<iostream>
using namespace std;
string isPalindrome(string S)
{
    string P = S;
    reverse(P.begin(), P.end());
    if (S == P) {
        return "Palindrome";
    }
    else {
        return "Not a Palindrome";

    }
}
int main()
{
    string S ;
    cout<<"Enter the string"<<endl;
    cin>>S;
    cout << isPalindrome(S);
    return 0;
}
