//printing fibonacci series
#include<stdio.h>
void main()
{
	int n1=0,n2=1,n3,i,number;
	printf("enter number of elements :");
	scanf("%d",&number);
	printf("\n%d %d",n1,n2);//printing 0 and 1
	for(i=2;i<number;i++)//loop starts from 2 because already 0 and 1 are printed
	{
		n3 =n1+n2;
		printf(" %d",n3);
		n1=n2;
		n2=n3;
	}
}
