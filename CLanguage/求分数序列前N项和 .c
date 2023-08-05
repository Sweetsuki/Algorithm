#include <stdio.h>
int main()
{
	int n,i;
	double s=0,x,fm,fz;
	scanf("%d",&n);
	for(i=0,fz=2,fm=1;n>i;i++)
	{
		s=s+fz/fm;
		x=fz;
		fz=fz+fm;
		fm=x;
	}
	printf("%.2f",s);
	return 0;
}
