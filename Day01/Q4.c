#include <stdio.h>
int main() 
{
 int n, count = 0;
 printf("Enter the number: ");
 scanf("%d", &n);
 while(n != 0) 
 {
  n = n / 10;
  count++;
}
  printf("Digits of the number= %d", count);
  return 0;
}