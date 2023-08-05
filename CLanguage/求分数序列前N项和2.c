#include <stdio.h>
int main()
{
	int n,i;
	double s,a,b,c=3;
	b=2,s=2;
	scanf("%d",&n);
	if(n==1){
		printf("%.2f",s);
	}else{
	for( i=2;i<=n;i++)
	{
		s=s+c/b;
		a=c;
		c=c+b;
		b=a;
	}
	printf("%.2f",s);
	}
	return 0;
}
