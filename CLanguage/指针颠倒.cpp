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
/* ���p�����е�n��Ԫ�أ���һ��Ϊmsg��
   �ڶ����������е�Ԫ�أ�ÿ��Ԫ����һ���ո������
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
//����x��y��ָ�������ֵ
void swap(int *x,int *y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
//��p�����е�n��Ԫ�ذ��ߵ�λ�����·���
void reverse(int *a,int n){
	int i,j;
	for(i=0,j=n-1; i<n/2; i++, j--)
	{
		swap(&a[i],&a[j]);	
	}
}
