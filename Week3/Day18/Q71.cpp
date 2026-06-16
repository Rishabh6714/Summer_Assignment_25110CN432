// Binary search
#include <stdio.h>
int main() 
{
    int n, a[100], i;
    int key, mid, beg, end;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter sorted elements of array: ");
    for(i = 0; i < n; i++)
    scanf("%d", &a[i]);
    printf("Enter element to search: ");
    scanf("%d", &key);
    beg = 0;
    end = n-1;
    
       while(beg <= end)
       {
         mid = (beg+end)/2;
         if(a[mid] == key)
        {
           printf("Element found at position: %d",mid + 1);
           return 0;
        }
        else if(key > a[mid])
        beg = mid + 1;
        else 
        end = mid - 1;
       }
         printf("Element not found");
        return 0;
}