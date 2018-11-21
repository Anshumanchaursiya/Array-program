/* Program to find missing number in an array (elements is 1 to n) */

// basic approach

#include<stdio.h>
int missing_number(int arr[],int size)
{
  int i,sum=0;
  sum=((size*(size+1))/2);
  printf("\nsum= %d",sum);
  for(i=1;i<size;i++)
   sum-=arr[i];
  return sum; 
}


int main()
{
  int i,j,n,array[1000];
  printf("Enter the number of element: ");
  scanf("%d",&n);
  for(i=1;i<n;i++)
   scanf("%d",&array[i]);
  printf("\nThis is the missing number of the given array: %d\n",missing_number(array,n));

  return 0;
}
