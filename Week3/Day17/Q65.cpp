// Merge Two Arrays
#include <stdio.h>
int main()
{
    int x, y, a[100], b[100], i, j;
    printf("Enter size of first array: ");
    scanf("%d",&x);
    printf("Enter size of second array: ");
    scanf("%d",&y);
    printf("Enter elements of first array: ");
    for(i = 0; i < x; i++)
   {
     scanf("%d",&a[i]);
   }
    printf("Enter elements of second array: ");
    for(j = 0; j < y; j++)
   {
       scanf("%d",&b[j]);
   }
    int c[x + y];
    for(i = 0; i < x; i++)
   {
     c[i] = a[i];
   }
    for(i= 0; i < y; i++)
   {
     c[x + i] = b[i];
   }
    printf("Merged Array:\n");
    for(i= 0; i < x+y; i++) 
    {
      printf("%d ", c[i]);
    }
    return 0;
}