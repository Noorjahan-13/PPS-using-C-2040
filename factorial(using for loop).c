#include<stdio.h>
int main()
{
int i, num, fact=1;
printf("Enter the number to find the factorial\t");
scanf("%d", &num);
for(i=1; i<=5; i++)
{
fact= fact*i;
}
printf("factorial of %d is %d", num, fact);
return 0;
}