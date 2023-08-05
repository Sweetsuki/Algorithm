#include <stdio.h>
int reverse(int num,int m)
{
	int result=0;
	while(num)
	{
		result=result*10+num%10;
		num/=10;
	}
	if(result==m) return 1;
	else return 0;
 } 
int main()
{
	int n, i, ans[20000], t = 0;
    scanf("%d", &n);
    for (i = n+1; i < 99000000; i++)
    {
        if ((i%10000/100 > 12) || (i%10000/100 == 0) || i%10000%100 > 31) continue; //判断月和日是否合法，不合法直接跳出当前循环
        if ( reverse(i/10000, i%10000) ) ans[++t] = i; 
        if (t == 1000) break; //t尽量设置大一些，保证在这个范围里会出现ababbaba型的回文日期
    }
    printf("%d\n", ans[1]); //输出日期之后下一个回文日期
    for (i = 1; i <= t; i++)
    {
        if(ans[i]/10000%100 == ans[i]/10000/100) //判断开头是否为ABAB型
        {
            printf("%d\n", ans[i]);
            break; //找到一个即可退出循环
        }
    }
	return 0;
}

