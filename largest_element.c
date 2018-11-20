/* Program to find largest element in an array */

#include<stdio.h>

int largest(int arr[],int k)
{
  int i,largest_val,size; 
 
  printf("\n size is %d",k);
  largest_val=arr[0];
  for(i=1;i<k;i++)
  {
    if(arr[i]>largest_val)
      largest_val=arr[i];
  }
  return largest_val;
}



int main()
{
  int i,array[]={12,10,22,28};
  int max,size;
  size=sizeof(array)/sizeof(array[0]);
  max=largest(array,size);
  printf("\nLargest value of array is %d\n",max);
  return 0;
}
