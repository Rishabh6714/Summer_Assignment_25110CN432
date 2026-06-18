// Sum of columns of matrix
#include <stdio.h>
int main() 
{
  int r, c, i, j, csum; 
  int a[10][10];
  printf("Enter row and column of matrix: ");
  scanf("%d%d",&r,&c);
  printf("Enter elements of matrix:\n");
  for(i=0; i<r; i++)
  for(j=0; j<c; j++)
  scanf("%d",&a[i][j]);
   for(j=0; j<c; j++)
  {
    csum=0;
    for(i=0; i<r; i++)
     {
       csum = csum + a[i][j];
     }
     printf("Sum of column %d = %d\n",j+1,csum);
  }
return 0;
}