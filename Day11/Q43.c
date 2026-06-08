#include <stdio.h>
int prime(int x )
{
 if (x<=0)
 return 0 ;
 for(int i=2; i<x; i++)
 {
 if(x % i==0)
 return 0;
 }
 return 1;
}
 int main()
{
 int a; 
 printf("Enter the number: ");
 scanf("%d" , &a);
 if (prime(a))
 printf("Is a Prime Number");
 else
 printf("Is Not a Prime Number");
 return 0 ;
}


