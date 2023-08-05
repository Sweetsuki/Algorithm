#include <stdio.h>
double average(int a[],int y);
int main()
{	
	int n,count=0,j,k;
	double result;
	scanf("%d",&n);
	int a[n];
	for(k=0;k<n;k++)
	{	
		scanf("%d",&a[k]);
	}
	result=average(a,n);
	printf("%.2f\n",result);
	for(j=0;j<n;j++)
	{	
		if(result<a[j]) count++;
	}
	printf("%d",count);
	return 0;
}
double average(int a[],int y)
{
	double s=0;
	int i;
	for(i=0;i<y;i++)
	{
		s+=a[i];
	}
	return s/y;
}
