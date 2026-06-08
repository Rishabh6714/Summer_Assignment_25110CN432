#include <stdio.h>
long long Factorial(int x )
{
 long long fact = 1;
 for(int i=1; i<=x; i++)
 {
    fact = fact*i;
 }
 return fact;
}
 int main()
{
 int a; 
 printf("Enter the number: ");
 scanf("%d" , &a);
 printf("Factorial of the number is :%lld" , Factorial(a));
 return 0 ;
}
