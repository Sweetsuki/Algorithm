#include <stdio.h>
int main()
{
	double x;
	scanf("%lf",&x);
	if(x>=90&&x<=100)
	{
		printf("优秀"); 
	}
	if(x>=75&&x<90)
	{
		printf("良好"); 
	}	
	if(x>=60&&x<75)
	{
		printf("及格"); 
	}	
	if(x>=0&&x<60)
	{
		printf("不及格"); 
	}
	return 0; 
 } 
