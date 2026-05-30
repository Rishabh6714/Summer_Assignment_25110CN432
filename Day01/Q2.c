#include <stdio.h>
int main()
{
 int n, i , temp;
 printf("Enter the number: ");
 scanf("%d", &n);
 for(i = 1; i <= 10; i++)
{
  temp=n*i;
 printf("%d\n",temp);
}
return 0;
}
