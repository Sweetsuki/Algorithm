#include <stdio.h>
#include <math.h>
double fun(float x)
{
	double y;
	if(x>15) y=2.5*x-10.5;
	else if(x>=0) y=4*x/3;
	else y=fabs(x);
	return y;
}
int main()
{
	float x;
	scanf("%lf",&x);
	printf("%f",fun(x));
	return 0;
}
