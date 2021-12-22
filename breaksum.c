/*wap to calculate the sum of numbers (10 numbers max)

  a) If the user enters a negative number, the loop terminates

 b) If the user enters a negative number, it's not added to the result

 ex   a: user enters 

  1 - add to sum , 20, add to sum , 0 - terminate the loop and sum  should be printed 

  ex b : user enters  1 - add to sum , 20 , add to sum , -1 - dont add to sum - go to next iteration - print sum */
  
#include<stdio.h>
int main()
{
	int i,sum=0,n;
	for(i=1;i<=10;i++)
	{
		printf("Enter a number: ");
		scanf("%d",&n);
		if(n==0)
		{
			//printf("Sum is: %d\n",sum);
			break;
		}
		else if(n<0)
		{
			//printf("Sum is: %d\n",sum);
			continue;
		}
		else{
		  sum=sum+n;
		  //printf("Sum is: %d\n",sum);
	   }
	}
	printf("Sum is: %d\n",sum);
	return 0;
}
