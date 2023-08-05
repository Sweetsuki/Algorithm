#include<stdio.h>
int main()
{
	long long a,b,n,i;
	int day=0;
	scanf("%lld %lld %lld",&a,&b,&n);
	long long sum=5*a+2*b;
	long long cnt=n/sum*7;
	long long surplus=n%sum;
	for(i=1;surplus>0;i++)
	{
		switch(i%7)
		{
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
				surplus-=a;
				cnt++;
				break;
			case 6:
			case 0:
				surplus-=b;
				cnt++;
				break;
		}
	}		
	printf("%lld",cnt);
	return 0;
}
//方法二 
//#include <stdio.h>
//int main()
//{
//    long long a,b,n,n1=0,m=0,d=0;
//    int i;
//    scanf("%lld %lld %lld",&a,&b,&n);
//    m=n/(5*a+2*b);//算出最小需要的整周数
//    n=n-m*(5*a+2*b);//算出经过m周以后，还剩的题目数
//    if(n==0)
//    {
//        printf("%lld",m*7);
//    }
//    else
//    {
//         for(i=1,n1=0;i<=7&&n1<n;i++,d++)
//       {
//           if(i<=5)
//           {
//               n1=n1+a;
//           }
//           else n1=n1+b;
//       }
//       printf("%lld",m*7+d);
//    }
//return 0;
//}
