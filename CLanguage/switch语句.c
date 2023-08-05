#include <stdio.h>
int main()
{
	int d1,d2,y;
	char op;
	printf("请输入表达式（5*16）："); 
	scanf("%d%c%d",&d1,&op,&d2);
	switch(op)
	{
		case '+': y=d1+d2;printf("%d+%d=%d\n",d1,d2,y);break;
		case '-': y=d1-d2;printf("%d-%d=%d\n",d1,d2,y);break;
		case '*': y=d1*d2;printf("%d*%d=%d\n",d1,d2,y);break;
		case '/': 
		if(d2==0)
		{
			printf("除数不能为0!\n");
		}
		else
		{
			y=d1/d2;printf("%d/%d=%d\n",d1,d2,y);break;
		} 
		default:printf("运算符错误！\n");
	}
	return 0;
}
