#include <stdio.h>
int main()
{
	long num;
	long k=1;
	scanf("%ld",&num);
	do
	{
	k*=num%10;
	num/=10;
	}while(num);
	printf("%d\n",k);
	return 0;
}
