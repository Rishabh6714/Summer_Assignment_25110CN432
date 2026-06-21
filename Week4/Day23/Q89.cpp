// First non-repeating character
#include <stdio.h>
int main() 
{
  char str[100];
  int i, count[256]={0};
  printf("Enter any string: ");
  scanf("%99s", str);
  for(i = 0; str[i] != '\0'; i++) 
   {
    count[(unsigned char)str[i]]++;
   } 
    for(i = 0; str[i] != '\0'; i++)
    {
     if(count[(unsigned char)str[i]] == 1)
     {
       printf("First non-repeating character: %c\n", str[i]);
       return 0;
     }
    }
    printf("No non-repeating character\n");
    return 0;
}