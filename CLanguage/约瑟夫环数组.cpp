#include <cstdio>
#include <cstdlib>
#include<iostream> 
using namespace std;
int a[110]={0};
int main()
{
	int n,m;
	int count=0,i=0,k=0;//count��ʾĿǰ���ֵ����� 
	cin>>n>>m;//��ʾ�ܹ���n���ˣ���������mʱ���� 
	while(count!=n)
	{
		i++;
		if(i>n) i=1;
		if(a[i]==0)
		{
			k++;
			if(k==m)
			{	
				a[i]=1;
				count++;
				cout<<i-1<<" ";
				k=0;//���k,���´�1��ʼ����	
			}	
		}	
	} 
}
