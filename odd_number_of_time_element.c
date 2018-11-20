/* Program for Find the Number Occurring Odd Number of Times */
//Basic approach


#include<stdio.h>
int main()
{
  int i,j,count,p,n,ar[20];
  printf("Enter the number of element: ");
  scanf("%d",&n);
  printf("\nEnter the element of this array: ");
  for(i=0;i<n;i++)
    scanf("%d",&ar[i]);
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      count=0;
      if(ar[i]==ar[j])
      {
        count++;
      }
    }
    if((count%2)!=0)
    {
      printf("\nThis is the number occering odd number of time: %d\n",ar[i]);
      break;
    }
  }
 return 0;
}
