#include <stdio.h>
int main()
{
	int A,N,sum;
	scanf("%d%d",&A,&N);
	while(N<=0)
	{
		scanf("%d",&N);
	}
	sum=N*(2*A+N-1)/2;
	printf("%d",sum);
}
