#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;
int ysf(int n,int k,int i)//设f(n,k,i)为n个人的环，报数为k，第i个人出环的编号，则f(10,3,10)是我们要的结果 
{
	if(i==1) 
		return (n+k-1)%n;
	else
		return (ysf(n-1,k,i-1)+k)%n;
 } 
 int main()
 {
 	int n,m;
 	cin>>n>>m;//先输入n后输入m 
 	for(int i=1;i<=n;i++)
		cout<<"第"
			<<i
			<<"次出环:" 
			<<ysf(n,m,i)
			<<"\n";
	return 0;
 }
