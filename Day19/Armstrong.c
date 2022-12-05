#include<stdio.h>
#include<math.h>
int main()
{
       int a,d,temp,sum=0,count=0;
       printf("Enter the number: ");
       scanf("%d",&a);
       temp=a;
       while(a!=0)
       {
         a=a/10;
         count++;
       }
       a=temp;
       while(a!=0)
       {
          d=a%10;
         sum=sum + pow(d,count);
         a/=0;
       }
       if(temp==sum)
       {
             printf("Armstrong number");
       }
       else
       {
            printf("Not an Armstrong number");
       }
    return 0;
    
}
