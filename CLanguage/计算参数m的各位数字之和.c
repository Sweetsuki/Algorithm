#include <stdio.h>
int  fan(int m)
{int i,s=0;
 do  //�������m�ĸ�λ����֮��
 {s=s+
m
;
  m=m/10;
 }while(
m>=10
);
 return 
jg
;  //���ؽ��
}

int main(void)
{int n,jg;
 scanf("%d",&n);  //����һ������
 jg=
fan(m)
;  //���ú�������n�ĸ�λ����֮��
 printf("%d\n",jg);
 return 0;
}
