#include <stdio.h>
int main()
{
	int a[4][3]={1,2,3,3,5,6,7,8,9,10,11,12};
	int x,y,z;
	for(x=0;x<4;x++)
	{
		for(y=0;y<3;y++)
		{
			z=x+y;
			if(3==x+y) printf("%d\n",a[x][y]);	
		}	
	}	
	return 0;
}
