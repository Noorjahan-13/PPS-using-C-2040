
#include <stdio.h>
int main()
{
    int num1, num2, difference;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    difference = num1 - num2;

    printf("Subtraction of %d and %d is %d\n", num1, num2, difference);

    return 0;
}