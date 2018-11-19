/* Pgroram to sum of all element of an array */

#include<stdio.h>

int sum(int ar[],int n)
{
  int i,sum=0;
  for(i=0;i<n;i++)
  {
    sum+=ar[i];
  }
  return sum;
}

int main()
{
  int num,array[20],i,k;
  printf("Enter the element of array: ");
  scanf("%d",&num);
  printf("\nEnter the element of array:- ");
  for(i=0;i<num;i++)
    scanf("%d",&array[i]);
  k=sum(array,num);
  printf("\nsum = %d ",k);
  return 0;
}
