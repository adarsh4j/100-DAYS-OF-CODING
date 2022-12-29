#include<stdio.h>

int main()

{

    int n,m,flag=0;

    printf("Enter the size of first array\n");

    scanf("%d",&n);

    printf("Enter the size of second array\n");

    scanf("%d",&m);

    int a[n],b[m],i;

    if(n!=m)

    {

        printf("\nNot Same");

    }

    else

    {

        printf("Enter the elements of first array\n");

        for(i=0;i<n;i++)

        {

            scanf("%d",&a[i]);

        }

            printf("Enter the elements of second array\n");

        for(i=0;i<m;i++)

        {

            scanf("%d",&b[i]);

        }

        for(i=0;i<n,i<m;i++)

        {

               if(a[i]!=b[i])

               {

                   flag=1;

               }

        }

        if(flag=1)

        {

              printf("Not Same");

        }

        else

        {

               printf("Same");

        }

    }

    return 0;

}
