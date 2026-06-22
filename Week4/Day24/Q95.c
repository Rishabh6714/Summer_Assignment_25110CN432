// Find longest word
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100];
    int i, len = 0, max = 0;
    int start = 0, maxstart =0; 
    printf("Enter any string: ");
    fgets(str1, sizeof(str1), stdin);
    for(i = 0; str1[i] != '\0'; i++)
    {
        if(str1[i] != ' ' && str1[i] != '\n')
        {
            len++;
        }
        else
      {
        if(len > max)
        {
            max = len;
            maxstart = start;
        }
            len = 0;
            start = i + 1;
      }
    }
    printf("Longest word: ");
    for(i = maxstart; i < maxstart + max; i++)
     {
        printf("%c", str1[i]);
     }
    printf("\nLength: %d", max);
    return 0;
}
