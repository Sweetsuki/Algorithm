#include <stdio.h>
int main()
{
	long long n,N,i,s=0;
	scanf("%lld",&N);
	for(;N>0;)
	{		
		n=N%10;
		s=s+n;
		N=N/10;
	}
	printf("%lld",s);
	return 0;
}
