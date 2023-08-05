#include <stdio.h>
int main()
{
	int a,b,c,max;
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			max=a;
			printf("%d\n",max);
		}
		else
		{
			max=c;
			printf("%d\n",max);
		}	
	}
	else
	{
		if(b>c)
		{
			max=b;
			printf("%d\n",max);
		}
		else
		{
			max=c;
			printf("%d\n",max);
		}	
	}
	return 0;
}
