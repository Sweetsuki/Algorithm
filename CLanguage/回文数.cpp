#include <stdio.h>
int reverse(int x)//回文数 
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
		printf("输入1个正整数，输入一个<=0的数推出：");
	    scanf("%d",&a);
	    if(reverse(a)==0)
	    	break;
	    printf("%d的逆序是%d:\n",a,reverse(a));
	}while(a>0); 
	return 0;	
} 
