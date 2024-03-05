#include<stdio.h>

main()
{
	int a,b;
	
	printf("enter the value = a");
	scanf("%d",&a);
	
	printf("enter the value = b");
	scanf("%d",&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	printf(" swap the value = %d %d\n",a,b);
}