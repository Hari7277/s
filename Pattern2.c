/*2) WAP to print the below pattern  

ABCDE
_BCDE
__CDE
___DE
____E*/


#include <stdio.h>
int main()
{
    int i, j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j>=i)
              printf("%c",'A' + j-1);
            else
              printf("_");
        }
        printf("\n");
    }
    return 0;
}
