#include <stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	if(x>38)
	{
		printf("Too big!"); 
	}else {
	if(x!=38)
	{
	printf("Too small!");
	}else{
		printf("Good Guess!"); 
	}
	}
	return 0;
}
