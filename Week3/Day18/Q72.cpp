// Array in descending order
#include <stdio.h>
int main() 
{
    int n, a[100], i, j, temp;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter elements of array: ");
    for(i = 0; i < n; i++)
    scanf("%d", &a[i]);
    for(i=0; i<n-1; i++)
    {
      for(j=i+1; j<n; j++)
      {
         if(a[i] < a[j])
        {
         temp = a[j];
         a[j] = a[i];
         a[i] = temp;
        }
      }   
    }
     printf("Descending order: ");
       for(i = 0; i < n; i++)
         printf("%d ",a[i]);
      return 0;
     }
    