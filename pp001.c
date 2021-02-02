//pp001: write a program to input no and check to be even odd using if statement
#include<stdio.h>
main()
{
	int n;
	printf("enter the number");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("%d is even number",n);
	}
	else
	 {
		printf("%d is odd number",n);
	}
}
