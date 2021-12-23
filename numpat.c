/*wap to print  The number of consecutive same elements in the sequence should be same as the value.

Example: 1 2 2 3 3 3 4 4 4 4 is valid (input is 4 )              

1 2 2 3 3 3  is invalid. (input is 3)*/

#include<stdio.h>
int main()
{
	int i=0,j=0,n;
	printf("Enter the number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",i);
		}
	}
	return 0;
}
