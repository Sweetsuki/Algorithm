#include <stdio.h>
#include <string.h>
void fun(char *s,char t[])
{
	unsigned i,j=0;
	int length;
	length=strlen(s);
	for(i=0;i<length;i++)
	{
		if(s[i]%2==0) t[j++]=s[j];
	}
	t[j]='\0';
}
int main()
{
	char s[100],t[100];
	printf("\nPlease enter string S:");
	scanf("%s",s);
	fun(s,t);
	printf("\nThe result is:%s\n",t);
	system("pause");
	return 0;
}
