#include <stdio.h>
int main()
{
	char str[30][50];//������ʡ�� 
  	int i,j,l;
  	for(i=0;i<30;i++){
      gets(str[i]);
  	}	
  	int m,n;//б������
  	int count=0;
  	for(i=0;i<30;i++)
    {
		for(j=0;j<50;j++)//������������ж�ÿһ��Ԫ��
	    {
	      for(l=j;l<50;l++)//����
	        if(str[i][j] < str[i][l])
	          count++;
	      
	      for(l=i;l<30;l++)//����
	        if(str[i][j] < str[l][j])
	          count++;
	
	      for(m=i,n=j;m<30 && n<50;m+=1,n+=1)//����,б��
	        if(str[i][j] < str[m][n])
	          count++;
	
	      for(m=i,n=j;m>=0 && n<50;m-=1,n+=1)//����,б��
	        if(str[i][j] !=str[m][n])
	          count++;
	    }
	}
  	printf("%d",count);
	return 0; 
} 
