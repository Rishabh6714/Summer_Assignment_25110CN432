// Multiplication of matrix
#include <stdio.h>
int main() 
{
  int row, col, n, i, j, k; 
  int a[10][10], b[10][10], c[10][10];
  printf("Enter row and column of matrix A: ");
  scanf("%d%d",&row,&col);
  printf("Enter column of matrix B: ");
  scanf("%d",&n);
  
  printf("Enter elements of matrix A:\n");
  for(i=0; i<row; i++)
  for(j=0; j<col; j++)
  scanf("%d",&a[i][j]);

  printf("Enter elements of matrix B:\n");
  for(i=0; i<col; i++)
  for(j=0; j<n; j++)
  scanf("%d",&b[i][j]);
  
   for(i=0; i<row; i++)
    {
      for(j=0; j<n; j++)
       {
         c[i][j] = 0;
         for(k=0; k<col; k++)
         { 
            c[i][j] += a[i][k] * b[k][j];
         }
       }
    }
  printf("Multiplication of matrix:\n");
  for(i=0; i<row; i++)
  {
   for(j=0; j<n; j++)
    printf("%d ",c[i][j]);
    printf("\n");
  }
    return 0;
}