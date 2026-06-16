// Selection sort
#include <stdio.h>
int main() 
{
    int n, a[100], i, j, min, temp;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter elements of array: ");
    for(i = 0; i < n; i++)
    scanf("%d", &a[i]);
    for(i = 0; i < n-1; i++)
    {
       min = i;
       for(j = i+1; j < n; j++)
       {
         if(a[j] < a[min])
          min = j;
       }
          temp = a[i];
          a[i] = a[min];
          a[min] = temp;
    }
        printf("Sorted Array; ");
        for(i = 0; i < n; i++)
        printf("%d ",a[i]);
        return 0;
}