#include <stdio.h>
#include <math.h>
int main()
{
	double x,y;
	scanf("%lf",&x);
	if(x>6)
	{
		y=((x*x+4*x-6)*5)/27;
		printf("%.3f",y);	
	}
	if(x>0&&x<=6)
	{
		y=log(16)/log(3)+x;
		printf("%.3f",y);
	}
	if(x<=0)
	{
		y=(23*fabs(x*x*x+4))/7;
		printf("%.3f",y);
	}
	return 0;
}
