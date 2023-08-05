#include<stdio.h>
#include<math.h> 
int main()
{
	int score;
	int count=0;
	int sum=0;
	int a[99999];
	scanf("%d",&score);
	for(int i=0;i<score;i++)
	{
		scanf("%d",&a[i]); 
		if(a[i]>=60) count++;
		if(a[i]>=85) sum++;
	}
	printf("%.0f%%\n",(count*100)/(score*1.0));
	printf("%.0f%%\n",(sum*100)/(score*1.0));
  	return 0;
}
