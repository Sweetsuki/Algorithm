#include<stdio.h>
int main()
{
	int i,a[10000],n,x,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		x=i+1;
		for(j=2;j<=x;j++)
		{
			if(x%j==0)a[i]=a[i]+1;
		}
	}
	for(i=0;i<n;i++)
	{
		if(i==0)printf("1");
		if(a[i]%2==0&&i!=0)printf("% d",i+1);
	}
	return 0;
}

