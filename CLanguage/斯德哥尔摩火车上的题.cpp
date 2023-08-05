#include <stdio.h>
#include <string.h>
int main()
{
	int s,i,j;
	char a[20000],b[20000],c[20000],d[20000],*p1,*p2,*p3,*p4;
	p1=a,p2=b,p3=c,p4=d;
	gets(a);
	gets(b);
	for (i=0,j=0;i<strlen(a)-1;i++) 
	{	
 		if (a[i]%2==a[i+1]%2) 
		{
    		if(a[i+1]>=a[i]) c[j++]=*(p1+i+1);
    		else if(a[i+1]<a[i]) c[j++]=*(p1+i);
  		}
	}
	for (i=0,j=0;i<strlen(b)-1;i++) 
	{	
 		if (b[i]%2==b[i+1]%2) 
		{
    		if(b[i+1]>=b[i]) d[j++]=*(p2+i+1);
    		else if(b[i+1]<b[i]) d[j++]=*(p2+i);
  		}
	}
	if(strcmp(c,d)==0) printf("%s\n",c);
	else printf("%s\n%s\n",c,d);
	return 0;
}

