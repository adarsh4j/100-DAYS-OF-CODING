#include<stdio.h>
int main()
{
   int n,rev=0,rem;
   printf("Enter the number\n");
   scanf("%d",&n);
   while(n!=0)
   {
       rem=n%10;
       rev=rev*10+rem;
       n/=10;
   }
   printf("Reverse string is %d",rev);
   return 0;
  }
