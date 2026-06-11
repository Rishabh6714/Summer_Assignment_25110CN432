#include <stdio.h>
int main()
{
   int n, arr[100], key, i,count = 0;
   printf("Enter size of array: ");
   scanf("%d", &n);
   printf("Enter the elements: ");
   for(i = 0; i < n; i++)
   scanf("%d", &arr[i]);
   printf("Enter element to search: ");
   scanf("%d", &key);
   for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        count++;
    }
       printf("Frequncy = %d", count);
       return 0;
}
