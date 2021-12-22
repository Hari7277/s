/* 1) WAP to print the below pattern 

*****
_****
__***
___**
____* */

#include <stdio.h>
int main()
{
    int i, j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j>=i)
              printf("*");
            else
              printf("_");
        }
        printf("\n");
    }
    return 0;
}

