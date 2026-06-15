// Union of two arrays
#include <stdio.h>
int main()
{
 int x, y, a[100], b[100], c[200];
 int i, j, k;
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
 for(i = 0; i < x; i++)
  {
   c[i] = a[i];
  }
    k = x; // k keeps current size of array
    for(i = 0; i < y; i++) 
    {
      int Duplicate = 0;
      for(j = 0; j < k; j++)
      {
        if(b[i] == c[j])
        {
          Duplicate = 1;
          break;
        }
      }
        if(!Duplicate) 
        {
          c[k] = b[i];
          k++;
        }
    }
    printf("Union of Arrays: ");
    for(i = 0; i < k; i++) 
    printf("%d ", c[i]);
    return 0;
}