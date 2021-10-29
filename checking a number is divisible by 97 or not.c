//checking number is divisible by 97 0r not
#include<stdio.h>
int main()
{
	int number;
	printf("enter number :");
	scanf("%d",&number);
	if(number%97==0)
	{
		printf("given number is divisible by 97");
	}
	else
	{
		printf(" given number is not divisible by 97");
	}
}
