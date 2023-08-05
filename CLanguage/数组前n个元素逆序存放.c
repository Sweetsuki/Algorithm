#include <stdio.h>
int main()
{
	int i,n,k;
	scanf("%d",&n);
	int a[20];
	for(k=0;k<n;k++)
	{
		scanf("%d",&a[k]);
	}
	printf("The array has been inverted:\n");
	for(i=0;i<n;n--)
	{
		printf("%d,",a[n-1]);
	}
	return 0;
}
