#include <stdio.h> 
int main()
{
	int i,s,n;
	i=0,s=0;
	scanf("%d",&n);
	while(n>=i&&n<=1000)
	{
		s=s+i;
		i=i+3;
	}	
	printf("%d\n",s);
	return 0; 
}
