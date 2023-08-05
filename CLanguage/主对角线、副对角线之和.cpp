#include <stdio.h>
int main()
{
	int a[10][10],i,j,s=0,N;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<N;i++)
	{
		s+=a[i][i];
	}
	for(i=0;i<N;i++)
	{
		s+=a[N-1-i][i];
	}
	if(N%2==0) printf("%d",s);
	else printf("%d",s-a[N/2][N/2]);
	return 0;
}
