#include <stdio.h>
int main()
{	
	int m,n,j,t;
	scanf("%d%d",&m,&n);
	int a[m],i,b[t];
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
		printf("%d ",a[i]);
	}
	for(j=0;j<n;n--)
	{
		b[t]=a[i];
		a[i]=a[i-1];
		a[0]=b[t];	
	}
	return 0;
}
