#include <stdio.h>
void reverse(int *a, int n);
void printArray(int *p,int n,char *msg);
int main(void) 
{
	int a[10]={1,2,3,4,5,21,22,23,24,25};
	printArray(a,10,"Original Array:");
	reverse(a,10);
	printArray(a,10,"Reversed Array:"); 
	return 0;
}
/* 输出p数组中的n个元素，第一行为msg，
   第二行是数组中的元素，每个元素用一个空格隔开。
*/
void printArray(int *p,int n,char *msg){
	int i;
	printf("%s\n",msg);
	for(i=0;i<n;i++)
	{
		printf("%d",*(p+i));
		printf(" ");
	}
	printf("\n");
	
}
//交换x，y所指向变量的值
void swap(int *x,int *y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
//将p数组中的n个元素按颠倒位置重新放置
void reverse(int *a,int n){
	int i,j;
	for(i=0,j=n-1; i<n/2; i++, j--)
	{
		swap(&a[i],&a[j]);	
	}
}
