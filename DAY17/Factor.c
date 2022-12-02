
#include<stdio.h>
int main()
{
   int a,i;
   printf("Enter the number:");
   scanf("%d",&a);
   printf("Factors are ");
   for(i=1;i<=a;i++)
   {
       if(a%i==0)
       {
         printf("\n%d",i);
       }
   }
   return 0;
}
      
