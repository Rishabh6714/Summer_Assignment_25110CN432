// Transpose of Matrix
#include <stdio.h>
int main() 
{
  int row, col,i, j;
  printf("Enter row and columns: ");
   scanf("%d%d",&row,&col);
  int a[row][col], transpose[col][row];
  printf("Enter elements of matrix:\n");
  for(i = 0; i < row; i++)
   for(j = 0; j < col; j++)
    scanf("%d",&a[i][j]);
  
  
   for(i = 0; i < row; i++)
  {
    for(j = 0; j < col; j++)
   {
    transpose[j][i] = a[i][j];
   }
  }
    printf("Transpose of matrix:\n");
    for(i = 0; i < row; i++)
    {
     for(j = 0; j < col; j++)
     printf("%d ", transpose[i][j]);
     printf("\n");
    }
    return 0;
}
