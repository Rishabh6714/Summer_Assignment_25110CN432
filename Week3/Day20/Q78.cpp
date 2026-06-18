#include <stdio.h>
int main() 
{
  int n, i, j, flag=0; 
  int a[10][10];
  printf("Enter size of square matrix: ");
  scanf("%d",&n);
  printf("Enter elements of matrix:\n");
  for(i=0; i<n; i++)
  for(j=0; j<n; j++)
  scanf("%d",&a[i][j]);
  for(i=0; i<n; i++)
  {
    for(j=0; j<n; j++)
     {
       if(a[i][j] != a[j][i])
       {
         flag=1;
         break;
       }
     }
  }
   if(flag==0)
     printf("Symmetric Matrix");
     else
     printf("Not Symmetric Matrix");
    return 0;
}
