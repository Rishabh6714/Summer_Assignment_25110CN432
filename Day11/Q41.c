#include <stdio.h>
int sum (int x , int y)
{
 return x + y;
}
 int main()
{
 int a , b , c ; 
 printf("Enter two numbers: ");
 scanf("%d %d" , &a,&b);
 c = sum(a , b);
 printf("sum of two numbers is : %d" ,c);
 return 0 ;
}
