#include <stdio.h>
int main()
{
	int n,i;
	double score,max=0,min=100,s=0;
	scanf("%d",&n);
	for(i=1;i<=n&&n>=3&&n<=20&&score>=0&&score<=100;i++)
	{	
		scanf("%lf",&score);
		s=s+score;
		if(score>max)
		{
			max=score;
		}
		if(score<min)
		{
			min=score;
		}
	}
	score=(s-max-min)/(n-2);
	printf("%.0f %.1f %.1f" ,score,min,max);
	return 0;
}
