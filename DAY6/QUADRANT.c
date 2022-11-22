#include <stdio.h>
int main()
{
	int a,b;
	printf("Enter the value:\n");
	scanf("%d %d",&a,&b);
	if(a > 0 && b > 0)
		printf("I Quadrant");
	else if(a < 0 && b > 0)
		printf("II Quadrant");
	else if(a < 0 && b < 0)
		printf("III Quadrant");
	else if(a > 0 && b < 0)
		printf("IV Quadrant");
	else
		printf("Orgin");
	return 0;
}
