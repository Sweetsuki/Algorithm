#include <stdio.h>
int main()
{
	int a,b,s=0;
	scanf("%d%d",&a,&b);	
	while((a!=0)||(b!=0))
	{	
		s=a+b;
		printf("%d\n",s);
		scanf("%d%d",&a,&b);
	}
	return 0;
}
