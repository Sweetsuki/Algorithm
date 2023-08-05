#include <stdio.h>
int main()
{
	int n,i;
	char ch='A';
	scanf("%d",&n);
	for(;ch>='A'&&ch<='Z'&&n>=1&&n<7;n--)
	{
		for(i=0;i<n;i++)
		{
			printf("%-2c",ch);
			ch++;
		}
		printf("\n");	
	}
	return 0; 
}
