#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;
int ysf(int n,int k,int i)//��f(n,k,i)Ϊn���˵Ļ�������Ϊk����i���˳����ı�ţ���f(10,3,10)������Ҫ�Ľ�� 
{
	if(i==1) 
		return (n+k-1)%n;
	else
		return (ysf(n-1,k,i-1)+k)%n;
 } 
 int main()
 {
 	int n,m;
 	cin>>n>>m;//������n������m 
 	for(int i=1;i<=n;i++)
		cout<<"��"
			<<i
			<<"�γ���:" 
			<<ysf(n,m,i)
			<<"\n";
	return 0;
 }
