#include <stdio.h>
int  fan(int m)
{int i,s=0;
 do  //计算参数m的各位数字之和
 {s=s+
m
;
  m=m/10;
 }while(
m>=10
);
 return 
jg
;  //返回结果
}

int main(void)
{int n,jg;
 scanf("%d",&n);  //输入一个整数
 jg=
fan(m)
;  //调用函数计算n的各位数字之和
 printf("%d\n",jg);
 return 0;
}
