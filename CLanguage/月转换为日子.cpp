#include <stdio.h>
int main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	switch(y)
	{
	case 1:printf("31");break;
	case 2:
	if((x%4==0)&&(x%100!=0)||(x%400==0))
	{
		printf("29");
	}else{
		printf("28");
	}break;	
	case 3:printf("31");break;
	case 4:printf("30");break;
	case 5:printf("31");break;
	case 6:printf("30");break;
	case 7:printf("31");break;
	case 8:printf("31");break;
	case 9:printf("30");break;
	case 10:printf("31");break;	
	case 11:printf("30");break;	
	case 12:printf("31");break;
	default:printf("ERROR");
	}
	return 0;
}
