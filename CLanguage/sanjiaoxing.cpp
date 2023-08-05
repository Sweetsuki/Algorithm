#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c,s,area;/*a,b,c为三角形的边长，S为三角形的面积*/
	scanf("%lf\n",&a);
	scanf("%lf\n",&b);
	scanf("%lf",&c);
	s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c)); 
	printf("%.1f",area);
	return 0;
 } 
