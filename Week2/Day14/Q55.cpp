#include <stdio.h>
int main()
{
 int n, arr[100], i, lar, secondlar;
 printf("Enter size of array: ");
 scanf("%d", &n);
 printf("Enter elements: ");
 for(i = 0; i < n; i++)
 scanf("%d", &arr[i]);
 lar = secondlar = arr[0];

for(i = 1; i < n; i++)
{
   if(arr[i] > lar)
  {
    secondlar = lar;
    lar = arr[i];
 }
    else if(arr[i] > secondlar && arr[i] != lar)
    {
     secondlar = arr[i];
    }
}
  printf("Second Largest Element = %d", secondlar);
 return 0;
}