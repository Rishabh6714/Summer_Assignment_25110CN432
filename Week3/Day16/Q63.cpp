// find pair with given sum
#include <stdio.h>
int main() 
{
   int n, arr[100], i, j, sum;
   printf("Enter size of array: ");
   scanf("%d",&n);
   printf("Enter elements of array:");
   for(i=0; i<n; i++)
   {
     scanf("%d",&arr[i]);
   }
     printf("Enter the sum:");
     scanf("%d",&sum);
     for(i=0; i<n; i++)
   {
     for(j=1; j<n; j++)
     {
        if(arr[i] + arr[j] == sum)
      {
       printf("The pair of given sum = (%d ,%d)\n",arr[i], arr[j]);
      }
     }
   }
     return 0;
}
