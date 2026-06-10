#include <stdio.h>
int main()
{
   int arr[100], n, i, sum=0;
   float avg;
   printf("Enter the size: ");
   scanf("%d", &n);
   printf("Enter elements:\n");
   for(i = 0; i < n; i++)
    {
       scanf("%d", &arr[i]);
       sum = sum + arr[i];
    }
    avg = sum/n;
    
    printf("Sum is : %d\n", sum);
    printf("Average is : %.2f ", avg);
    
  return 0;
} 
