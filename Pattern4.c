/*4) WAP to print the below pattern 

99999
_7777
__555
___33
____1*/

#include <stdio.h>

int main()
{
    int i,j;
    int k;
    k=9;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j>=i)
            {
                printf("%d",k);
            }
            else
              printf("_");
        }
        printf("\n");
        k=k-2;
    }

    return 0;
}

