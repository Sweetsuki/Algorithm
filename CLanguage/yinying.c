#include <stdio.h>
int main()
{
	int x,y,S,Q1,Q2,Q3,R;/*S为三角形的面积，Q1为三角形的面积,Q2为三角形的面积,Q3为长方形的面积，R为阴影面积*/ 
	x>y>0;
	x<=100,y<=100;
	S=10000;
	scanf("%d%d",&x,&y);
	Q1=x*y/2;
	Q3=(100-x)*y;
	Q2=(100-x)*(100-y)/2;
	R=S/2-Q1-Q2-Q3;
	printf("%d",R); 
	return 0;
}
