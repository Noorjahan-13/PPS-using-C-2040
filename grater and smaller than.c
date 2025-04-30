#include<stdio.h>
int main () 
{
  int a , b;
  printf("enter the value of a:\t");
  scanf("%d",& a);
  printf("enter the value of b:\t");
  scanf("%d",& b);
  if ( a > b) 
  {
     printf("a is greater than b");
     
  }
  else
  {
     printf("b is greater than a");
  }
  return 0;
}