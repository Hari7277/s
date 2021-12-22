/*3) WAP to print the below pattern 

AAAAA
_BBBB
__CCC
___DD
____E*/

#include<stdio.h>
void main()
{
    int i, j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j>=i)
              printf("%c",'A'-1 + i);
            else
              printf("_");
        }
        printf("\n");
    }
}
