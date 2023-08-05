#include <stdio.h>
#include <string.h>
int main()
{
	char c1[1000];
	int i=0,length;
	while((gets(c1))!=NULL)
	{	
		if(c1[0]>='a'&&c1[0]<='z') c1[0]=c1[0]-32;
		for(i=1;c1[i];i++)
		{
			if(c1[i]==' '&&c1[i+1]>='a'&&c1[i+1]<='z') c1[i+1]=c1[i+1]-32;	
		}
		puts(c1);
	}
	return 0;
}
