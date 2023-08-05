#include <stdio.h>
int main()
{
	int a[1000],T,*p1,*p2,i,j,n,t,k;
	p1=a;p2=a+k-1;
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{	
		scanf("%d",&n);
		for(j=0;j<n;j++)
		{
			scanf("%d",a+j);
		}
		for(j=0,k=n-1;j<n/2;j++,k--)
		{
			t=a[k];
			a[k]=a[j];
			a[j]=t;
		}
		for(k=0;k<n;k++)
		{
			if(k==0) printf("%d",*(a+k));
			else printf("%2d",*(a+k));	
		}
		printf("\n");
	}
	return 0;
}
