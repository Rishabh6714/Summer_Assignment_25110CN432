// Subtract Two Matrix
#include <stdio.h>
int main() 
{
  int row, col,i, j;
  printf("Enter row and columns: ");
   scanf("%d%d",&row,&col);
  int a[row][col], b[row][col], subtract[row][col];
  printf("Enter elements of first matrix:\n");
  for(i = 0; i < row; i++)
   for(j = 0; j < col; j++)
    scanf("%d",&a[i][j]);
  
  printf("Enter elements of second matrix:\n");
   for(i = 0; i < row; i++)
    for(j = 0; j < col; j++)
     scanf("%d",&b[i][j]);
   
   for(i = 0; i < row; i++)
  {
    for(j = 0; j < col; j++)
   {
    subtract[i][j] = a[i][j] - b[i][j];
   }
  }
    printf("Subtraction of two matrix:\n");
    for(i = 0; i < row; i++)
    {
     for(j = 0; j < col; j++)
     printf("%d ", subtract[i][j]);
     printf("\n");
    }
    return 0;
}