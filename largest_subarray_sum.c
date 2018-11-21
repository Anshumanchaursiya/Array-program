/* Largest Sum Contiguous Subarray */
//algorithm used: Kadane’s Algorithm (from geeks for geeks)

#include<stdio.h>
int largest_subarray(int arr[],int size)
{
   int i,j,max_sum=0,end_sum=0;
   for(i=0;i<size;i++)
   {
     end_sum=end_sum+arr[i];
     if(end_sum<0)
       end_sum=0;  
     if(max_sum<end_sum)
       max_sum=end_sum;
   }
   return(max_sum);

}


int main()
{
  int i,j,n,array[100];
  printf("Enter the number of element: ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&array[i]);

  printf("\nThis is the largest sum of contiguous subarray: %d\n",largest_subarray(array,n));
  return 0;
}
