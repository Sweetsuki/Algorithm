#include <stdio.h>
#include <string.h>
int main()
{
	int T,i,j,length;
	char c1[85];
	length=strlen(c1);
	scanf("%d",&T);
	while((gets(c1))!=NULL)
	{	
		if(c1[0]>'A'&&c1[0]<'Z') c1[0]=c1[0]+32;
		for(i=0;i<T;i++)
		{	
			if(length>4)
			{
				if(c1[i]>'A'&&c1[i]<'Z'&&c1[i-1]==' ')
				for(j=0;j<4;j++)
				{
					c1[j]=c1[i];
				}
				printf("%s.",c1[j]);
			} 
			else
			{
				if(c1[i]>'A'&&c1[i]<'Z'&&c1[i-1]==' ') 
				{
					c1[i]=c1[i]+32;
				}	
			}
			printf("%s",c1[i]);
		}
	}
	return 0;
}
