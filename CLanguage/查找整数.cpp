#include <stdio.h>
int main()
{
    int n,x,i,count=0;
    scanf("%d %d",&n,&x);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]); 
        if(a[i]==x)
		{     
            printf("%d\n",i);
            count=1;
        }
    }
    if(count==0) printf("Not Found\n");
    return 0;
}
