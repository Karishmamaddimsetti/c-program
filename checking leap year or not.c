
#include<stdio.h>
int main()
{
	int year;
	printf("enter year :");
	scanf("%d",&year);
	if(year%400 ==0)//leap year is perfectly divisible by 400
	{
		printf("%d is a leap year :");
	}
	// not a leap year if divisible by 100
	//but not divisible by 400
	else if(year %100==0)
	{
		printf("%d is not a leap year :",year);
	}
	else if(year%4==0)
	{
		printf("%d is a leap year :",year);
	}
	//all other years are not leap years
	else{
		printf("%d is not a leap year:",year);
	}
}
