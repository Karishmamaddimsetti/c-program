#include<stdio.h>
void main()
{
	int a,b,c;
	a = 33;
	b = 55;
	c = a+b;
	
	printf(" using int is%d\n",c);
	{
		unsigned int a,b,c;
		a = 3377;
	    b = 5555;
        c = a+b;
	    printf(" using unsigned int is%u\n",c);
	}
	{
		short int a,b,c;
	    a = 3377;
	    b = 5555;
	    c = a+b;
	
	    printf(" using short int is %hd\n",c);
	}
	{
	    unsigned short int a,b,c;
	    a =445;
	    b =667;
	    c =a+b;
	    printf(" unsigned short int is %hu\n",c);
	}
	{
	    long int a,b,c;
	    a = 3377777;
	    b = 555577;
	    c = a+b;
	    printf(" long int is%ld\n",c);
	}
	{
	    unsigned long int a,b,c;
	    a =56688999;
	    b =56678842;
	    c =a+b;
	    printf(" unsigned long int is %lu\n",c);
	} 
	{
	    long long int a,b,c;
	    a =76645556;
	    b =23455667;
	    c =a+b;
    	printf(" using long long int is %lld\n",c);
    }
    { 
	    unsigned long long int a,b,c;
	    a =3344477777;
	    b =6666777779;
	    c =a+b;
	    printf(" using unsigned long long  int is %llu\n",c);
	}
}

