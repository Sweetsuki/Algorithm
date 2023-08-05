#include <stdio.h>
int main()
{
	int i,x,y;
	char a[6];
	for(i=0;i<6;i++)
	{
		scanf("%c",&x);
		a[i]=x;		
	}
	for(i=0;i<6;i++)
	{	
		y=(a[i]-32)%10;	
		printf("%c->%c->%d\n",a[i],a[i]-32,y);		
	}	
	return 0;
} 
