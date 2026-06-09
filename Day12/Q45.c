#include <stdio.h>
int Palindrome(int x)
{
 int rem, rev=0, temp=x;
 while(temp != 0)
 {
    rem = temp % 10;
    rev = rev * 10 + rem;
    temp = temp / 10;
 }
 return (rev == x) ? 1 : 0;
}
 int main()
{
 int a; 
 printf("Enter the number: ");
 scanf("%d" , &a);
 if(Palindrome(a))
    printf("The number is a palindrome.\n");
 else
    printf("The number is not a palindrome.\n");
 return 0 ;
}
