#include <stdio.h>

int main()
{
    int i, Num, num, a, sum;
    long fact;
    printf("Enter any number : ");
    scanf("%d", &num);
    Num = num;

    sum = 0;
    while(num > 0)
    {

        a = num % 10;
        fact = 1;
        for(i=1; i<=a; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        num = num / 10;
    }
    if(sum == Num)
    {
        printf("%d is STRONG NUMBER", Num);
    }
    else
    {
        printf("%d is NOT STRONG NUMBER", Num);
    }

    return 0;
}
