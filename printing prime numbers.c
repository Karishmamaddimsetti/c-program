//printing prime numbers
#include<stdio.h>
int main()
{
	int i,j,start,end;
	int isprime;
	//input upper and lower limit to print prime
	printf("enter lower limit :");
	scanf("%d",&start);
	printf("enter upper limit :");
	scanf("%d",&end);
	printf("all prime numbers between %d to %d are:\n",start,end);
	//make sure that lower limit does not go below 2
	//since 2 is the first prime number
	if(start<2)
	start =2;
	//find all prime numbers between 1 to n
	for(i=start;i<=end;i++)
	{
		//assume that the current number is prime
		isprime = 1;
		//check if the current number i is prime or not
		for(j=2;j<=i/2;j++)
		{
			//if i is divisible by any number other than 1 and self
			//then it is not prime number
			if(i%j==0)
			{
				isprime =0;
				break;
			}
		}
		//if the number is prime then print
		if(isprime==1)
		{
		  printf(" %d",i);
		  
		}
	}
	return 0;
}

