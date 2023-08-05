#include <stdio.h>
int main()
{
	int x,y,z,N=0,i;
	scanf("%d %d %d",&x,&y,&z);
	for(i=1;N>=0;i++)
	{	
		N++;
		if(N%3==x&&N%5==y&&N%7==z)
		{
			printf("%d",N);
			break;
		}
	}
	return 0;
}
