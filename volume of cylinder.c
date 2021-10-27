//calculating volume of the cylinder
#include<stdio.h>
int main()
{
	//variable declaration
	
    float volume_of_the_cylinder,r,h;
	printf(" enter r and h value\n");
	scanf("%f%f",&r,&h);
	//calculation
	volume_of_the_cylinder = (22*r*r*h)/7;
	//output
	printf("volume of the cylinder is %f\n",volume_of_the_cylinder);
	return 0;
}
