/*Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Output: Because nums[0] + nums[1] == 9, we return [0, 1].*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,tar=0,i=0,j=0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the target sum: ");
    scanf("%d",&tar);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      
    for(i=0;i<n;i++)
    {
        if(arr[i]<tar)
        {
            for(j=i+1;j<n;j++)
            {
              if(arr[i]+arr[j]==tar)
                 printf("[%d,%d]\n",i,j);
            }
        }
    }

    return 0;
}
