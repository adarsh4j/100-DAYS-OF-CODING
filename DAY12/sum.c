//write a program to find the sum of digit of a number

         //solution        

#include<stdio.h>
void main()
{
	int a,s=0,re;
	printf("Enter the number:");
	scanf("%d",&a);
	while(a>0)
    {
		re=a%10;
		s=s+re;
		a=a/10;
		
	}
	
	printf("The sum of digit is %d",s);
}
