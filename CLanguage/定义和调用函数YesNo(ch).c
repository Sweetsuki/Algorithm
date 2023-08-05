#include <stdio.h>
void YesNo (char ch); 
int main(void)
{
    char ch;
    ch = getchar();
    putchar=YesNo(ch);
    return 0;
}
void YesNo (char ch)
{
    switch(ch){
        case 'y': 
        case 'Y': 
 printf("%c",Yes);

        default:  
printf("%c",No);
 
    }
