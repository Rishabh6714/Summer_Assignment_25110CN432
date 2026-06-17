// Diadonal sum of Matrix
#include <stdio.h>
int main()
{
 int n, i, j, sum=0;
 printf("Enter size of square matrix: ");
 scanf("%d",&n);
 int a[n][n];
 printf("Enter elements of matrix:\n");
 for(i = 0; i < n; i++)
 for(j = 0; j < n; j++)
 scanf("%d",&a[i][j]);
 for(i = 0; i < n; i++)
{
  for(j = 0; j < n; j++)
  {
   if(i==j)
    {
      sum+=a[i][j];
    }
  }
}
printf("Diagonal sum :%d ",sum);
return 0;
}
