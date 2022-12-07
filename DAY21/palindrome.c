#include<stdio.h>
int main()
{
int n,temp,r,sum=0;
printf("\n Enter The Number:");
scanf("%d",&n);
temp=n;
while(n>0)
{
r=n%10;
sum=(sum*10)+r;
n=n/10;
}
if(temp==sum)
{
printf("Palindrome");
}
else
{
printf("Not a Palindrome");
}
return 0;
}
