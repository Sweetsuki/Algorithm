#include <stdio.h>
int main()
{
	char c1[80];
	int offset,i;
	gets(c1);
	scanf("%d",&offset);
 	if(offset>0)
	{
		offset=offset%26;
 		for(i=0;c1[i]!='\0';i++)
		{
			if(c1[i]>='A'&&c1[i]<='Z') 
			{
				c1[i] = ((c1[i]-'A') + offset)%26+'A';
				
			} 
			if(c1[i]>='a'&&c1[i]<='z')
			{
				c1[i] = ((c1[i]-'a') + offset)%26+'a';	
				
			} 
			
		}
		printf("%s",c1);	
	}
	else printf("Invalid.");
	return 0;
}
