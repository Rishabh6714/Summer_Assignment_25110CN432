#include <stdio.h>
int main() 
{
int start, end, n, temp, rem, sum;
printf("Enter start and end: ");
scanf("%d %d", &start, &end);
for(n = start; n <= end; n++) {
temp = n;
sum = 0;
while(temp != 0) 
{
rem = temp % 10;
sum = sum + (rem * rem * rem);
temp = temp / 10;
}
if(sum == n)
printf("%d ", n);
}
return 0;
}