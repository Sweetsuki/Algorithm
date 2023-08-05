#include <stdio.h>
int main()
{
	char c1,c2,c3,c4;
	int x;
	scanf("%d",&x);
	c1='A';
	c2='a';
	c3=x+c1-1;
	c4=x+c2-1;
	printf("%c%c",c3,c4);
	return 0;
}
