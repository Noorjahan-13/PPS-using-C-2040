#include<stdio.h>
int main () 
{
  int marks;
  printf("enter marks \t");
  scanf("%d",& marks);
  if ( marks >= 0) 
  {
     printf("Pass");
     
  }
  else
  {
     printf("Fail");
  }
  return 0;
}