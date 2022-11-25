//write a program to find the root of a,b,c//

//solution

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	float a,b,c,d,root1,root2,x,y;
	printf("Enter the value of a,b,c : ");
	scanf("%f %f %f",&a,&b,&c);
	d = (b*b-4*a*c);
	if(d>0)
	{
        printf("Roots are distinct\n");
		root1 = (-b+sqrt(d))/(2*a);
		root2 = (-b-sqrt(d))/(2*a);
		printf("Roots are %.2f , %.2f",root1,root2);
	}
	if(d == 0)
	{
		printf("Roots are equal\n");
		root1 = (-b)/(2*a);
		printf("Root1=Root2=%.2f",root1);
	}
	if(d<0)
	{
		x = (-b)/(2*a);
		y = sqrt(-(d))/(2*a);
		printf("Roots are\n");
		printf("%.2f + i%.2f , ",x,y);
		printf("\n%.2f - i%.2f",x,y);
	}
	return 0;
}
