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
        if ((i%10000/100 > 12) || (i%10000/100 == 0) || i%10000%100 > 31) continue; //�ж��º����Ƿ�Ϸ������Ϸ�ֱ��������ǰѭ��
        if ( reverse(i/10000, i%10000) ) ans[++t] = i; 
        if (t == 1000) break; //t�������ô�һЩ����֤�������Χ������ababbaba�͵Ļ�������
    }
    printf("%d\n", ans[1]); //�������֮����һ����������
    for (i = 1; i <= t; i++)
    {
        if(ans[i]/10000%100 == ans[i]/10000/100) //�жϿ�ͷ�Ƿ�ΪABAB��
        {
            printf("%d\n", ans[i]);
            break; //�ҵ�һ�������˳�ѭ��
        }
    }
	return 0;
}

