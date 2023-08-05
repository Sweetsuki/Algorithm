#include <stdio.h>
long long power(long long x,long long y)
{	
	if(y<=1) return x ;
	long long result=power(x,y/2);
	if(y%2==0) return result*result;
	else return result*result*x;
}
int main()
{	
	long long  a,b,sum; 
	while(scanf("%lld%lld",&a,&b)!=EOF)
	{
		printf("%lld",power(a,b));
	}
}
