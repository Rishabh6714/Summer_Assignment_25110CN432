#include <stdio.h>
int main()
{
   int arr[100], n, i, lar, small;
   printf("Enter the size: ");
   scanf("%d", &n);
   printf("Enter elements:\n");
   for(i = 0; i < n; i++)
    {
       scanf("%d", &arr[i]);
    }
       lar=small=arr[0];
       for(i = 1; i < n; i++)
     {
        if (arr[i]>lar) 
        lar = arr[i];
        if (arr[i]<small)
        small = arr[i];
     }
       printf("The largest is : %d\n", lar);
       printf("The smallest is : %d", small);
    
  return 0;
} 
