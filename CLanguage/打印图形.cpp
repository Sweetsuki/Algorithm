#include <stdio.h>
int main()
{
	//�������η���һ 
/*	for(int i=0;i<9;i++)
	{
		printf("*");	
	}
	printf("\n");
	for(int j=0;j<9;j++)
	{
		if(j==0||j==8){
			printf(" ");
		}
		else{
			printf("*"); 
		}
	}
	printf("\n");
	for(int j=0;j<9;j++)
	{
		if(j==0||j==8||j==1||j==7){
			printf(" ");
		}
		else{
			printf("*"); 
		}
	}
	printf("\n");
	for(int j=0;j<9;j++)
	{
		if(j==0||j==8||j==2||j==1||j==7||j==6){
			printf(" ");
		}
		else{
			printf("*"); 
		}
	}
	printf("\n");
	for(int j=0;j<9;j++)
	{
		if(j==0||j==8||j==2||j==3||j==5||j==1||j==7||j==6){
			printf(" ");
		}
		else{
			printf("*"); 
		}
	}		*/
	
	//�������η����� 
//    int l,w,r,c,n,h;
//    //scanf("%d",&l);
//    /*˼·����Ȼ���������ε�ֵΪС������ô���������ε�ֵ�������Ǵ�С��
//    ��˽��ո�ֱ�����������Ǻ������ε�ֵ����Ϊ��С
//    */
//    n=0;
//    c=1;
//    h=9;//ͨ���۲����������ε����һ�п��Եõ���һ�е��Ǻ�����=����*2-1 
//    while(c<=5)
//    {
//        r=1;
//        w=1;
//        while(r<=n)
//        {
//            printf(" ");
//            r++;
//        }
//        while(w<=h)
//        {
//            printf("*");
//            w++;
//        }
//        printf("\n");
//        n++;
//        h-=2;
//        c++;
//    }

//		for(int j=0;j<3;j++)
//		{
//			if(j==2)
//				printf("*");
//			else
//				printf(" ");
//		}
//		printf("\n");
//		for(int j=0;j<3;j++)
//		{
//			if(j==0)
//				printf(" ");
//			else
//				printf("*");
//		}
//		printf("\n");
//		for(int j=0;j<3;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		for(int j=0;j<3;j++)
//		{
//			if(j==2)
//				printf(" ");
//			else
//				printf("*");
//		}
//		printf("\n");
//		for(int j=0;j<3;j++)
//		{
//			if(j==0)
//				printf("*");
//			else
//				printf(" ");
//		}
	char a[10][10]={"*********************************"};
	int i=0,j=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(a[i][j]);
		}
		printf("\n"); 
	}	
	return 0;
} 
