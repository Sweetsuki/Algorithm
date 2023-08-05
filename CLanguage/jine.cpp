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
	printf("100元:%2d张\n",a);
	printf(" 50元:%2d张\n",b);
	printf(" 20元:%2d张\n",c);
	printf(" 10元:%2d张\n",d);
	printf("  5元:%2d张\n",e);
	printf("  2元:%2d张\n",f);
	printf("  1元:%2d张\n",g);
	return 0;
}
