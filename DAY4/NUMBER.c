#include<stdio.h>
int main()
{

	int a;
	scanf("%d",&a);
	if(a<0)
    {
	    printf("Negative number"); 
    }
    else if(a>0)
		{
			printf("Positive number");
		}
	else
    {
		printf("Neither positive nor negative");
	}
	return 0;
}
