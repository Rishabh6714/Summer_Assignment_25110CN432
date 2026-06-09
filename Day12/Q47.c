#include <stdio.h>
void Fibonacci(int x)
{
    int a = 0, b = 1, c, i;
    for(i = 1; i <= x; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
}

int main()
{
    int a;
    printf("Enter the term: ");
    scanf("%d", &a);
    printf("The Fibonacci series is: ");
    Fibonacci(a);
    return 0;
}
 