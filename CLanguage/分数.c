#include <stdio.h>
int main()
{
	double x;
	scanf("%lf",&x);
	if(x>=90&&x<=100)
	{
		printf("����"); 
	}
	if(x>=75&&x<90)
	{
		printf("����"); 
	}	
	if(x>=60&&x<75)
	{
		printf("����"); 
	}	
	if(x>=0&&x<60)
	{
		printf("������"); 
	}
	return 0; 
 } 
