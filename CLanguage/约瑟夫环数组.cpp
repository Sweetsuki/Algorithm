#include <cstdio>
#include <cstdlib>
#include<iostream> 
using namespace std;
int a[110]={0};
int main()
{
	int n,m;
	int count=0,i=0,k=0;//count表示目前出局的人数 
	cin>>n>>m;//表示总共有n个人，数到数字m时出局 
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
				k=0;//清空k,重新从1开始报数	
			}	
		}	
	} 
}
