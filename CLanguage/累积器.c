#include <stdio.h>
int main()
{
	int sum,i,n;
	sum=0;//�ۼ���
	i=1;
	printf("�����һ����������\n");
	scanf("%d",&n);
	while(i<=n)
	{
		sum+=i;//sum=sum+i;
		i+=1;//i++;++i;i=i+1;
	}
	printf("1+2...+%d=%d\n",n,sum);
	return 0; 
}
