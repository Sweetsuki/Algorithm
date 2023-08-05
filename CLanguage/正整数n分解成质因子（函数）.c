#include <stdio.h>
void fun(int n)
{
	int i;
	for(i=2;i<=n;i++)
	{
		while(n!=i)
		if(n%i==0)
		{	
			printf("%d=",n);
			printf("%d*",i);
			n=n/10;
		}
		else continue;
	}
	
}
void main()
{
	int a;
	scanf("%d",&a);
	fun(a);
}
