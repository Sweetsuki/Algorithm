#include <stdio.h>
int main()
{
	int n,x,result,i=1;
	scanf("%d",&n);
	for(;n!=1&&result!=1&&n>i;i++)
	{
		if(x%2==0&&result%2==0)
		{	
			x=n/2;
			printf("%d/2=%d",n,x);
			result=x,x=n;
		}else{
			x=n*3+1;
			printf("%d*3+1=%d",n,x); 
			result=x,x=n;
		}
	}
	return 0;
}
