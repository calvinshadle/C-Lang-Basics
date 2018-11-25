#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello and Welcome to Calvin's Calculator!\n");
    double num1;
    double num2;
    char operation;
    printf("Enter the first number: ");
    scanf("%lf", &num1);
    printf("Enter the second number: ");
    scanf("%lf", &num2);

    printf("Answer: %f", num1 + num2);

    return 0;
}
