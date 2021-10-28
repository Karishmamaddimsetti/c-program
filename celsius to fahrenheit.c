//converting celsius to fahrenheit
#include<stdio.h>
void main()
{
	float fahrenheit,celsius;
	printf("enter temperature in celsius");
	scanf("%f%f",&celsius);
    
	
	fahrenheit = ((celsius*9/5)+32);// calculation
    printf("%2f celsius = %2f fahrenheit",celsius,fahrenheit);
    
	
		
}

