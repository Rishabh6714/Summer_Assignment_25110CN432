// Find Common Elements
#include <stdio.h>
int main()
{
 int x, y, a[100], b[100], i, j;
 printf("Enter size of first array: ");
 scanf("%d", &x);
 printf("Enter size of second array: ");
 scanf("%d", &y);
 printf("Enter elements of first array: ");
 for(i = 0; i < x; i++) 
 scanf("%d", &a[i]);
 printf("Enter elements of second array: ");
 for(i = 0; i < y; i++) 
 scanf("%d", &b[i]);
 
 printf("Common elements : ");
 
 for(i = 0; i < x; i++)
  {
    for(j = 0; j < y; j++) 
    {
      if(a[i] == b[j])
        {
          printf("%d ", a[i]);
          break; 
    }
  }
  return 0;
}
