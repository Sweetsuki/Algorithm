#include <stdio.h>
int main()
{
	int A,B,y;
	char ch;
	scanf("%d%c%d",&A,&ch,&B);
	switch(ch)
	{
	case '+':y=A+B,printf("%d+%d=%d",A,B,y);break;
	case '-':y=A-B,printf("%d-%d=%d",A,B,y);break;
	case '*':y=A*B,printf("%d*%d=%d",A,B,y);break;
	case '/':y=A/B,printf("%d/%d=%d",A,B,y);break;
	case '%':y=A%B,printf("%d%%%d=%d",A,B,y);break;
	default :printf("ERROR");
	}
	return 0;
}
