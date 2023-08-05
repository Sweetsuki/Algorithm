#include <stdio.h>
unsigned int  MyStrlen(const char *p);
int main()
{	
	int result;
	char a[1000],*p;
	gets(a);
	p=a;
	getchar();
	result=MyStrlen(a);
	printf("%d",result);
	return 0;
}
unsigned int  MyStrlen(const char *p)
{
	int length=0,i;
	for(i=0;*(p+length)!='\0';i++)
	{
		length++;
	}
	return length;
}
