#include <stdio.h>
int main()
{
	int x,y,z;
	scanf("%d:%d",&x,&y);
	if(x>=12&&x<24)
	{
		if(x!=12)
		{
			z=x-12;
			printf("%d:%d PM",z,y);
		}
		else
		{
			printf("%d:%d PM",x,y);
		}
	}
	else
	{
		printf("%d:%d AM",x,y);
	}
	return 0;
}
