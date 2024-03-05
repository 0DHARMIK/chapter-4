#include<stdio.h>

main()
{
	int a,b,c;
	
	printf("enter the value a=");
	scanf("%d",&a);
	
	printf("enter the value b=");
	scanf("%d",&b);
	
	c = (a*a*a)+(3*a*a*b)+(3*a*b*b)+(b*b*b);
	
	printf("enter the value %d",c);
}