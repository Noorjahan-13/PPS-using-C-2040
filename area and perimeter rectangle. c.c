#include<stdio.h>
int main () 
{
   int length,breadth, area, perimeter;
   printf("enter length of rectangle");
   scanf("%d",& length);
   printf("enter breadth of rectangle");
   scanf("%d",& breadth);
   perimeter = 2*(length + breadth);
   printf("perimeter of %d & %d is %d",length,breadth,perimeter); 
   area = length * breadth;
   printf("area of %d & %d is%d",length,breadth,area);
   return 0;
}