#include<stdio.h>
void main()
{
	int number;
	printf("enter number :");
	scanf("%d",&number);
	switch(number)
	{
		case 1:
			printf("%dst month is january",number);
			break;
		case 2:
			printf("%dnd month is february",number);
			break;
		case 3:
			printf("%drd month is march",number);
			break;
		case 4:
			printf("%dth month is april",number);
			break;
		case 5:
			printf("%dth month is may",number);
			
			break;
		case 6:
			printf("%dth month is june",number);
			break;
		case 7:
			printf("%dth month is july",number);
			break;
		case 8:
			printf("%dth month is august",number);
			break;
		case 9:
			printf("%dth month is september",number);
			break;
		case 10:
			printf("%dth month is october",number);
			break;
		case 11:
			printf("%dth month is november",number);
			break;
		case 12:
			printf("%dth month is december",number);
			break;
		default:
		          printf("invalid month");			
	}
}
