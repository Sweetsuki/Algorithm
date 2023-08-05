#include <stdio.h>
int main()
{
	char str[30][50];//输入已省略 
  	int i,j,l;
  	for(i=0;i<30;i++){
      gets(str[i]);
  	}	
  	int m,n;//斜向坐标
  	int count=0;
  	for(i=0;i<30;i++)
    {
		for(j=0;j<50;j++)//以上两层遍历判断每一个元素
	    {
	      for(l=j;l<50;l++)//横向
	        if(str[i][j] < str[i][l])
	          count++;
	      
	      for(l=i;l<30;l++)//纵向
	        if(str[i][j] < str[l][j])
	          count++;
	
	      for(m=i,n=j;m<30 && n<50;m+=1,n+=1)//右下,斜向
	        if(str[i][j] < str[m][n])
	          count++;
	
	      for(m=i,n=j;m>=0 && n<50;m-=1,n+=1)//右上,斜向
	        if(str[i][j] !=str[m][n])
	          count++;
	    }
	}
  	printf("%d",count);
	return 0; 
} 
