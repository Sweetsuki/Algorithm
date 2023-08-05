#include <stdio.h>
int main()
{
	int sum,i,n;
	sum=0;//累加器
	i=1;
	printf("请输出一个正整数：\n");
	scanf("%d",&n);
	while(i<=n)
	{
		sum+=i;//sum=sum+i;
		i+=1;//i++;++i;i=i+1;
	}
	printf("1+2...+%d=%d\n",n,sum);
	return 0; 
}
