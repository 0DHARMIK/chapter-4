#include<stdio.h>

main()
{
	int x,y,xy;
	
	printf("enter the value x=");
	scanf("%d",&x);
	
	printf("enter the value y=");
	scanf("%d",&y);
	
	xy= (x*x)+(2*x*y)+(y*y);
	
	printf("enter the value %d",xy);
}