#include<stdio.h>

int main()
{
    int a,b,c,sum;
    float avg;
    printf("enter 1st no,");
    scanf("%d",&a);
    printf("enter 2nd no");
    scanf("%d",&b);
    printf("enter 3rd no");
    scanf("%d",&c);
    sum=a+b+c;
    avg=sum/3;
    printf("sum and avg of given no is %d %f",sum,avg);
    return 0;
}