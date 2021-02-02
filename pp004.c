//pp004:WAP to check to be even or odd without using any airthmetic, relational ,logical , bitwise operator
#include<stdio.h>
struct number{
    unsigned n:1;	
};
main()
{
	int num;
	struct number x ;
	printf("Enter the number:");
	scanf("%d",&num);
	x.n=num;
	if(x.n)
	printf("%d is odd ",num);
	else 
	printf("%d is even",num);
}

