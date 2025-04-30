#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter num 1: ");
    scanf("%d", &a);

    printf("Enter num 2: ");
    scanf("%d", &b);

    printf("Initial value of a is %d\t", a);
    printf("Initial value of b is %d\t", b);

    c = a;
    a = b;
    b = c;

    printf("\nInterchanged value of a is %d\t", a);
    printf("Interchanged value of b is %d\t", b);

    return 0;
}