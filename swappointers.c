/*Swapping two numbers using pointers without using extra variable*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0,b=0;
    printf("Enter the values of a and b: ");
    scanf("%d %d",&a,&b);
    int *c;
    c=&a;
    int *d;
    d=&b;
    printf("Before Swapping: a=%d b=%d\n",a,b);
    *c=*c+*d;
    *d=*c-*d;
    *c=*c-*d;
    printf("After Swapping a=%d b=%d",a,b);

    return 0;
}
