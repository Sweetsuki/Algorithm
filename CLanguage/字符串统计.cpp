#include <stdio.h>
int main()
{
	char a[1000],count=0,*p,i=0;
	p=a;
	gets(a);
	for(i=0;i<80;i++)
	{	
		if(*(p+i)>='0'&&*(p+i)<='9')
		{
			if((*(p+i)-'0')%2!=0) count++;
		}	
	}	
	printf("%d",count);
	return 0;	
} 
