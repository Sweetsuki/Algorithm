#include <stdio.h>
#include <math.h>
int main()
{
	int a,n,x,i,s=0;
	scanf("%d\n%d",&a,&n);
	for(i=1;n>=i;i++)
	{	
		x=a*(1-pow(10,i))/-9;
		s=s+x;
	}
	printf("%d",s);
	return 0;
}
