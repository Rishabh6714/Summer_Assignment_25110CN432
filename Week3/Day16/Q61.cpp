// Missing number in array
#include <stdio.h>
int main() 
{
   int n, arr[100], i, arrsum = 0, totalsum;
   printf("Enter size of array: ");
   scanf("%d",&n);
   printf("Enter elements of array:");
   for(i=0; i<n-1; i++)
   {
     scanf("%d",&arr[i]);
   }
   totalsum = n*(n+1)/2;
   for(i=0; i<n; i++)
   {
     arrsum = arrsum + arr[i];
   }
   printf("Missing number is =%d",totalsum-arrsum);
   return 0;
}

