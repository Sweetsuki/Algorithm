#include <stdio.h>
int main()
{
	char c1[100];
	int i;
	gets(c1[]);
	for(i=0;c1[i]!='\0'&&c1[i]!='\n';i++)
	{
		if(c1[i]>='A'&&c1[i]<='Z') putchar(c1[i]+32);
		else if(c1[i]>='a'&&c1[i]<='z') putchar(c1[i]-32);
		else if(c1[i]>='0'&&c1[i]<='9') putchar(c1[i]+1);
		else if(c1[i]==' ');
		else putchar(c1[i]);
	}
	putchar('\n');
	return 0;		
} 
