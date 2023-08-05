#include<stdio.h>
int main()
{
	int x=0,y=0;
	int i,j;
	for(i=0;i<4;i++)
	{
		x++;
		for(j=0;j<5;j++)
		{
			if(j%2)
			{
				y++;
				continue;
			}
			x++;
		}
	}
	printf("x=%d\n",x);
	printf("y=%d\n",y);
	return 0;
 } 
