//pp002:write a program to input a number and check it to be even or odd using switch
#include<stdio.h>
main()
{
	int n;
	printf("enter the number");
	scanf("%d",&n);
	switch(n%2)
	{
	case 0:
		printf("%d is even number",n);
		break;
	case 1:
		printf("%d is odd number",n);
		break;
     }
     return 0;
	
}
