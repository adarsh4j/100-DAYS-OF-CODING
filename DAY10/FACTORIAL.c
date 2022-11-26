//write a program to find the factorial of a number in c


           //solution

#include<stdio.h>  
int main()    
{    
	int i,fact=1,a;    
	printf("Enter a number: ");    
	scanf("%d",&a);    
	for(i=1;i<=a;++i){    
		fact=fact*i;    
	}    
	printf("Factorial of %d is: %d",a,fact);    
	return 0;  
}   
