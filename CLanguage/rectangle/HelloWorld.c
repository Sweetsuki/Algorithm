/*#include <stdio.h>
main()
{
  int n,i;
  printf("����һ����:\n");
  scanf("%d",&n);
  printf("%d=",n);//ԭ����� 
  for(i=2;i<=n;i++)
  {while(n!=i)
    {
      if(n%i==0)
      {
        printf("%d*",i);//ԭ����� 
        n=n/i;//���ݶ̳������������µ�n,���������������ظ�ѭ���жϲ����� 
      }
      else//�ȼ���if(n%i!=0),�ĸ�������ĸ��� 
        break;
    }
  }
  printf("%d",n);//ԭ����� 
}

*/
#include <stdio.h>
int main()
{
	int n; float x,y;
	y = n = x = 3.89;
	printf("%d",y);
	return 0;
}