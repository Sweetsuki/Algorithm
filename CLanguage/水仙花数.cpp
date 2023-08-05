#include <stdio.h>
#include <math.h>
int main()
{
	int x,y,z;
	int i;
	for(i=999;i>100;)
	{
		x=i/100;
		y=i/10%10;
		z=i%10;
		if(i==pow(x,3)+pow(y,3)+pow(z,3)){
			printf("Ë®ÏÉ»¨Êý£º%d\n",i);
		}
		i--;
	} 
	return 0;
} 
