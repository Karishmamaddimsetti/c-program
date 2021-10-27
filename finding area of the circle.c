//calculate area and circumference of circle
#include <stdio.h>
int main()
{
	//variable declaration
	float r,area,circumference;
	printf("enter 'r' valve of the circle"); 
	scanf("%f",&r);
	//calculation
	area = 3.14*r*r;
	circumference =2*3.14*r;
	//output
	printf("area of the circle is %f",area);
	printf("circumference of the circle is %f",circumference);
	
}
