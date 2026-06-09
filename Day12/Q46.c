#include <stdio.h>
int Armstrong(int x)
{
 int rem, sum=0, temp=x;
 while(temp != 0)
 {
    rem = temp % 10;
    sum = sum + (rem * rem * rem);
    temp = temp / 10;
 }
 return (sum == x) ? 1 : 0;
}
 int main()
{
 int a; 
 printf("Enter three-digit number: ");
 scanf("%d" , &a);
 if(Armstrong(a))
    printf("The number is an Armstrong number.\n");
 else
    printf("The number is not an Armstrong number.\n");
 return 0 ;
}
 