#include<stdio.h>
int main()
{
    int i,n,count=0;
    float average=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        average += a[i];
    }
	average/=n;
	for(i=0;i<n;i++)
	{
    	if(a[i]>average)
	{
        count ++;
	}
	}
	printf("%.2f\n",average);
	printf("%d",count);
	return 0;
} 
