#include <stdio.h>

int main(void)
{
    float a,b;
    char op;

    printf("Enter an opperator : ");
    scanf("%c", &op);
    printf("Enter a first number: ");
    scanf("%f", &a);
    printf("Enter a second number: ");
    scanf("%f", &b);

    switch(op)
    {
        case '+': printf("the sum is: %f \n", a + b); break;
        case '-': printf("the subtraction result is: %f \n", a - b); break;
        case '*': printf("the product result is: %f \n", a * b); break;
        case '/':
        if(b != 0)
        {
            printf("the result of division is: %f \n", a/b);
        }
        else
        {
            printf("Division by zero. \n");
        }
        break;
        default:
        printf("Unknown opperator. \n");
    }
}
