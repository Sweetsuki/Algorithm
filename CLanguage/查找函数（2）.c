#include <stdio.h>
int find(int a[],int x);
int main()
{	
	long int X,N,i;
	scanf("%d %d",&N,&X);
	int a[N];
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
	find(a,X);
	return 0; 
}
int find(int a[],int x)
{	
	int count=0,i,N;
	for(i=0;i<N;i++)
	{
		if(a[i]==x) 
		{
			printf("%d",i);
			count++;
			return i;	
		}
	}
	if(count==0) printf("Not Found");
	return count;
}
