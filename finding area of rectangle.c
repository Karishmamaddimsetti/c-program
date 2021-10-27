//finding area and perimeter 0f rectangle
#include<stdio.h>
void main()
{
//variable declaration
float width,height,area,perimeter;
printf("enter width and height of the rectangle");
scanf("%f%f",&width,&height);
area =width* height;
perimeter =2*(width+ height);
//output
printf("area of rectangle is%.2f",area);
printf("perimeter of rectangle is %.2f",perimeter);
}
