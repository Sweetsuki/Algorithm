#include <stdio.h>
int main()
{
	int n,i;
	double s=1;
	scanf("%d",&n);
	for(i=1;i<=n&&n>=0;i++)
	{
		s=s*i; 
	}
	printf("%.0f",s);
	return 0;
}
