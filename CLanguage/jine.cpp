#include <stdio.h>
int main()
{
	int a,b,c,d,e,f,g,s;
	scanf("%d",&s);
	a=s/100;
	b=s%100/50;
	c=s%100%50/20;
	d=s%100%50%20/10;
	e=s%100%50%20%10%2;
	f=s%100%50%20%10/2;
	g=s%100%50%20%10%2;
	printf("100Ԫ:%2d��\n",a);
	printf(" 50Ԫ:%2d��\n",b);
	printf(" 20Ԫ:%2d��\n",c);
	printf(" 10Ԫ:%2d��\n",d);
	printf("  5Ԫ:%2d��\n",e);
	printf("  2Ԫ:%2d��\n",f);
	printf("  1Ԫ:%2d��\n",g);
	return 0;
}
