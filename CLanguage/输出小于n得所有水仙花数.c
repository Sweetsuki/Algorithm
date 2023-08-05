#include <stdio.h>
int main()
{
	int n,i,g,s,b,c,count=0;
	scanf("%d",&n);
	for(i=101;i<=n&&n>=101&&n<=10000;i++)
	{	
		g=i%10;
		b=i/100;
		c=i/10,s=c%10;
		if(i==g*g*g+s*s*s+b*b*b)
		{
			printf("%d",i);
			printf("\n");
			count++;
		}	
	}
	if(count==0) printf("NONE");
	return 0;
}
