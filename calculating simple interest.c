//calculating simple interest
#include<stdio.h>
void main()
{
	float p,t,r,si;

	printf("enter the value of principle");
	scanf("%f",&p);
	printf("enter the value of time");
	scanf("%f",&t);
	printf("enter the value of rate");
	scanf("%f",&r);
	
	si = (p*t*r)/100;
	printf("simple interest is =%f",si);
}
