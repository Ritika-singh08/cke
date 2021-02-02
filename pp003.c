//pp003:write a program to input a number and check it to be even or odd using bitwise opertor
#include<stdio.h>
main()
{
	int n;
	printf("enter the number");
	scanf("%d",&n);
	if(n&1==1)
	printf("%d is odd number",n);
	else
	printf("%d is even number",n);
	printf("\n");
	return 0;
	
}
