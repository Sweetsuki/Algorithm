#include <stdio.h>
int main()
{
	int N,hang,line;
	char ch;
	scanf("%d %c",&N,&ch);
	for(line=1;N>=3&&N<=21&&line<=N;line++)
	{	
		printf("%c",ch);
	}
	printf("\n");
	for(hang=2;hang<=0.5*line;hang++)
	{
		for(line=1;N>=3&&N<=21&&line<=N;line++)
		{	
		printf("%c",ch);
		}
		printf("\n");
	}
	return 0;
}
