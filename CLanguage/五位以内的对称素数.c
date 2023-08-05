#include <stdio.h>
#include <math.h>
int isPrime(int x)
{
	int a;
	if(x<2) return 0;
	else for(a=2;a<=sqrt(x);a++)
	{
		if(x%a==0) 
		return 0;		
	}
	return 1;
}
int duichen(int x)
{
	int s=0;
	int i;
	for(i=x;i>0;i/=10)
	{
		s=s*10+i%10;
	}
	if(s==x) return 1;
	else return 0;
	
}
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		if(n<10000&&isPrime(n)&&duichen(n)) printf("Yes\n");
		else printf("No\n");
	}
} 

