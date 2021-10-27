//finding area and perimeter of square
#include<stdio.h>
void main()
{
	//variable declaration
	float length,area,perimeter;
	printf("enter length");
	scanf("%f",&length);
	//calculation
	area = length*length;
	perimeter = 4*(length);
	//output
	printf("area of square is %f",area);
	printf("perimeter of square is %f",perimeter);	
}
