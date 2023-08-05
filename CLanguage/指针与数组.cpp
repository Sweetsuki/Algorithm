#include <stdio.h>
int main()
{
	int a[100],i=0,j,t;
	int *p1,*p2;
	p1=a;p2=a+i-1;
	while(scanf("%d",a+i)!=EOF) i++;
	for(p1=a,p2=a+i-1;p1<p2;p1++,p2--)
	{
		t=*p1;
		*p1=*p2;
		*p2=t;
	}
	for(j=0;j<i;j++)
	{
		if(j==0) printf("%d",*(a+j));
		else printf(" %d",*(a+j));
	}
	return 0;
}

