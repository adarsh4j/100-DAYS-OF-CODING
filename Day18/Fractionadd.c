#include<stdio.h>

int main()

{

       int x1,x2,y1,y2;

       scanf("%d",&x1);

       scanf("%d",&x2);

       scanf("%d",&y1);

       scanf("%d",&y2);

       int x3=(x1*y2) + (x2*y1);

       int y3=(x2*y2);

       int y=1;

       for(int i=1;i<x3||i<y3;i++)

       {

         if(x3%i==0 && y3%i==0)

         {

           y=i;

         }

       }

       x3=x3/y;

       y3=y3/y;

       printf("%d /%d",x3,y3);

       return 0;

       

  

}
