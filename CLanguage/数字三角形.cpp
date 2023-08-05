#include <stdio.h>
int main()
{
	int l,num,i;
	scanf("%d",&l);
	for(i=0;i<l;i++)
	{
		while(scanf("%d",&num))
		{
			if(num>0&&num<100)
				break;
		}
		
	} 
	return 0;	
} 
