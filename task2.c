#include<stdio.h>
void main()
{
  int length,width,area ,perimeter;
  sacnf("%d%d",&length,&width);
    area=length*width;
    perimeter=2*(length+width);
    printf("area of rectangle with %d and %d is %d",length,width,area);
    printf("\nperimeter of a rectangle with %d and %d is %d",length,width,perimeter);

}
  
