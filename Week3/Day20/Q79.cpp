// Sum of rows of matrix
#include <stdio.h>
int main() 
{
  int r, c, i, j, rsum; 
  int a[10][10];
  printf("Enter row and column of matrix: ");
  scanf("%d%d",&r,&c);
  printf("Enter elements of matrix:\n");
  for(i=0; i<r; i++)
  for(j=0; j<c; j++)
  scanf("%d",&a[i][j]);
  for(i=0; i<r; i++)
  {
    rsum=0;
    for(j=0; j<c; j++)
     {
       rsum = rsum + a[i][j];
     }
     printf("Sum of Row %d = %d\n",i+1,rsum);
  }
return 0;
}
