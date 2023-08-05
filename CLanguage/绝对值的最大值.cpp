#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,max;
    fabs(a)<=1000;fabs(b)<=1000;fabs(c)<=1000;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        max=a;
        if(max>c)
        {	
        	max=a;
            if(b>c)
            {
                printf("max=%d,min=%d",max,c);
            }
            else
            {	
                printf("max=%d,min=%d",max,b);
            }
        }
        else
        {
            max=c;
            printf("max=%d,min=%d",max,b);
        }
    }
    else
    {
        max=b;
        if(b>c)
        {
        	max=b;
            if(a>c)
            {
                printf("max=%d,min=%d",max,c);
            }
            else
            {
                printf("max=%d,min=%d",max,a);
            }           
        }
        else
        {	
        	max=c;
            printf("max=%d,min=%d",max,a);
        }    
    }
    return 0;
}
