#include<stdio.h>
int main()
{
	int m,n,t=0,i;
	scanf("%d %d",&m,&n);
	int a[m];
	for(i=0;i<m;i++)
	{
	scanf("%d",&a[i]);
	}
    for(i=0;i<m;i++)
    {
    	while(n>m) n=n-m;
    	t=(m-n+i)%m;
    	printf("%d ",a[t]);
	}
	return 0;
}

