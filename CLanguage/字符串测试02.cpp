#include <stdio.h>
#include <string.h>
int main()
{
	char a[1000],*p,length,b[1000],i;
	p=a;
	gets(a);
	length=strlen(a);
	if(length%2!=0)
	{
		for(i=0;i<length/2;i++)
		{
			printf("%d",*(p+i)-'0');
		}
		printf(",");
		p=p+length/2;
		for(i=0;i<=length/2;i++)
		{
			printf("%d",*(p+i)-'0');
		}
	}else{
		for(i=0;i<length/2;i++)
		{
			printf("%d",*(p+i)-'0');
		}
		printf(",");
		p=p+length/2;
		for(i=0;i<length/2;i++)
		{
			printf("%d",*(p+i)-'0');
		}
	}
	return 0;
}
