#include <stdio.h>
int main()
{
	//倒三角形方法一 
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
	
	//倒三角形方法二 
//    int l,w,r,c,n,h;
//    //scanf("%d",&l);
//    /*思路，既然正立三角形的值为小到大，那么倒立三角形的值，不就是大到小吗？
//    因此将空格直角三角形与星号三角形的值都设为大到小
//    */
//    n=0;
//    c=1;
//    h=9;//通过观察正立三角形的最后一行可以得到，一行的星号数量=行数*2-1 
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
