// Remove all duplicates from string
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100];
    int i, j, flag;
    printf("Enter any string: ");
    scanf("%s",str1);
    printf("After removing duplicates: ");
    for(i = 0; str1[i] != '\0'; i++)
    {
        flag = 0;
        for(j = 0; j < i; j++)
        {
            if(str1[i] == str1[j])
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
            printf("%c", str1[i]);
    }
    return 0;
}
