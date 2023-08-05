#include <stdio.h>
int main()
{
	int a=0,b=1,c=2,d=3,
	e=4,f=5,g=6,w,n;/*w输入今天的星期数,n所过的天数 */
	scanf("%d%d",&w,&n);
	d=(n+w)%7;
	printf("%d",d);
	return 0;
	
}
