
#include<stdio.h>

int main()
{
    float gs, bs, ta, hra;

    printf("Enter bs of Ramesh\t");
    scanf("%f", &bs);

    ta = bs * (0.40);
    printf("\nta is %f", ta);

    hra = bs * (0.20);
    printf("\nhra is %f", hra);

    gs = bs + ta + hra;
    printf("\ngs is %f", gs);

    return 0;
}