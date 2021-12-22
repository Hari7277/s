/*5.Write a c program to print all even and odd numbers btwn 1-100  

o/p : even numbers are : 2,4,6,....100

      odd numbers are : 1,3,5,.....99*/
      


#include<stdio.h>
int main()
{
	int i=0,j=0,a=0,b=0;
	
	printf("Even numbers are: ");
	a=2;
x:	if(a<=100)
	{
		printf(" %d",a);
		a+=2;
		goto x;
	}
	
	printf("\nOdd numbers are: ");
	b=1;
y:	if(b<=100)
	{
		printf(" %d",b);
		b+=2;
		goto y;
	}


	
	return 0;
	
}
