#include <stdio.h>
int main()
{
	char c1[10000];
	int i,j;
	gets(c1);
	for(i=0,j=0;c1[i];i++)
	{
		if(c1[i]<'1'||c1[i]>'9') c1[j++]=c1[i];
	}
	c1[j]='\0';
	printf("%s",c1);
	return 0;
}
