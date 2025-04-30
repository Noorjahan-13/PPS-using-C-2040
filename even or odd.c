#include<stdio.h>
int main () 
{
  int a, remainder;
  printf("enter the value of a\t");
  scanf("%d",& a);
  remainder = ( 'a' % 2) ;
  if (remainder == 0) 
  {
     printf("even");
  }
  else
  {
     printf("odd");
  }
  return 0;
}