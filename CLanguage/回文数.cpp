#include <stdio.h>
int reverse(int x)//������ 
{
	int result=0;
	do
	{
		result=result*10+x%10;
		x/=10;
	}while(x>0);
	if(result==0)
		return 0;
	return result;
}
int main()
{
	int a;
	do
	{
		printf("����1��������������һ��<=0�����Ƴ���");
	    scanf("%d",&a);
	    if(reverse(a)==0)
	    	break;
	    printf("%d��������%d:\n",a,reverse(a));
	}while(a>0); 
	return 0;	
} 
