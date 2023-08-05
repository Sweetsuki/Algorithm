#include<stdio.h>
int main()
{
  int i,n,j;
  char ch[100][100],ch1;
  scanf("%c %d",&ch1,&n);
  getchar();
  for(i=0;i<n;i++)
  {
    gets(ch[i]);
  }
  int flag=0;
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      if(ch[i][j]!=ch[n-i-1][n-j-1]) flag=1;
    }
  }
  if(flag==0) printf("bu yong dao le\n");
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      if(ch[n-i-1][n-j-1]!=' ') printf("%c",ch1);
      else printf(" ");
    }
    printf("\n");
  }
  return 0;
}
