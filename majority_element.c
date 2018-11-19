/* C Program for Majority Element in the array */

#include<stdio.h>
int main()
{
  int i,j,n,ar[20],k,p=0;
  printf("Enter the number of element : ");
  scanf("%d",&n);
  printf("\nEnter the eliment of this array\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&ar[i]);
  }

  for(i=0;i<n;i++)
  {
    k=0;
    for(j=0;j<n;j++)
    {
      if(ar[i]==ar[j])
        k++;
    }
    if(k>(n/2))                                                         
    {
      printf(" major element found = %d\n",ar[i]);p++;
      break;
    }
  }
  if(p==0)
   printf("\nmajor element is not present \n");
return 0;
}
