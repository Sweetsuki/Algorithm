#include <stdio.h>
void bubble_sort(int a[],int n);
int main()
{
	int a[30],n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);		
	}
	bubble_sort(a,n);
	for(j=0;j<n-1;j++)
	{
		printf("%d ",a[j]);	
	}
	printf("%d",a[j++]);
	return 0;	
}
void bubble_sort(int a[],int n)
{
	int t,i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]<a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
}
