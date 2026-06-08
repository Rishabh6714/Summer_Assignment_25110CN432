#include <stdio.h>
int max (int x , int y)
{
 if (x>y)
 return x ;
 else 
 return y;
}
 int main()
{
 int a , b , c ; 
 printf("Enter two numbers: ");
 scanf("%d %d" , &a,&b);
 c = max(a , b);
 printf(" The Maximum Numbers is : %d" ,c);
 return 0 ;
}