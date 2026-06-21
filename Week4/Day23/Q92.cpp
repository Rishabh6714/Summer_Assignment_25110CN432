// Max occuring character
#include <stdio.h>
#include <string.h>
int main()
{
  char str1[100], ch;
  int i, max = 0, count[256] = {0};
  printf("Enter any string: ");
  scanf("%s", str1);
  for(i = 0; str1[i] != '\0'; i++)
  count[str1[i]]++;
  for(i = 0; str1[i] != '\0'; i++)
    {
      if(count[str1[i]] > max)
        {
           max = count[str1[i]];
           ch = str1[i];
        }
    }
  printf("Maximum occurring character = %c", ch);
  printf("\nFrequency = %d", max);
  return 0;
}