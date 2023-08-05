#include <stdio.h>
int fun(float x[],int n)
{
	int j,c=0;
	float xa=0;
	for(j=0;j<n;j++)
	xa+=x[j];
	xa=xa/n;
	printf("ave=%f\n",xa);
	for(j=0;j<n;j++)
	if(x[j]<=xa) c++;
	return c;
}
int main(void)
{
	float x[]={23.5,45.67,12.1,6.4,58.9,98.4};
	printf("%d\n",fun(x,6));
	return 0;
}
