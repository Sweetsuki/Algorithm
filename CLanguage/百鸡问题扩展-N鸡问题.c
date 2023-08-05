#include <stdio.h>
int main()
{
	int N,c=0,s=0,g,m,x;
	scanf("%d",&N);
	for(g=0;g<=N/5&&g>=0&&N<500;g++)
	{
		for(m=0;m<=N/3&&m>=0;m++)
		{
				
			for(x=0;x<=3*N&&x>=0;x+=3)
			{
							if((N==5*g+3*m+x/3)&&(N==g+m+x)&&(x%3==0))
					{
						c++;
						s+=g;
					}
			}		
		}			
	}
	if(c==0) s=-1;
	printf("%d %d",c,s);
	return 0;
}
