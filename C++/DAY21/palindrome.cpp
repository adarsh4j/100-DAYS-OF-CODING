#include<iostream>
using namespace std;
int main()
{
int n,temp,r,sum=0;
cout<<"\n Enter The Number:";
cin>>n;
temp=n;
while(n>0)
{
r=n%10;
sum=(sum*10)+r;
n=n/10;
}
if(temp==sum)
{
cout<<"Palindrome";
}
else
{
cout<<"Not a Palindrome";
}
return 0;
}
