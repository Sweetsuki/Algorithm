#include<stdio.h>
#include<math.h>
float f(float x,int n);
int main()
{
    int n;
    float x;
    scanf("%f%d",&x,&n);
    printf("%.2f",f(x,n));
    return 0;
}
float f(float x,int n)
{
    float t=0;
    if(n==1)
    t = x;
    else
    {
    t += pow(x,n)*pow(-1,n+1)+f(x,n-1); 
    }
    return t;

}
