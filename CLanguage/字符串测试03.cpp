#include<stdio.h>
#include<string.h> 
int main()
{
	char a[100];
	int i,b;
	char *pa,*pb;
	pa=a;
    gets(a);
    while(a[i]!='\0')
    {
    	i++;
	}
	for(b=0;b<i/2;b++)
	{
		*pa; 
		pa++;
	}
	pb=pa;
	for(i=0;*pb!='\0';i++)
	{
		*pb;
		pb++;
	}
	if(strcmp(pa,pb)>0) printf("%s",pa);
	else if(strcmp(pa,pb)<0) printf("%s",pb);
	return 0;
}

