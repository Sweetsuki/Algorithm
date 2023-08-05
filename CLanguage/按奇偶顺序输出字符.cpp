#include <stdio.h>
int main()
{
	char c1[80];
	int i;
	gets(c1);
	for(i=0;c1[i];i++)
	{	
		if(i%2!=0) printf("%c",c1[i]);
	}
	printf("\n");
	for(i=0;c1[i];i++)
	{	
		if(i%2==0) printf("%c",c1[i]);
	}
	return 0;
}
