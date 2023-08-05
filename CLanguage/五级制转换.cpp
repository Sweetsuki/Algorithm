#include <stdio.h>
int main()
{
	char x;
	x>='A'&&x<='Z';
	scanf("%c",&x);
	switch(x)
	{
	case 'A':printf("[90-100]\n");break;
	case 'B':printf("[80-90)\n");break;
	case 'C':printf("[70-80)\n");break;
	case 'D':printf("[60-700)\n");break;
	case 'E':printf("[0-60)\n");break;
	default:printf("ERROR\n");break;
	}
	return 0;
}
