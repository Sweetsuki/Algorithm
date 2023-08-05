#include <stdio.h>
int main()
{
	int f1=0,f2=1,f3,n,i;
	scanf("%d",&n);	
	if(n==1)
		{
			printf("0");
			return 0;
		}
		if(n==2)
		{
			printf("1");
			return 0;
		}
	for(i=3;n>=i;i++)
	{	
		
		f3=f1+f2;
		f1=f2,f2=f3;
	}
	printf("%d",f3);
	return 0;
}
