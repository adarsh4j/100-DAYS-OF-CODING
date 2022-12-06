


#include<stdio.h>  

int main(){    

int n,i,flag=0;    

printf("Enter the number to check prime:");    

scanf("%d",&n);  

if(n==1)  

{

	printf("%d is not a prime number",n);

}

else{ 

for(i=2;i<=(n/2);i++)    

{    

if(n%i==0)    

{    

printf("%d is not prime number",n);    

flag=1;    

break;    

}    

}    

if(flag==0)    

printf("%d is prime number",n);     

return 0;

}

}
