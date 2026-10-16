#include <stdio.h>

int main(void)
{
    int X;

    printf("Enter an integer: ");
    scanf("%d", &X);

    if(X%5 == 0 && X%7 == 0)
    {
        printf("divisible by 5 and 7\n");
    }
    else if(X%5 == 0)
    {
        printf("divisible by 5 \n");
    }
    else if (X%7 == 0)
    {
        printf("divisible by 7 \n");
    }
    else
    {
        printf("Not divisible by both 7 and 5 \n");
    }
}
