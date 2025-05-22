#include<stdio.h>
int main()
{
 int i, num, table;
 printf("Enter Number");
 scanf("%d", &num);
 for(i=1; i<=10; i++)
  {
  table= num*i;
  printf("%d\n", table);
  }
  return 0;
}
