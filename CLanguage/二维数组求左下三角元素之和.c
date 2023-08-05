#include <stdio.h>
int main()
{
	int n,a[10][10],i,m,j,k,sum=0;
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{	
		for(m=0;m<n;m++)
		{
			scanf("%d",&a[i][m]);
		}
	}
	for(i=0;i<n;i++)
	{
		sum+=a[i][i];
		for(j=0;j<i;j++)
		{	
			sum+=a[i][j];
		}
	}
	printf("%d",sum);
	return 0;
}
