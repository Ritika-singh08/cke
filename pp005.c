//pp005:WAP to input two numbers and print all even number in range given 
#include<stdio.h>
main()
{
	int n1,n2,i;
	printf("Enter a number");
	scanf("%d%d",&n1,&n2);
	for(i=n1;i<=n2;i++)
	{
		if(i%2==0)
	printf("%d is Even number\n",i);
		
	}
	
}
