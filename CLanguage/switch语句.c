#include <stdio.h>
int main()
{
	int d1,d2,y;
	char op;
	printf("��������ʽ��5*16����"); 
	scanf("%d%c%d",&d1,&op,&d2);
	switch(op)
	{
		case '+': y=d1+d2;printf("%d+%d=%d\n",d1,d2,y);break;
		case '-': y=d1-d2;printf("%d-%d=%d\n",d1,d2,y);break;
		case '*': y=d1*d2;printf("%d*%d=%d\n",d1,d2,y);break;
		case '/': 
		if(d2==0)
		{
			printf("��������Ϊ0!\n");
		}
		else
		{
			y=d1/d2;printf("%d/%d=%d\n",d1,d2,y);break;
		} 
		default:printf("���������\n");
	}
	return 0;
}
