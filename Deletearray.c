/*Deleting the values in an array*/

#include <stdio.h>

int main()
{
    int n,i=0,ind;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array:");
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
    
    printf("Enter the index to be deleted: ");
    scanf("%d",&ind);
    
    for(i=ind;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    n=n-1;
    printf("Array elements after deletion: ");
    for(i=0;i<n;i++)
      printf("%d ",arr[i]);
    
    return 0;
}
