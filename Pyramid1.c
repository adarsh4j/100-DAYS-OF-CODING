#include<stdio.h>
int main()
{
	int a,i,j,k;
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		for(j=a;j>i;j--)
		{
			printf(" ");
		}
		for(k=1;k<=2*i-1;k++)
		{
			printf("*");
		}
		printf("\n");
		printf("\n");
		printf("\n");
	//	printf("\n");
	}
	return  0;
}


//Output
    
    *

   ***
   
  *****
  
 *******     
