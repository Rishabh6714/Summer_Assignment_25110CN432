// Remove duplicate from array
#include <stdio.h>
int main() 
{
   int n, arr[100], i, j, k;
   printf("Enter size of array: ");
   scanf("%d",&n);
   printf("Enter elements of array:");
   for(i=0; i<n; i++)
   {
     scanf("%d",&arr[i]);
   }
     for(i=0; i<n; i++)
   {
     for(j=i+1; j<n; j++)
     {
        if(arr[i] == arr[j])
      {
        for(k=j; k<n-1; k++)
       {
           arr[k] = arr[k+1];
       }
        n--;
        j--;
      }
     } 
   }
       printf("after removing duplicates:\n");
        for(i=0; i<n; i++)
      {
          printf("%d", arr[i] );
      }
     return 0;
}
