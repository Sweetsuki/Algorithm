#include <stdio.h>
int main()
{
	double x,y;
	scanf("%lf",&x);
	if(x<100)
	{
		printf("%.2f",x);	
	}
	if(x>=100&&x<200)
	{
		y=0.95*x;
		printf("%.2f",y);	
	}
	if(x>=200&&x<500)
	{
		y=0.9*x;
		printf("%.2f",y);
	}
	if(x>=500&&x<1000)
	{
		y=0.85*x;
		printf("%.2f",y);
	}
	if(x>=1000)
	{
		y=0.8*x;
		printf("%.2f",y);
	}
	return 0;
}
