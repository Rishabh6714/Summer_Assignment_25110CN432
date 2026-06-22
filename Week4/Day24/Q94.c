// Compress string
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100];
    int i, count = 0;
    printf("Enter any string: ");
    scanf("%s", str1);
    for(i = 0; str1[i] != '\0'; i++)
    {
        count = 1;
        while(str1[i] == str1[i+1])
        {
            count++;
            i++;
        }
      printf("%c%d",str1[i],count);
    }
    return 0;
}
