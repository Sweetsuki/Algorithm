/*#include <stdio.h>
main()
{
  int n,i;
  printf("输入一个数:\n");
  scanf("%d",&n);
  printf("%d=",n);//原样输出 
  for(i=2;i<=n;i++)
  {while(n!=i)
    {
      if(n%i==0)
      {
        printf("%d*",i);//原样输出 
        n=n/i;//根据短除法，用商作新的n,即被除数。接着重复循环判断操作。 
      }
      else//等价于if(n%i!=0),哪个简洁用哪个。 
        break;
    }
  }
  printf("%d",n);//原样输出 
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