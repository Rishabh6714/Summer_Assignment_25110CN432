#include <stdio.h>
int main()
{
 int n, i, temp, arr[100];
 printf("Enter size of array: ");
 scanf("%d", &n);
 int start = 0, end = n - 1;
 printf("Enter elements: ");
 for(i = 0; i < n; i++)
 scanf("%d", &arr[i]);
 while(start < end)
 {
  temp = arr[start];
  arr[start] = arr[end];
  arr[end] = temp;
  start++;
  end--;
 }
   printf("Reversed array: ");
   for(i = 0; i < n; i++)
 {
   printf("%d ", arr[i]);
 }
 return 0;
}